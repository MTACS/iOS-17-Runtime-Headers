
@interface SGSocialProfile : SGLabeledObject {
    NSString * _bundleIdentifier;
    NSString * _displayName;
    NSString * _service;
    NSString * _teamIdentifier;
    NSString * _userIdentifier;
    NSString * _username;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) NSString *teamIdentifier;
@property (nonatomic, readonly) NSString *userIdentifier;
@property (nonatomic, readonly) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 userIdentifier:(id)arg2 bundleIdentifier:(id)arg3 displayName:(id)arg4 service:(id)arg5 teamIdentifier:(id)arg6 label:(id)arg7 extractionInfo:(id)arg8 recordId:(id)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSGSocialProfile:(id)arg1;
- (id)service;
- (id)teamIdentifier;
- (id)userIdentifier;
- (id)username;

@end
