
@interface SXIssueCoverComponentViewFactory : SXComponentViewFactory {
    <SXIssueCoverViewProvider> * _viewProvider;
}

@property (nonatomic, readonly) <SXIssueCoverViewProvider> *viewProvider;

- (void).cxx_destruct;
- (id)componentViewForComponent:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4 viewProvider:(id)arg5;
- (int)role;
- (id)type;
- (id)viewProvider;

@end
