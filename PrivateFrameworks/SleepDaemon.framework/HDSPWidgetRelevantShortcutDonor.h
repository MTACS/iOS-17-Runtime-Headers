
@interface HDSPWidgetRelevantShortcutDonor : NSObject <HDSPWidgetRelevanceDonor> {
    INRelevantShortcutStore * _store;
}

- (void).cxx_destruct;
- (void)_setRelevantShortcuts:(id)arg1;
- (void)donateRelevanceForWidgetState:(long long)arg1;
- (id)init;

@end
