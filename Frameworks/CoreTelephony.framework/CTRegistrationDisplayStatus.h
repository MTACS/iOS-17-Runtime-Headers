
@interface CTRegistrationDisplayStatus : NSObject <NSCopying, NSSecureCoding> {
    bool  _changedDueToSimRemoval;
    bool  _isInHomeCountry;
    bool  _isRegistrationForcedHome;
    NSString * _registrationDisplayStatus;
}

@property (nonatomic) bool changedDueToSimRemoval;
@property (nonatomic) bool isInHomeCountry;
@property (nonatomic) bool isRegistrationForcedHome;
@property (nonatomic, retain) NSString *registrationDisplayStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)changedDueToSimRemoval;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isInHomeCountry;
- (bool)isRegistrationForcedHome;
- (id)registrationDisplayStatus;
- (void)setChangedDueToSimRemoval:(bool)arg1;
- (void)setIsInHomeCountry:(bool)arg1;
- (void)setIsRegistrationForcedHome:(bool)arg1;
- (void)setRegistrationDisplayStatus:(id)arg1;

@end
