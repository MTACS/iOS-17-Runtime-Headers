
@interface TRAParticipant : NSObject <BSDescriptionProviding, BSInvalidatable, NSCopying, TRAPreferencesProviding, TRAPreferencesUpdating, TRAResolutionPoliciesProviding, TRASettingsActuationContextProviding, TRASettingsProviding, TRASettingsUpdating> {
    bool  __debugDelegateDidValidateLastSettings;
    NSString * __debugLastOrientationValidationFailureReason;
    TRAArbiter * _arbiter;
    TRASettings * _currentSettings;
    <TRAParticipantDelegate> * _delegate;
    bool  _invalidated;
    TRAPreferencesOrientation * _orientationPreferences;
    TRAOrientationResolutionPolicyInfo * _orientationResolutionPolicyInfo;
    TRASettings * _previousSettings;
    NSString * _role;
    <BSInvalidatable> * _stateDumpHandle;
    NSString * _uniqueIdentifier;
    TRAUserInterfaceStyleResolutionPolicyInfo * _userInterfaceStyleResolutionPolicyInfo;
    TRAPreferencesZOrderLevel * _zOrderLevelPreferences;
    TRASettingsActuationContext * userInterfaceStyleActuationContext;
}

@property (nonatomic) bool _debugDelegateDidValidateLastSettings;
@property (nonatomic, copy) NSString *_debugLastOrientationValidationFailureReason;
@property (nonatomic) TRAArbiter *arbiter;
@property (nonatomic, retain) TRASettings *currentSettings;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TRAParticipantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) TRASettingsActuationContext *orientationActuationContext;
@property (nonatomic, retain) TRAPreferencesOrientation *orientationPreferences;
@property (nonatomic, copy) TRAOrientationResolutionPolicyInfo *orientationResolutionPolicyInfo;
@property (nonatomic, retain) TRASettings *previousSettings;
@property (nonatomic, copy) NSString *role;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly, copy) TRASettingsActuationContext *userInterfaceStyleActuationContext;
@property (nonatomic, copy) TRAUserInterfaceStyleResolutionPolicyInfo *userInterfaceStyleResolutionPolicyInfo;
@property (nonatomic, retain) TRAPreferencesZOrderLevel *zOrderLevelPreferences;

// Image: /System/Library/PrivateFrameworks/TraitsArbiter.framework/TraitsArbiter

- (void).cxx_destruct;
- (bool)_debugDelegateDidValidateLastSettings;
- (id)_debugLastOrientationValidationFailureReason;
- (id)_setupStateDump;
- (id)arbiter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentAmbientDisplayStyle;
- (long long)currentAmbientPresentedFlag;
- (long long)currentDeviceOrientation;
- (long long)currentOrientation;
- (id)currentSettings;
- (long long)currentUserInterfaceStyle;
- (double)currentZOrderLevel;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)hasAnyActuationContext;
- (id)initWithRole:(id)arg1 uniqueIdentifier:(id)arg2 delegate:(id)arg3 arbiter:(id)arg4;
- (void)invalidate;
- (id)orientationActuationContext;
- (id)orientationPreferences;
- (id)orientationResolutionPolicyInfo;
- (long long)previousAmbientDisplayStyle;
- (long long)previousAmbientPresentedFlag;
- (long long)previousDeviceOrientation;
- (long long)previousOrientation;
- (id)previousSettings;
- (long long)previousUserInterfaceStyle;
- (double)previousZOrderLevel;
- (id)role;
- (void)setArbiter:(id)arg1;
- (void)setCurrentSettings:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsUpdatePreferencesWithReason:(id)arg1;
- (void)setNeedsUpdatePreferencesWithReason:(id)arg1 animate:(bool)arg2;
- (void)setNeedsUpdatePreferencesWithReason:(id)arg1 force:(bool)arg2;
- (void)setNeedsUpdatePreferencesWithReason:(id)arg1 force:(bool)arg2 animate:(bool)arg3;
- (void)setOrientationPreferences:(id)arg1;
- (void)setOrientationResolutionPolicyInfo:(id)arg1;
- (void)setPreviousSettings:(id)arg1;
- (void)setRole:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setUserInterfaceStyleResolutionPolicyInfo:(id)arg1;
- (void)setZOrderLevelPreferences:(id)arg1;
- (void)set_debugDelegateDidValidateLastSettings:(bool)arg1;
- (void)set_debugLastOrientationValidationFailureReason:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uniqueIdentifier;
- (void)updateAmbientPresentationSettingsWithBlock:(id /* block */)arg1;
- (void)updateOrientationPreferencesWithBlock:(id /* block */)arg1;
- (void)updateOrientationSettingsWithBlock:(id /* block */)arg1;
- (void)updatePreferencesIfNeeded;
- (void)updateUserInterfaceOrientationSettingsWithBlock:(id /* block */)arg1;
- (void)updateZOrderLevelPreferencesWithBlock:(id /* block */)arg1;
- (void)updateZOrderLevelSettingsWithBlock:(id /* block */)arg1;
- (id)userInterfaceStyleActuationContext;
- (id)userInterfaceStyleResolutionPolicyInfo;
- (id)zOrderLevelPreferences;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (long long)sbf_currentDeviceOrientation;
- (long long)sbf_currentOrientation;
- (long long)sbf_previousDeviceOrientation;
- (long long)sbf_previousOrientation;

@end
