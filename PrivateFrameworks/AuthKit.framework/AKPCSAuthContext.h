
@interface AKPCSAuthContext : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _expiryDate;
    NSDictionary * _userInfo;
    NSUUID * _webSessionID;
    NSString * _webSessionIdentifier;
}

@property (nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, retain) NSDictionary *userInfo;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic, readonly, copy) NSUUID *webSessionID;
@property (nonatomic, readonly, copy) NSString *webSessionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expiryDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithWebSessionID:(id)arg1 expiryDate:(id)arg2 userInfo:(id)arg3;
- (id)initWithWebSessionIdentifier:(id)arg1 expiryDate:(id)arg2 userInfo:(id)arg3;
- (bool)isValid;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (id)webSessionID;
- (id)webSessionIdentifier;

@end
