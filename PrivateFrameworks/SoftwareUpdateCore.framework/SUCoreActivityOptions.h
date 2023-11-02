
@interface SUCoreActivityOptions : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _batteryLevelGreaterThan;
    NSNumber * _batteryLevelLessThan;
    int  _carplayState;
    int  _mediaPlayingState;
    int  _networkState;
    int  _phoneCallState;
    int  _plugInState;
    int  _priority;
    NSDate * _runDate;
    int  _screenOnState;
    int  _waking;
    int  _wifiState;
}

@property (nonatomic, retain) NSNumber *batteryLevelGreaterThan;
@property (nonatomic, retain) NSNumber *batteryLevelLessThan;
@property (nonatomic) int carplayState;
@property (nonatomic) int mediaPlayingState;
@property (nonatomic) int networkState;
@property (nonatomic) int phoneCallState;
@property (nonatomic) int plugInState;
@property (nonatomic) int priority;
@property (nonatomic, retain) NSDate *runDate;
@property (nonatomic) int screenOnState;
@property (nonatomic) int waking;
@property (nonatomic) int wifiState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_stringForPriority:(int)arg1;
- (id)_stringForTriState:(int)arg1;
- (id)batteryLevelGreaterThan;
- (id)batteryLevelLessThan;
- (int)carplayState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (int)mediaPlayingState;
- (int)networkState;
- (int)phoneCallState;
- (int)plugInState;
- (int)priority;
- (id)runDate;
- (int)screenOnState;
- (void)setBatteryLevelGreaterThan:(id)arg1;
- (void)setBatteryLevelLessThan:(id)arg1;
- (void)setCarplayState:(int)arg1;
- (void)setMediaPlayingState:(int)arg1;
- (void)setNetworkState:(int)arg1;
- (void)setPhoneCallState:(int)arg1;
- (void)setPlugInState:(int)arg1;
- (void)setPriority:(int)arg1;
- (void)setRunDate:(id)arg1;
- (void)setScreenOnState:(int)arg1;
- (void)setWaking:(int)arg1;
- (void)setWifiState:(int)arg1;
- (int)waking;
- (int)wifiState;

@end
