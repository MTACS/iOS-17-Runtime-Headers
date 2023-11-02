
@interface DESRecordStorePolicyManager : NSObject {
    DESBundleRegistry * _bundleRegistry;
    NSURL * _policyPathURL;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)arrayOfStringForPlugin:(id)arg1 key:(id)arg2 defaultValue:(id)arg3;
- (unsigned long long)coreDuetEventLimitForPluginID:(id)arg1;
- (id)coreDuetEventQueryForPluginID:(id)arg1;
- (id)coreDuetPredicateForPluginID:(id)arg1;
- (unsigned long long)daysToExpirationOfRecordsForPluginID:(id)arg1;
- (id)initWithBundleRegistry:(id)arg1 policyPathURL:(id)arg2;
- (unsigned long long)maximumNumberOfRecordsForPluginID:(id)arg1;
- (id)policyForNSExtensionPluginID:(id)arg1;
- (id)policyForPluginID:(id)arg1;
- (id)stringForPluginID:(id)arg1 key:(id)arg2 defaultValue:(id)arg3;
- (id)supportedCoreDuetEventStreamNamesForPluginID:(id)arg1;
- (id)supportedRecordTypesForPluginID:(id)arg1;
- (unsigned long long)unsignedIntegerForPluginID:(id)arg1 key:(id)arg2 defaultValue:(unsigned long long)arg3;

@end
