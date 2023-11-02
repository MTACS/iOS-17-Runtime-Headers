
@interface RESiriActionsDonationsWhitelist : NSObject {
    NSSet * _intentWhitelistBundleIDs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSSet * _userActivityWhitelistBundleIDs;
    NSDictionary * _whitelist;
}

@property (nonatomic, readonly) NSSet *intentWhitelistBundleIDs;
@property (nonatomic, readonly) NSSet *userActivityWhitelistBundleIDs;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (bool)intentIsWhitelistedForBundleID:(id)arg1 andTypeName:(id)arg2;
- (id)intentWhitelistBundleIDs;
- (id)intentWhitelistedRelevanceThresholdForBundleID:(id)arg1 andTypeName:(id)arg2;
- (bool)userActivityIsWhitelistedForBundleID:(id)arg1 andActivityType:(id)arg2;
- (id)userActivityWhitelistBundleIDs;
- (id)userActivityWhitelistedRelevanceThresholdForBundleID:(id)arg1 andActivityType:(id)arg2;

@end
