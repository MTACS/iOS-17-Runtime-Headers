
@protocol FxMetaPlug

@required

- (NSString *)displayName;
- (NSDictionary *)fxPlugProperties;
- (NSString *)groupDisplayName;
- (NSString *)groupUUID;
- (NSString *)uuid;
- (NSString *)version;
- (NSString *)versionDisplayName;

@end
