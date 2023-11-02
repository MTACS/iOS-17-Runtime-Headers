
@interface _UIEventDeferringManager : NSObject <BSDebugDescriptionProviding, _UIEventDeferringEnvironmentTargetProviding, _UIEventDeferringManagerCoordinating, _UIEventDeferringRuleOwning, _UIWindowHostingSceneComponentProviding> {
    <_UIEventDeferringBehavior> * _behavior;
    _Atomic long long  _bufferingAssertionCount;
    unsigned long long  _currentState;
    struct { 
        unsigned int hasInvalidated : 1; 
        unsigned int evaluatedInitialExternalScreenDisconnection : 1; 
        unsigned int processingScreenIdentifierWillChange : 1; 
        unsigned int processedScreenIdentifierWillChange : 1; 
        unsigned int processingScreenIdentifierDidChange : 1; 
    }  _deferringManagerFlags;
    NSMutableDictionary * _localDeferringRecordsByEnvironment;
    NSCountedSet * _localTargetWindowPointersUnderObservation;
    NSString * _previousExternalScreenIdentifier;
    NSMutableDictionary * _remoteDeferringRecordStacksByEnvironment;
    UIScene * _scene;
    <BSInvalidatable> * _stateCaptureToken;
    NSMapTable * _targetWindowProvidersByEnvironment;
    NSMutableDictionary * _trackedLocalTargetWindowPointersByEnvironment;
    <BSInvalidatable> * _transactionAssertion;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (nonatomic, readonly) <_UIEventDeferringBehavior> *behavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIScene<_UISceneUIWindowHosting> *windowHostingScene;

+ (void)setSystemShellBehaviorDelegate:(id)arg1;
+ (id)systemShellBehaviorDelegate;

- (void).cxx_destruct;
- (void)_localTargetWindowDidAttachContext:(id)arg1;
- (void)_localTargetWindowDidDetachContext:(id)arg1;
- (id)_scene;
- (void)_sceneWillInvalidate:(id)arg1;
- (void)_screenUniqueIdDidChange:(id)arg1;
- (void)_screenUniqueIdWillChange:(id)arg1;
- (void)_setScene:(id)arg1;
- (void)_windowHostingScene:(id)arg1 didMoveFromScreen:(id)arg2 toScreen:(id)arg3;
- (id)behavior;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)eventDeferringManager:(id)arg1 didRemoveLocalCompatibilityRecordForDescriptor:(id)arg2;
- (id)initWithScene:(id)arg1;
- (long long)interfaceElementCategory;
- (id)localEventDeferringTargetWindowForEnvironment:(id)arg1;
- (void)setNeedsRemoteEventDeferringRuleComparisonInEnvironments:(id)arg1 forBehaviorDelegate:(id)arg2 withReason:(id)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)windowHostingScene;

@end
