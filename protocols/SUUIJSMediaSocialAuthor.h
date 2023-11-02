
@protocol SUUIJSMediaSocialAuthor <JSExport>

@required

- (NSString *)dsId;
- (NSString *)entityIdentifier;
- (NSString *)entityType;
- (NSString *)name;
- (NSArray *)permissions;
- (NSDictionary *)storePlatformData;

@end
