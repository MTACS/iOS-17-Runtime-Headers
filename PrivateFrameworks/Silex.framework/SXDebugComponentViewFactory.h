
@interface SXDebugComponentViewFactory : SXComponentViewFactory {
    <SXLayoutInvalidator> * _invalidator;
}

@property (nonatomic, readonly) <SXLayoutInvalidator> *invalidator;

- (void).cxx_destruct;
- (id)componentViewForComponent:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4 invalidator:(id)arg5;
- (id)invalidator;
- (int)role;
- (id)type;

@end
