
@interface SXIssueCoverComponentView : SXComponentView {
    UIView * _coverView;
    <SXIssueCoverViewProvider> * _viewProvider;
}

@property (nonatomic, retain) UIView *coverView;
@property (nonatomic, readonly) <SXIssueCoverViewProvider> *viewProvider;

- (void).cxx_destruct;
- (id)coverView;
- (void)discardContents;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 viewProvider:(id)arg5;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; bool x3; })arg1;
- (void)renderContents;
- (void)renderIssueCover;
- (void)setCoverView:(id)arg1;
- (id)viewProvider;

@end
