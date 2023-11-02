
@interface NEHotspotConfigurationManager : NSObject

+ (id)sharedManager;

- (void)applyConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getConfiguredSSIDsWithCompletionHandler:(id /* block */)arg1;
- (void)removeConfigurationForHS20DomainName:(id)arg1;
- (void)removeConfigurationForSSID:(id)arg1;

@end
