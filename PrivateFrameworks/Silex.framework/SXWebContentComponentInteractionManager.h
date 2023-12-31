
@interface SXWebContentComponentInteractionManager : NSObject {
    <SXWebContentComponentInteractionHandlerFactory> * _componentInteractionHandlerFactory;
    SXComponentView * _componentView;
    <SXComponentInteractionHandler> * _currentInteractionHandler;
    <SXComponentInteractionHandlerManager> * _interactionHandlerManager;
    <SWInteractionProvider> * _interactionProvider;
}

@property (nonatomic, readonly) <SXWebContentComponentInteractionHandlerFactory> *componentInteractionHandlerFactory;
@property (nonatomic, readonly) SXComponentView *componentView;
@property (nonatomic, retain) <SXComponentInteractionHandler> *currentInteractionHandler;
@property (nonatomic, readonly) <SXComponentInteractionHandlerManager> *interactionHandlerManager;
@property (nonatomic, readonly) <SWInteractionProvider> *interactionProvider;

- (void).cxx_destruct;
- (id)componentInteractionHandlerFactory;
- (id)componentView;
- (id)currentInteractionHandler;
- (id)initWithComponentView:(id)arg1 interactionProvider:(id)arg2 interactionHandlerManager:(id)arg3 componentInteractionHandlerFactory:(id)arg4;
- (id)interactionHandlerManager;
- (id)interactionProvider;
- (void)manageInteractionHandlerForInteraction:(id)arg1;
- (void)setCurrentInteractionHandler:(id)arg1;

@end
