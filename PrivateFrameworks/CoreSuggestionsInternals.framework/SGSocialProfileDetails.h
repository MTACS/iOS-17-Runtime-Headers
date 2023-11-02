
@interface SGSocialProfileDetails : NSObject {
    NSString * _bundleIdentifier;
    NSString * _displayName;
    NSString * _preferredUniqueIdentifier;
    NSString * _service;
    NSString * _teamIdentifier;
    NSArray * _uniqueIdentifiers;
    NSString * _userIdentifier;
    NSString * _username;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *preferredUniqueIdentifier;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) NSString *teamIdentifier;
@property (nonatomic, readonly) NSArray *uniqueIdentifiers;
@property (nonatomic, readonly) NSString *userIdentifier;
@property (nonatomic, readonly) NSString *username;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)displayName;
- (id)initWithCNSocialProfile:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (id)initWithSocialProfile:(id)arg1;
- (id)initWithUsername:(id)arg1 userIdentifier:(id)arg2 bundleIdentifier:(id)arg3 displayName:(id)arg4 service:(id)arg5 teamIdentifier:(id)arg6;
- (id)preferredUniqueIdentifier;
- (id)serialize;
- (id)service;
- (id)teamIdentifier;
- (id)uniqueIdentifiers;
- (id)userIdentifier;
- (id)username;

@end
