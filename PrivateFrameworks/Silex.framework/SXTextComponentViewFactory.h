
@interface SXTextComponentViewFactory : SXComponentViewFactory {
    SXTangierController * _tangierController;
}

@property (nonatomic, readonly) SXTangierController *tangierController;

- (void).cxx_destruct;
- (id)componentViewForComponent:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4 tangierController:(id)arg5;
- (int)role;
- (id)tangierController;
- (id)type;

@end
