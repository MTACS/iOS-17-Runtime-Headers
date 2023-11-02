
@interface BLSAlwaysOnFrequencyPerMinuteTimeline : BLSAlwaysOnTimeline {
    NSCalendar * _calendar;
    long long  _frequencyPerMinute;
}

- (void).cxx_destruct;
- (id)initWithPerMinuteUpdateFrequency:(long long)arg1 identifier:(id)arg2 configure:(id /* block */)arg3;
- (long long)requestedFidelityForStartEntryInDateInterval:(id)arg1 withPreviousEntry:(id)arg2;
- (id)unconfiguredEntriesForDateInterval:(id)arg1 previousEntry:(id)arg2;

@end
