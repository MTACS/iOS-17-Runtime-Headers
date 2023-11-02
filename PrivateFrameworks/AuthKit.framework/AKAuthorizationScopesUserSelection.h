
@interface AKAuthorizationScopesUserSelection : NSObject <NSSecureCoding> {
    bool  _makePrivateEmail;
    AKUserInformation * _userInformation;
}

@property (nonatomic) bool makePrivateEmail;
@property (nonatomic, copy) AKUserInformation *userInformation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)makePrivateEmail;
- (void)setMakePrivateEmail:(bool)arg1;
- (void)setUserInformation:(id)arg1;
- (id)userInformation;

@end
