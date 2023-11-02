
@interface ATXIntentToAppBundleIdCache : NSObject {
    NSMutableDictionary * _intentTypeToBundleIdsCache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_appRegistrationDidChange:(id)arg1;
- (void)_slowlyFetchBundleIdsForIntent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchBundleIdsForIntent:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;

@end
