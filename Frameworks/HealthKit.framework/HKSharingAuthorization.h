
@interface HKSharingAuthorization : NSObject <NSCopying, NSSecureCoding> {
    NSString * _authorizationIdentifier;
    NSString * _displayName;
    NSString * _displaySubtitle;
}

@property (nonatomic, readonly, copy) NSString *authorizationIdentifier;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *displaySubtitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authorizationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)displaySubtitle;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAuthorizationIdentifier:(id)arg1;
- (id)initWithAuthorizationIdentifier:(id)arg1 displayName:(id)arg2 displaySubtitle:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
