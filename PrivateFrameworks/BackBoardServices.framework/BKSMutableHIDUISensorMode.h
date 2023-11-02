
@interface BKSMutableHIDUISensorMode : BKSHIDUISensorMode

@property (nonatomic) bool alwaysOnGesturesEnabled;
@property (nonatomic) unsigned long long changeSource;
@property (nonatomic) bool coverGestureEnabled;
@property (nonatomic) bool digitizerEnabled;
@property (nonatomic) long long displayState;
@property (nonatomic) bool estimatedProximityMode;
@property (nonatomic, copy) NSSet *multitouchHostStateKeys;
@property (nonatomic) bool pocketTouchesExpected;
@property (nonatomic) bool postEventWithCurrentDetectionMask;
@property (nonatomic) int proximityDetectionMode;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic) bool tapToWakeEnabled;
@property (nonatomic) long long versionedPID;
@property (nonatomic) bool wakeOnLongPressEnabled;
@property (nonatomic) bool wakeOnLongPressThroughEnabled;
@property (nonatomic) bool wakeOnSwipeEnabled;
@property (nonatomic) bool wakeOnSwipeThroughEnabled;
@property (nonatomic) bool wakeOnTapThroughEnabled;

- (void)_setSettingKey:(id)arg1 enabled:(bool)arg2;
- (id)initWithReason:(id)arg1;
- (void)setAlwaysOnGesturesEnabled:(bool)arg1;
- (void)setChangeSource:(unsigned long long)arg1;
- (void)setCoverGestureEnabled:(bool)arg1;
- (void)setDigitizerEnabled:(bool)arg1;
- (void)setDisplayState:(long long)arg1;
- (void)setEstimatedProximityMode:(bool)arg1;
- (void)setMultitouchHostStateKeys:(id)arg1;
- (void)setPocketTouchesExpected:(bool)arg1;
- (void)setPostEventWithCurrentDetectionMask:(bool)arg1;
- (void)setProximityDetectionMode:(int)arg1;
- (void)setReason:(id)arg1;
- (void)setTapToWakeEnabled:(bool)arg1;
- (void)setVersionedPID:(long long)arg1;
- (void)setWakeOnLongPressEnabled:(bool)arg1;
- (void)setWakeOnLongTapThroughEnabled:(bool)arg1;
- (void)setWakeOnSwipeEnabled:(bool)arg1;
- (void)setWakeOnSwipeThroughEnabled:(bool)arg1;
- (void)setWakeOnTapThroughEnabled:(bool)arg1;

@end
