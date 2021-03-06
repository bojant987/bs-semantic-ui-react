open Sui_tools;

[@bs.module "semantic-ui-react"]
external react : ReasonReact.reactClass = "Modal";

[@bs.obj]
external makeProps :
  (
    ~actions: array(ReasonReact.reactElement)=?,
    ~_as: js=? /* TODO: actions */,
    ~basic: bool=?,
    ~className: string=? /* TODO: closeIcon */,
    ~closeOnDimmerClick: bool=?,
    ~closeOnDocumentClick: bool=?,
    ~content: ReasonReact.reactElement=?,
    ~dimmer: js=? /* bool or inverted or blurring */,
    ~eventPool: string=?,
    ~header: ReasonReact.reactElement=? /* TODO: mountNode */,
    ~onActionClick: (ReactEventRe.Mouse.t, Js.t({..})) => unit=?,
    ~onClose: (ReactEventRe.Synthetic.t, Js.t({..})) => unit=?,
    ~onMount: unit => unit=?,
    ~onOpen: (ReactEventRe.Synthetic.t, Js.t({..})) => unit=?,
    ~onUnmount: unit => unit=?,
    ~_open: bool=?,
    ~size: string=? /* fullscreen large mini small tiny */ /* TODO: style */,
    ~trigger: ReasonReact.reactElement=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~actions=?,
      ~_as=?,
      ~basic=?,
      ~className=?,
      ~closeOnDimmerClick=?,
      ~closeOnDocumentClick=?,
      ~content=?,
      ~dimmer=?,
      ~eventPool=?,
      ~header=?,
      ~onActionClick=?,
      ~onClose=?,
      ~onMount=?,
      ~onOpen=?,
      ~onUnmount=?,
      ~_open=?,
      ~size=?,
      ~trigger=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=react,
    ~props=
      makeProps(
        ~actions?,
        ~_as=?fromStringOrReactClass(_as),
        ~basic?,
        ~className?,
        ~closeOnDimmerClick?,
        ~closeOnDocumentClick?,
        ~content?,
        ~dimmer=?fromBoolOrInvertedOrBlurring(dimmer),
        ~eventPool?,
        ~header?,
        ~onActionClick?,
        ~onClose?,
        ~onMount?,
        ~onOpen?,
        ~onUnmount?,
        ~_open?,
        ~size=?fromSizeModal(size),
        ~trigger?,
        (),
      ),
    children,
  );

module Actions = {
  [@bs.module "semantic-ui-react"] [@bs.scope "Modal"]
  external react : ReasonReact.reactClass = "Actions";
  [@bs.obj]
  external makeProps :
    (
      ~actions: array(ReasonReact.reactElement)=?,
      ~_as: js=?,
      ~className: string=?,
      ~content: ReasonReact.reactElement=?,
      ~onActionClick: (ReactEventRe.Mouse.t, Js.t({..})) => unit=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~actions=?,
        ~_as=?,
        ~className=?,
        ~content=?,
        ~onActionClick=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=react,
      ~props=
        makeProps(
          ~actions?,
          ~_as=?fromStringOrReactClass(_as),
          ~className?,
          ~content?,
          ~onActionClick?,
          (),
        ),
      children,
    );
};

module Content = {
  [@bs.module "semantic-ui-react"] [@bs.scope "Modal"]
  external react : ReasonReact.reactClass = "Content";
  [@bs.obj]
  external makeProps :
    (
      ~_as: js=?,
      ~className: string=?,
      ~content: ReasonReact.reactElement=?,
      ~image: bool=?,
      ~scrolling: bool=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (~_as=?, ~className=?, ~content=?, ~image=?, ~scrolling=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=react,
      ~props=
        makeProps(
          ~_as=?fromStringOrReactClass(_as),
          ~className?,
          ~content?,
          ~image?,
          ~scrolling?,
          (),
        ),
      children,
    );
};

module Description = {
  [@bs.module "semantic-ui-react"] [@bs.scope "Modal"]
  external react : ReasonReact.reactClass = "Description";
  [@bs.obj]
  external makeProps :
    (
      ~_as: js=?,
      ~className: string=?,
      ~content: ReasonReact.reactElement=?,
      unit
    ) =>
    _ =
    "";
  let make = (~_as=?, ~className=?, ~content=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=react,
      ~props=
        makeProps(
          ~_as=?fromStringOrReactClass(_as),
          ~className?,
          ~content?,
          (),
        ),
      children,
    );
};

module Header = {
  [@bs.module "semantic-ui-react"] [@bs.scope "Modal"]
  external react : ReasonReact.reactClass = "Header";
  [@bs.obj]
  external makeProps :
    (
      ~_as: js=?,
      ~className: string=?,
      ~content: ReasonReact.reactElement=?,
      unit
    ) =>
    _ =
    "";
  let make = (~_as=?, ~className=?, ~content=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=react,
      ~props=
        makeProps(
          ~_as=?fromStringOrReactClass(_as),
          ~className?,
          ~content?,
          (),
        ),
      children,
    );
};