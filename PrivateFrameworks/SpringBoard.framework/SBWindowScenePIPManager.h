
@interface SBWindowScenePIPManager : NSObject <SBFZStackParticipantDelegate> {
    bool  _assumingKeyboardIsVisible;
    NSMutableDictionary * _contentTypeToStashedPadding;
    NSMutableDictionary * _contentTypeToWindowLevelOverrideAssertions;
    NSMutableDictionary * _contentTypeToWindowMargins;
    _SBPIPEndStashTabSuppressionGestureManager * _endStashTabSuppressionGestureManager;
    SBPIPControllerCoordinator * _globalCoordinator;
    NSMutableDictionary * _sourceToEdgeInsets;
    NSMapTable * _stashAssertionsToCompoundAssertionMap;
    SBWindowScene * _windowScene;
    SBFZStackParticipant * _zStackParticipant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBPIPControllerCoordinator *globalCoordinator;
@property (readonly) unsigned long long hash;
@property (getter=_minimumStashedPadding, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumStashedPadding;
@property (getter=_sourceToEdgeInsets, nonatomic, copy) NSDictionary *sourceToEdgeInsets;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (void)_floatingDockHeightWillChange:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardWillRotate:(id)arg1;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_minimumStashedPadding;
- (void)_shelfHeightDidChange:(id)arg1;
- (id)_sourceToEdgeInsets;
- (void)_systemApertureInsetsDidChange:(id)arg1;
- (void)_updateFloatingDockInsetsWithoutNotifyingControllers;
- (id)_windowLevelOverrideAssertionsForContentType:(long long)arg1;
- (void)_windowManagementStyleDidChange:(id)arg1;
- (id)acquireStashAssertionForReason:(long long)arg1 identifier:(id)arg2;
- (id)acquireWindowLevelOverrideAssertionForControllerWithContentType:(long long)arg1 toWindowLevel:(unsigned long long)arg2 withReason:(long long)arg3 identifier:(id)arg4;
- (void)addStashTabSuppressionTarget:(id)arg1 action:(SEL)arg2;
- (void)applyPictureInPictureInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forSource:(long long)arg2;
- (void)applyStashedPictureInPicturePadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forPIPSource:(long long)arg2;
- (void)configureInsetsForIconController:(id)arg1;
- (id)globalCoordinator;
- (id)initWithGlobalCoordinator:(id)arg1;
- (bool)isPointWithinAnyPictureInPictureContent:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isZStackForegroundActive;
- (void)removeStashTabSuppressionTarget:(id)arg1 action:(SEL)arg2;
- (void)setNeedsUpdateZStackParticipantPreferencesWithReason:(id)arg1;
- (void)setSourceToEdgeInsets:(id)arg1;
- (void)updatePictureInPictureWindowLevels;
- (id)windowScene;
- (void)windowSceneDidConnect:(id)arg1;
- (void)windowSceneDidDisconnect:(id)arg1;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
