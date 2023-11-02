
@interface ICQStoragePlanRecommendationCache : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    NSDate * _expiry;
    NSNumber * _extraQuotaNeeded;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)extraQuotaNeeded;
- (id)init;
- (void)setExtraQuotaNeeded:(id)arg1 expiry:(id)arg2;

@end
