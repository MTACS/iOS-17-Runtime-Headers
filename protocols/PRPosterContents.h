
@protocol PRPosterContents <NSObject>

@required

- (NSURL *)assetDirectory;
- (NSString *)descriptorIdentifier;
- (NSDictionary *)loadUserInfoWithError:(out id*)arg1;
- (id)objectForUserInfoKey:(NSString *)arg1;
- (NSString *)role;

@end
