
@interface PGCommand : NSObject {
    NSDictionary * _dictionaryRepresentation;
}

@property (nonatomic, readonly) bool associatedBoolValue;
@property (nonatomic, readonly) double associatedDoubleValue;
@property (nonatomic, readonly) long long associatedIntegerValue;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) long long faceTimeAction;
@property (nonatomic, readonly) long long playbackAction;
@property (nonatomic, readonly) long long systemAction;
@property (nonatomic, readonly) long long testingAction;

+ (id)commandForBeginInterruption;
+ (id)commandForCancelPIP;
+ (id)commandForEndInterruptionWithShouldResumeSuggestion:(bool)arg1;
+ (id)commandForEndOrLeaveActivityRequested;
+ (id)commandForFaceTimeAction:(long long)arg1;
+ (id)commandForFaceTimeAction:(long long)arg1 associatedBoolValue:(bool)arg2;
+ (id)commandForFaceTimeAction:(long long)arg1 associatedIntegerValue:(long long)arg2;
+ (id)commandForInvalidateFromProxy;
+ (id)commandForMenuItemSelected:(long long)arg1;
+ (id)commandForPlaybackAction:(long long)arg1;
+ (id)commandForPlaybackAction:(long long)arg1 associatedBoolValue:(bool)arg2;
+ (id)commandForPlaybackAction:(long long)arg1 associatedDoubleValue:(double)arg2;
+ (id)commandForRestoreFromPIP;
+ (id)commandForSendActionButtonTapped;
+ (id)commandForSetCameraEnabled:(bool)arg1;
+ (id)commandForSetMicrophoneMuted:(bool)arg1;
+ (id)commandForSetMuted:(bool)arg1;
+ (id)commandForSetPlaying:(bool)arg1;
+ (id)commandForSetSuspended:(bool)arg1;
+ (id)commandForShowHUD;
+ (id)commandForSkipByInterval:(double)arg1;
+ (id)commandForSkipPreroll;
+ (id)commandForSkipToLive;
+ (id)commandForStartPIP;
+ (id)commandForSwitchCamera;
+ (id)commandForSystemAction:(long long)arg1;
+ (id)commandForTestStartPIP;
+ (id)commandForTestingAction:(long long)arg1;
+ (id)commandForToggleControlsVisibility;
+ (id)commandForToggleZoom;

- (void).cxx_destruct;
- (void)appendDescriptionForKey:(long long)arg1 value:(id)arg2 toBuilder:(id)arg3;
- (bool)associatedBoolValue;
- (double)associatedDoubleValue;
- (long long)associatedIntegerValue;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)dictionaryRepresentation;
- (long long)faceTimeAction;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)playbackAction;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)systemAction;
- (long long)testingAction;

@end
