
@interface EKEventAvailabilityEditItem : EKEventEditItem {
    long long  _availability;
    NSArray * _choices;
}

- (void).cxx_destruct;
- (id)_choices;
- (bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (void)refreshFromCalendarItemAndStore;
- (bool)saveAndDismissWithForce:(bool)arg1;

@end
