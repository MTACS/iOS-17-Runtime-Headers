
@interface BKSHIDUISensorMode : NSObject <BSDescriptionStreamable> {
    unsigned long long  _changeSource;
    bool  _digitizerEnabled;
    long long  _displayState;
    bool  _estimatedProximityMode;
    NSSet * _multitouchHostStateKeys;
    bool  _pocketTouchesExpected;
    bool  _postEventWithCurrentDetectionMask;
    int  _proximityDetectionMode;
    NSString * _reason;
    long long  _versionedPID;
}

@property (nonatomic, readonly) bool alwaysOnGesturesEnabled;
@property (nonatomic, readonly) unsigned long long changeSource;
@property (nonatomic, readonly) bool coverGestureEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool digitizerEnabled;
@property (nonatomic, readonly) long long displayState;
@property (nonatomic, readonly) bool estimatedProximityMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *multitouchHostStateKeys;
@property (nonatomic, readonly) bool pocketTouchesExpected;
@property (nonatomic, readonly) bool postEventWithCurrentDetectionMask;
@property (nonatomic, readonly) int proximityDetectionMode;
@property (nonatomic, readonly, copy) NSString *reason;
@property (getter=isRestrictedToSystemShell, nonatomic, readonly) bool restrictedToSystemShell;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool tapToWakeEnabled;
@property (nonatomic, readonly) long long versionedPID;
@property (nonatomic, readonly) bool wakeOnLongPressEnabled;
@property (nonatomic, readonly) bool wakeOnLongPressThroughEnabled;
@property (nonatomic, readonly) bool wakeOnSwipeEnabled;
@property (nonatomic, readonly) bool wakeOnSwipeThroughEnabled;
@property (nonatomic, readonly) bool wakeOnTapThroughEnabled;

+ (id)_prevailingMode:(id)arg1;
+ (id)buildModeForReason:(id)arg1 builder:(id /* block */)arg2;
+ (id)new;
+ (id)protobufSchema;

- (void).cxx_destruct;
- (long long)_comparisonScore;
- (id)_init;
- (id)_initCopyFrom:(id)arg1;
- (bool)_settingKeysAllowed:(id)arg1;
- (bool)alwaysOnGesturesEnabled;
- (void)appendDescriptionToFormatter:(id)arg1;
- (unsigned long long)changeSource;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)coverGestureEnabled;
- (id)description;
- (id)didFinishProtobufDecodingWithError:(out id*)arg1;
- (bool)digitizerEnabled;
- (long long)displayState;
- (void)encodeWithCoder:(id)arg1;
- (bool)estimatedProximityMode;
- (unsigned long long)hash;
- (id)init;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)arg1;
- (bool)isEffectivelyEqualToMode:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRestrictedToSystemShell;
- (id)multitouchHostStateKeys;
- (id)mutableCopy;
- (bool)pocketTouchesExpected;
- (bool)postEventWithCurrentDetectionMask;
- (int)proximityDetectionMode;
- (id)reason;
- (bool)tapToWakeEnabled;
- (long long)versionedPID;
- (bool)wakeOnLongPressEnabled;
- (bool)wakeOnLongPressThroughEnabled;
- (bool)wakeOnSwipeEnabled;
- (bool)wakeOnSwipeThroughEnabled;
- (bool)wakeOnTapThroughEnabled;

@end
