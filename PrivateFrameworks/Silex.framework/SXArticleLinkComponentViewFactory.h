
@interface SXArticleLinkComponentViewFactory : SXContainerComponentViewFactory {
    <SXURLActionFactory> * _URLActionFactory;
    <SXArticleURLFactory> * _articleURLFactory;
    <SXActionComponentInteractionHandlerFactory> * _interactionHandlerFactory;
    <SXComponentInteractionHandlerManager> * _interactionHandlerManager;
}

@property (nonatomic, readonly) <SXURLActionFactory> *URLActionFactory;
@property (nonatomic, readonly) <SXArticleURLFactory> *articleURLFactory;
@property (nonatomic, readonly) <SXActionComponentInteractionHandlerFactory> *interactionHandlerFactory;
@property (nonatomic, readonly) <SXComponentInteractionHandlerManager> *interactionHandlerManager;

- (void).cxx_destruct;
- (id)URLActionFactory;
- (id)articleURLFactory;
- (id)componentViewForComponent:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4 mediaSharingPolicyProvider:(id)arg5 interactionHandlerManager:(id)arg6 interactionHandlerFactory:(id)arg7 URLActionFactory:(id)arg8 articleURLFactory:(id)arg9;
- (id)interactionHandlerFactory;
- (id)interactionHandlerManager;
- (int)role;
- (id)type;

@end
