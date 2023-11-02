
@protocol WBSProfileProviding <NSObject>

@required

- (NSString *)defaultProfileIdentifier;
- (<WBSProfileMetadataProviding> *)profileWithServerID:(NSString *)arg1;
- (NSArray *)profiles;

@end
