
@interface RPStoreManager : NSObject

+ (id)sharedManager;

- (void)loadItemDetailsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

@end
