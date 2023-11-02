
@interface _UIPhysicalButtonInteractionArbiter : NSObject <BSDebugDescriptionProviding, _UIWindowHostingSceneComponentProviding, _UIWindowLevelObserver> {
    struct { 
        unsigned int hasScheduledDeferredConfigurationResolution : 1; 
        unsigned int hasScheduledDeferredConfigurationResolutionForReentrancy : 1; 
        unsigned int configurationResolutionPaused : 1; 
        unsigned int needsConfigurationResolutionWhenResumed : 1; 
        unsigned int systemShellRequestedConfigurationResolution : 1; 
    }  _arbiterFlags;
    CADisplayLink * _deferredConfigurationResolutionDisplayLink;
    id /* block */  _interactionValidationBlock;
    _UIViewServiceSessionActivityRecord * _mostActiveViewServiceSession;
    _UIEvaluatedObjectCache * _registeredAndSortedInteractions;
    unsigned long long  _resolutionStrategy;
    UIScene * _scene;
    _UIPhysicalButtonConfigurationResolutionContext * _sceneConfigurationResolutionContext;
    <BSInvalidatable> * _stateCaptureToken;
    <_UIPhysicalButtonInteractionArbiterSystemShellDelegate> * _systemShellDelegate;
    NSMapTable * _systemShellWindowConfigurationResolutionContexts;
    NSHashTable * _systemShellWindowsRequiringResolution;
    _UIPhysicalButtonInteraction * _topEvaluatedInteraction;
    NSMutableArray * _uniqueConfigurationGenerationNumbers;
    NSHashTable * _viewServiceObservers;
    id /* block */  _viewServiceValidationBlock;
    NSCountedSet * _windowPointersObservedForLevelChanges;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <_UIPhysicalButtonInteractionArbiterSystemShellDelegate> *systemShellDelegate;

- (void).cxx_destruct;
- (id)_actionRespondersForScene:(id)arg1;
- (void)_deferredResolutionDisplayLinkTicked:(id)arg1;
- (void)_mostActiveViewServiceSessionDidChange:(id)arg1;
- (id)_scene;
- (void)_sceneWillInvalidate:(id)arg1;
- (void)_setScene:(id)arg1;
- (void)_windowHostingScene:(id)arg1 willMoveFromScreen:(id)arg2 toScreen:(id)arg3;
- (void)_windowVisibilityDidChange:(id)arg1;
- (id)configurationResolutionContextForSystemShellWindow:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithScene:(id)arg1;
- (void)setNeedsResolutionOfPhysicalButtonConfigurationsForSystemShellDelegate:(id)arg1;
- (void)setSystemShellDelegate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)systemShellDelegate;
- (void)window:(id)arg1 changedFromLevel:(double)arg2 toLevel:(double)arg3;

@end
