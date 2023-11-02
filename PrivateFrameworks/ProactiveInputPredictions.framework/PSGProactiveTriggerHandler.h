
@interface PSGProactiveTriggerHandler : NSObject {
    PPQuickTypeBroker * _broker;
    PSGStructuredInfoSuggestionCache * _cache;
    PSGProactiveTrigger * _lastTrigger;
}

+ (bool)_isCheckInSupportedPlatform;
+ (bool)_isCurrentLocationSupportedPlatform;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_handleOperationalTrigger:(id)arg1 localeIdentifier:(id)arg2 bundleIdentifier:(id)arg3 recipientNames:(id)arg4 availableApps:(id)arg5 limit:(unsigned long long)arg6 explanationSet:(id)arg7 results:(id)arg8;
- (id)_handlePortraitTrigger:(id)arg1 localeIdentifier:(id)arg2 bundleIdentifier:(id)arg3 recipients:(id)arg4 limit:(unsigned long long)arg5 timeoutSeconds:(double)arg6 explanationSet:(id)arg7 results:(id)arg8;
- (id)handleTrigger:(id)arg1 localeIdentifier:(id)arg2 bundleIdentifier:(id)arg3 recipients:(id)arg4 recipientNames:(id)arg5 availableApps:(id)arg6 timeoutSeconds:(double)arg7 fetchLimit:(unsigned long long)arg8 maxSuggestions:(unsigned long long)arg9 explanationSet:(id)arg10 error:(id*)arg11;
- (id)initWithBroker:(id)arg1 cache:(id)arg2;

@end
