
@interface SUCoreActivity : NSObject <NSCopying, NSSecureCoding> {
    NSString * _UUID;
    NSString * _activityName;
    NSNumber * _batteryLevelGreaterThan;
    NSNumber * _batteryLevelLessThan;
    int  _carplayState;
    int  _mediaPlayingState;
    int  _networkState;
    int  _phoneCallState;
    int  _plugInState;
    NSDate * _runDate;
    int  _screenOnState;
    int  _waking;
    int  _wifiState;
}

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, retain) NSString *activityName;
@property (nonatomic, retain) NSNumber *batteryLevelGreaterThan;
@property (nonatomic, retain) NSNumber *batteryLevelLessThan;
@property (nonatomic) int carplayState;
@property (nonatomic) int mediaPlayingState;
@property (nonatomic) int networkState;
@property (nonatomic) int phoneCallState;
@property (nonatomic) int plugInState;
@property (nonatomic, retain) NSDate *runDate;
@property (nonatomic) int screenOnState;
@property (nonatomic) int waking;
@property (nonatomic) int wifiState;

+ (id)_predicateForKeyPath:(id)arg1 equalToValue:(id)arg2;
+ (id)backlightOnPredicate:(bool)arg1;
+ (id)batteryLevelPredicateGreaterThan:(id)arg1;
+ (id)batteryLevelPredicateLessThan:(id)arg1;
+ (id)carplayPredicate:(bool)arg1;
+ (id)mediaPlayingPredicate:(bool)arg1;
+ (id)networkPredicate:(bool)arg1;
+ (id)phoneCallPredicate:(bool)arg1;
+ (id)pluggedInPredicate:(bool)arg1;
+ (bool)supportsSecureCoding;
+ (id)systemDatePredicate:(id)arg1;
+ (id)wifiAvailablePredicate:(bool)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (bool)_boolForTriState:(int)arg1 defaultValue:(bool)arg2;
- (id)_clientIdentifier;
- (unsigned long long)_deviceSet;
- (id)_dismissalPredicate;
- (bool)_mustWake;
- (unsigned int)_qualityOfService;
- (id)_stringForTriState:(int)arg1;
- (id)activityName;
- (id)batteryLevelGreaterThan;
- (id)batteryLevelLessThan;
- (int)carplayState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createContextualPredicate;
- (id)createRegistrationWithHandler:(id /* block */)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActivityName:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)mediaPlayingState;
- (int)networkState;
- (int)phoneCallState;
- (int)plugInState;
- (id)runDate;
- (int)screenOnState;
- (void)setActivityName:(id)arg1;
- (void)setBatteryLevelGreaterThan:(id)arg1;
- (void)setBatteryLevelLessThan:(id)arg1;
- (void)setCarplayState:(int)arg1;
- (void)setMediaPlayingState:(int)arg1;
- (void)setNetworkState:(int)arg1;
- (void)setPhoneCallState:(int)arg1;
- (void)setPlugInState:(int)arg1;
- (void)setRunDate:(id)arg1;
- (void)setScreenOnState:(int)arg1;
- (void)setUUID:(id)arg1;
- (void)setWaking:(int)arg1;
- (void)setWifiState:(int)arg1;
- (int)waking;
- (int)wifiState;

@end
