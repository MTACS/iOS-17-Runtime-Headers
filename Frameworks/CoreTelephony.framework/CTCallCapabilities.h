
@interface CTCallCapabilities : NSObject <NSCopying, NSSecureCoding> {
    bool  _isCSCallingAvailable;
    bool  _isCarrierSupportsEmergencyCallOnWifiNoLimit;
    bool  _isEmergencyCallingOnWifiAllowed;
    bool  _isEmergencyCallingOnWifiAvailable;
    bool  _isVoLTECallingAvailable;
    bool  _isWifiCallingAvailable;
}

@property (nonatomic) bool isCSCallingAvailable;
@property (nonatomic) bool isCarrierSupportsEmergencyCallOnWifiNoLimit;
@property (nonatomic) bool isEmergencyCallingOnWifiAllowed;
@property (nonatomic) bool isEmergencyCallingOnWifiAvailable;
@property (nonatomic) bool isVoLTECallingAvailable;
@property (nonatomic) bool isWifiCallingAvailable;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCSCallingAvailable;
- (bool)isCarrierSupportsEmergencyCallOnWifiNoLimit;
- (bool)isEmergencyCallingOnWifiAllowed;
- (bool)isEmergencyCallingOnWifiAvailable;
- (bool)isVoLTECallingAvailable;
- (bool)isWifiCallingAvailable;
- (void)setIsCSCallingAvailable:(bool)arg1;
- (void)setIsCarrierSupportsEmergencyCallOnWifiNoLimit:(bool)arg1;
- (void)setIsEmergencyCallingOnWifiAllowed:(bool)arg1;
- (void)setIsEmergencyCallingOnWifiAvailable:(bool)arg1;
- (void)setIsVoLTECallingAvailable:(bool)arg1;
- (void)setIsWifiCallingAvailable:(bool)arg1;

@end
