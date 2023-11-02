
@interface SXButtonComponentViewFactory : SXComponentViewFactory {
    <SXActionComponentInteractionHandlerFactory> * _interactionHandlerFactory;
    <SXComponentInteractionHandlerManager> * _interactionHandlerManager;
}

@property (nonatomic, readonly) <SXActionComponentInteractionHandlerFactory> *interactionHandlerFactory;
@property (nonatomic, readonly) <SXComponentInteractionHandlerManager> *interactionHandlerManager;

- (void).cxx_destruct;
- (id)componentViewForComponent:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4 interactionHandlerFactory:(id)arg5 interactionHandlerManager:(id)arg6;
- (id)interactionHandlerFactory;
- (id)interactionHandlerManager;
- (int)role;
- (id)type;

@end
