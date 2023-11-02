
@interface PSCloudStorageQuotaManager : NSObject

+ (id)sharedManager;

- (void)getQuotaInfoForPrimaryAccountCompletion:(id /* block */)arg1;

@end
