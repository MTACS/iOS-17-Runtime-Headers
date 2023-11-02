
@interface UNPushNotificationRequestBuilder : NSObject {
    NSString * _bundleIdentifier;
    NSString * _identifier;
    NSDictionary * _payload;
}

- (void).cxx_destruct;
- (unsigned long long)_interruptionLevelForString:(id)arg1;
- (id)_sanitizeAPSDictionary:(id)arg1;
- (id)_sanitizeAlert:(id)arg1;
- (id)_sanitizeFlag:(id)arg1;
- (id)_sanitizeInterruptionLevelString:(id)arg1;
- (id)_sanitizeLocalizationArgumentsArray:(id)arg1;
- (id)_sanitizeRelevanceScore:(id)arg1;
- (id)_sanitizeSound:(id)arg1;
- (id)_sanitizeStringArray:(id)arg1;
- (id)_sanitizeTopicIdentifier:(id)arg1;
- (id)_sanitizeUnsignedInteger:(id)arg1;
- (id)_sanitizeVolume:(id)arg1;
- (id)buildNotificationRequest;
- (id)buildSafePayload;
- (id)initWithIdentifier:(id)arg1 payload:(id)arg2 bundleIdentifier:(id)arg3;

@end
