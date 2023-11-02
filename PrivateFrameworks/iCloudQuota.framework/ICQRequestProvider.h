
@interface ICQRequestProvider : NSObject {
    ACAccount * _account;
}

+ (bool)_keyIsEligibleForURLStringReplacement:(id)arg1;
+ (id)_newAccountBagKeyForOldKey:(id)arg1;
+ (id)_urlReplacementDictionaryForKey:(id)arg1 withOfferID:(id)arg2 withNotificationID:(id)arg3;
+ (void)addEntriesToPostDictionary:(id)arg1 forStub:(id)arg2;
+ (bool)attemptSetRequest:(id)arg1 toPostWithJSONDict:(id)arg2;

- (void).cxx_destruct;
- (id)_bagURLForKey:(id)arg1 withOfferID:(id)arg2 withNotificationID:(id)arg3;
- (id)_stringTimeOfLastBackup;
- (id)_urlForQuotaKey:(id)arg1 offerID:(id)arg2 notificationID:(id)arg3;
- (void)addBasicAndCloudBackupHeadersToRequest:(id)arg1;
- (void)addBasicHeadersToRequest:(id)arg1;
- (void)addCommonHeadersToRequest:(id)arg1;
- (id)getBackupDeviceUUID;
- (id)httpMethodForKey:(id)arg1 offerID:(id)arg2 notificationID:(id)arg3;
- (id)initWithAccount:(id)arg1;
- (id)urlForQuotaKey:(id)arg1 offerStub:(id)arg2 notificationID:(id)arg3;
- (id)urlForUpdateOfferWithContext:(id)arg1;
- (bool)willUseNewKey:(id)arg1 offerID:(id)arg2 notificationID:(id)arg3;

@end
