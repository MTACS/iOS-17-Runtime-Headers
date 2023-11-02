
@interface AKAuthorizationLoginChoice : NSObject <NSCopying, NSSecureCoding> {
    bool  _appleIDAuth;
    bool  _createAppleID;
    NSString * _site;
    NSString * _user;
}

@property (getter=isAppleIDAuthorization, nonatomic) bool appleIDAuth;
@property (getter=shouldCreateAppleID, nonatomic) bool createAppleID;
@property (nonatomic, copy) NSString *site;
@property (nonatomic, copy) NSString *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 site:(id)arg2;
- (bool)isAppleIDAuthorization;
- (void)setAppleIDAuth:(bool)arg1;
- (void)setCreateAppleID:(bool)arg1;
- (void)setSite:(id)arg1;
- (void)setUser:(id)arg1;
- (bool)shouldCreateAppleID;
- (id)site;
- (id)user;

@end
