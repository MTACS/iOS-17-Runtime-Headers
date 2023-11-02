
@interface WFWorkflowUser : MTLModel <MTLJSONSerializing> {
    NSDate * _dateJoined;
    NSString * _email;
    NSString * _fullName;
    NSUUID * _identifier;
    NSNumber * _isAdmin;
    long long  _mainIdentity;
    NSURL * _profileImageURL;
    NSString * _twitter;
    NSURL * _websiteURL;
}

@property (nonatomic, readonly) NSDate *dateJoined;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSNumber *isAdmin;
@property (nonatomic, readonly) long long mainIdentity;
@property (nonatomic, readonly) NSURL *profileImageURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *twitter;
@property (nonatomic, readonly) NSString *twitterDisplayName;
@property (nonatomic, readonly) NSString *websiteDisplayName;
@property (nonatomic, readonly) NSURL *websiteURL;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)mainIdentityJSONTransformer;

- (void).cxx_destruct;
- (id)dateJoined;
- (id)displayName;
- (id)email;
- (id)fullName;
- (id)identifier;
- (id)isAdmin;
- (long long)mainIdentity;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)profileImageURL;
- (id)twitter;
- (id)twitterDisplayName;
- (id)websiteDisplayName;
- (id)websiteURL;

@end
