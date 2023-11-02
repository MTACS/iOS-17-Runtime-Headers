
@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager <SBFZStackParticipantDelegate> {
    SBFZStackParticipant * _accessibilityZStackParticipant;
    FBSDisplayIdentity * _displayIdentity;
    bool  _multitaskingGesturesEnabled;
}

@property (nonatomic, retain) SBFZStackParticipant *accessibilityZStackParticipant;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithDisplayIdentity:(id)arg1;
- (bool)_isGestureWithTypeAllowed:(unsigned long long)arg1;
- (bool)_shouldEnableSystemGestureWithType:(unsigned long long)arg1;
- (id)accessibilityZStackParticipant;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setAccessibilityZStackParticipant:(id)arg1;
- (void)setSystemGesturesDisabledForAccessibility:(bool)arg1;
- (bool)shouldSystemGestureReceiveTouchWithLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldSystemGestureReceiveTouchWithLocation:(struct CGPoint { double x1; double x2; })arg1 ignoringUCB:(bool)arg2;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
