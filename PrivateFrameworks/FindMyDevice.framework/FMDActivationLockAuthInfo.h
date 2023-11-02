
@interface FMDActivationLockAuthInfo : NSObject <NSSecureCoding> {
    NSString * _altDsid;
    NSString * _dsid;
    bool  _isAccountHSA2;
    bool  _isActivationLockEnabled;
    bool  _isFindMyON;
    bool  _isSignedIntoICloud;
    NSString * _pet;
    NSString * _username;
}

@property (nonatomic, copy) NSString *altDsid;
@property (nonatomic, copy) NSString *dsid;
@property (nonatomic) bool isAccountHSA2;
@property (nonatomic) bool isActivationLockEnabled;
@property (nonatomic) bool isFindMyON;
@property (nonatomic) bool isSignedIntoICloud;
@property (nonatomic, copy) NSString *pet;
@property (nonatomic, copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDsid;
- (id)description;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAccountHSA2;
- (bool)isActivationLockEnabled;
- (bool)isFindMyON;
- (bool)isSignedIntoICloud;
- (id)pet;
- (void)setAltDsid:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setIsAccountHSA2:(bool)arg1;
- (void)setIsActivationLockEnabled:(bool)arg1;
- (void)setIsFindMyON:(bool)arg1;
- (void)setIsSignedIntoICloud:(bool)arg1;
- (void)setPet:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
