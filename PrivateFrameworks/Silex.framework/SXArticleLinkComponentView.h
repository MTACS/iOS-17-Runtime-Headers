
@interface SXArticleLinkComponentView : SXContainerComponentView {
    <SXURLActionFactory> * _URLActionFactory;
    <SXArticleURLFactory> * _articleURLFactory;
    <SXComponentInteractionHandler> * _interactionHandler;
    <SXActionComponentInteractionHandlerFactory> * _interactionHandlerFactory;
    <SXComponentInteractionHandlerManager> * _interactionHandlerManager;
}

@property (nonatomic, readonly) <SXURLActionFactory> *URLActionFactory;
@property (nonatomic, readonly) <SXArticleURLFactory> *articleURLFactory;
@property (nonatomic) <SXComponentInteractionHandler> *interactionHandler;
@property (nonatomic, readonly) <SXActionComponentInteractionHandlerFactory> *interactionHandlerFactory;
@property (nonatomic, readonly) <SXComponentInteractionHandlerManager> *interactionHandlerManager;

- (void).cxx_destruct;
- (id)URLActionFactory;
- (id)articleURLFactory;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 mediaSharingPolicyProvider:(id)arg5 interactionHandlerManager:(id)arg6 interactionHandlerFactory:(id)arg7 URLActionFactory:(id)arg8 articleURLFactory:(id)arg9;
- (id)interactionHandler;
- (id)interactionHandlerFactory;
- (id)interactionHandlerManager;
- (void)loadComponent:(id)arg1;
- (void)setInteractionHandler:(id)arg1;

@end
