
@interface EKEventAvailabilityDetailItem : EKEventDetailItem {
    long long  _availability;
    UITableViewCell * _cell;
}

- (void).cxx_destruct;
- (bool)_canChangeAvailability;
- (id)_choices;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end
