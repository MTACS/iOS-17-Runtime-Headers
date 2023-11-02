
@interface SPCommand : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _beaconIdentifier;
    NSNumber * _duration;
    bool  _enableLostMode;
    NSDate * _expiration;
    SPHandle * _handle;
    NSUUID * _identifier;
    NSString * _lostModeEmail;
    NSString * _lostModeMessage;
    NSString * _lostModePhoneNumber;
    NSString * _obfuscatedIdentifier;
    long long  _playSoundContext;
    long long  _type;
}

@property (nonatomic, copy) NSUUID *beaconIdentifier;
@property (nonatomic, copy) NSNumber *duration;
@property (nonatomic) bool enableLostMode;
@property (nonatomic, copy) NSDate *expiration;
@property (nonatomic, copy) SPHandle *handle;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *lostModeEmail;
@property (nonatomic, copy) NSString *lostModeMessage;
@property (nonatomic, copy) NSString *lostModePhoneNumber;
@property (nonatomic, copy) NSString *obfuscatedIdentifier;
@property (nonatomic) long long playSoundContext;
@property (nonatomic, readonly, copy) NSString *taskName;
@property (nonatomic) long long type;

+ (id)beginLeashingWithBeaconUUID:(id)arg1;
+ (id)connectToBeaconUUID:(id)arg1;
+ (id)disableLostModeForBeaconUUID:(id)arg1;
+ (id)disableNotifyWhenFound:(id)arg1;
+ (id)disconnectFromBeaconUUID:(id)arg1;
+ (id)enableLostModeForBeaconUUID:(id)arg1 message:(id)arg2 phoneNumber:(id)arg3 email:(id)arg4;
+ (id)enableNotifyWhenFound:(id)arg1;
+ (id)endLeashingWithBeaconUUID:(id)arg1;
+ (id)locate:(id)arg1;
+ (id)playSoundWithBeaconUUID:(id)arg1;
+ (id)playSoundWithBeaconUUID:(id)arg1 duration:(double)arg2;
+ (id)playSoundWithBeaconUUID:(id)arg1 withContext:(long long)arg2;
+ (id)setObfuscatedIdentifier:(id)arg1;
+ (id)startBTFindingWithBeaconUUID:(id)arg1;
+ (id)startNotifyWhenFound:(id)arg1;
+ (id)stopBTFindingWithBeaconUUID:(id)arg1;
+ (id)stopNotifyWhenFound:(id)arg1;
+ (id)stopSoundWithBeaconUUID:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)unpairWithBeaconUUID:(id)arg1;
+ (id)updateAccessoryFirmware:(id)arg1;

- (void).cxx_destruct;
- (id)beaconIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)duration;
- (bool)enableLostMode;
- (void)encodeWithCoder:(id)arg1;
- (id)expiration;
- (id)handle;
- (id)identifier;
- (id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 handle:(id)arg5 lostModeEmail:(id)arg6 lostModeMessage:(id)arg7 lostModePhoneNumber:(id)arg8 obfuscatedIdentifier:(id)arg9 identifier:(id)arg10;
- (id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 handle:(id)arg5 lostModeMessage:(id)arg6 lostModePhoneNumber:(id)arg7 obfuscatedIdentifier:(id)arg8;
- (id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 playSoundContext:(long long)arg5 handle:(id)arg6 lostModeMessage:(id)arg7 lostModePhoneNumber:(id)arg8 obfuscatedIdentifier:(id)arg9 identifier:(id)arg10;
- (id)initWithCoder:(id)arg1;
- (id)lostModeEmail;
- (id)lostModeMessage;
- (id)lostModePhoneNumber;
- (id)obfuscatedIdentifier;
- (long long)playSoundContext;
- (void)setBeaconIdentifier:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setEnableLostMode:(bool)arg1;
- (void)setExpiration:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLostModeEmail:(id)arg1;
- (void)setLostModeMessage:(id)arg1;
- (void)setLostModePhoneNumber:(id)arg1;
- (void)setObfuscatedIdentifier:(id)arg1;
- (void)setPlaySoundContext:(long long)arg1;
- (void)setType:(long long)arg1;
- (id)taskName;
- (long long)type;

@end
