
@interface STIntroductionModel : NSObject <NSSecureCoding> {
    NSDateComponents * _downtimeEndTime;
    NSDateComponents * _downtimeStartTime;
    NSNumber * _isAppAndWebsiteActivityEnabled;
    NSNumber * _isCommunicationSafetyEnabled;
    NSNumber * _isEyeReliefEnabled;
    NSString * _passcode;
    NSDictionary * _restrictions;
}

@property (copy) NSDateComponents *downtimeEndTime;
@property (copy) NSDateComponents *downtimeStartTime;
@property (copy) NSNumber *isAppAndWebsiteActivityEnabled;
@property (copy) NSNumber *isCommunicationSafetyEnabled;
@property (copy) NSNumber *isEyeReliefEnabled;
@property (copy) NSString *passcode;
@property (copy) NSDictionary *restrictions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)downtimeEndTime;
- (id)downtimeStartTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAppAndWebsiteActivityEnabled:(id)arg1 downtimeStartTime:(id)arg2 downtimeEndTime:(id)arg3 restrictions:(id)arg4 passcode:(id)arg5 communicationSafetyEnabled:(id)arg6 eyeReliefEnabled:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (id)isAppAndWebsiteActivityEnabled;
- (id)isCommunicationSafetyEnabled;
- (id)isEyeReliefEnabled;
- (id)passcode;
- (id)restrictions;
- (void)setDowntimeEndTime:(id)arg1;
- (void)setDowntimeStartTime:(id)arg1;
- (void)setIsAppAndWebsiteActivityEnabled:(id)arg1;
- (void)setIsCommunicationSafetyEnabled:(id)arg1;
- (void)setIsEyeReliefEnabled:(id)arg1;
- (void)setPasscode:(id)arg1;
- (void)setRestrictions:(id)arg1;

@end
