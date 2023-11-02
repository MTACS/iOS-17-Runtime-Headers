
@interface BTCloudAccountInfo : NSObject <NSSecureCoding> {
    NSString * _accountIdentifier;
    bool  _isSignedIn;
    NSString * _loginID;
    bool  _manateeAvailable;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic) bool isSignedIn;
@property (nonatomic, retain) NSString *loginID;
@property (nonatomic) bool manateeAvailable;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isSignedIn;
- (id)loginID;
- (bool)manateeAvailable;
- (void)setAccountIdentifier:(id)arg1;
- (void)setIsSignedIn:(bool)arg1;
- (void)setLoginID:(id)arg1;
- (void)setManateeAvailable:(bool)arg1;

@end
