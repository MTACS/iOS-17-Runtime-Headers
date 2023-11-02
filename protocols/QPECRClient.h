
@protocol QPECRClient <NSObject>

@required

+ (id)sharedClient;

- (void)cooldownAsync;
- (void)cooldownSync;
- (NSDictionary *)visualIdentifiersWithText:(NSString *)arg1 allowPrefixSearch:(bool)arg2 error:(id*)arg3;
- (void)warmUpAsync;
- (void)warmUpSync;

@end
