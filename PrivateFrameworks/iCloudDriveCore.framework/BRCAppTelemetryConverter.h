
@interface BRCAppTelemetryConverter : NSObject {
    NSArray * _investigationKeysToRemove;
    NSDictionary * _oldToNewKeys;
}

- (void).cxx_destruct;
- (void)_fixupEventDataWithEvent:(id)arg1;
- (void)_payloadFromEventDictionary:(id)arg1 dictionary:(id)arg2;
- (id)dictionaryRepresentationFromEvent:(id)arg1;
- (id)fixupValue:(id)arg1 forKey:(id)arg2;
- (id)init;

@end
