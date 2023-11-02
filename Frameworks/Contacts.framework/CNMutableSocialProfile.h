
@interface CNMutableSocialProfile : CNSocialProfile

@property (nonatomic, copy) NSArray *bundleIdentifiers;
@property (nonatomic, copy) NSString *displayname;
@property (nonatomic, copy) NSString *service;
@property (nonatomic, copy) NSString *teamIdentifier;
@property (nonatomic, copy) NSString *urlString;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic, copy) NSString *username;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)freeze;

@end
