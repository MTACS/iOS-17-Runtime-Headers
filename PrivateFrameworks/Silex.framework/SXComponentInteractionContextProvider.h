
@interface SXComponentInteractionContextProvider : NSObject <SXInteractionContextProviding> {
    <SXActionManager> * _actionManager;
    <SXComponentInteractionHandlerManager> * _componentInteractionHandlerManager;
    SXComponentInteraction * _currentInteraction;
}

@property (nonatomic, readonly) <SXActionManager> *actionManager;
@property (nonatomic, readonly) <SXComponentInteractionHandlerManager> *componentInteractionHandlerManager;
@property (nonatomic) SXComponentInteraction *currentInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionManager;
- (void)commitPreviewViewController:(id)arg1;
- (id)componentInteractionHandlerManager;
- (id)contextMenuAtLocation:(struct CGPoint { double x1; double x2; })arg1 viewport:(id)arg2;
- (id)currentInteraction;
- (id)initWithComponentInteractionHandlerManager:(id)arg1 actionManager:(id)arg2;
- (void)setCurrentInteraction:(id)arg1;
- (id)targetedPreviewAtLocation:(struct CGPoint { double x1; double x2; })arg1 viewport:(id)arg2;
- (id)toolTipAtLocation:(struct CGPoint { double x1; double x2; })arg1 viewport:(id)arg2;

@end
