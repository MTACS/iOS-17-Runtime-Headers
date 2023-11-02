
@interface SXDebugComponentView : SXComponentView {
    <SXLayoutInvalidator> * _invalidator;
}

@property (nonatomic, readonly) <SXLayoutInvalidator> *invalidator;

- (void).cxx_destruct;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 invalidator:(id)arg5;
- (id)invalidator;
- (void)loadComponent:(id)arg1;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; bool x3; })arg1;

@end
