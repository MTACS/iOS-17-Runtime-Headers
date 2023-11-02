
@interface DNDSAppForegroundTriggerConfiguration : NSObject {
    NSDictionary * _bundleIDToModeIdentifierTriggers;
}

- (void).cxx_destruct;
- (void)addTriggerForModeWithIdentifier:(id)arg1 onForegroundOfApp:(id)arg2;
- (id)description;
- (id)init;
- (id)modeIdentifierForBundleIdentifier:(id)arg1;
- (id)triggeringBundleIdentifiers;

@end
