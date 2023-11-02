
@interface BookDataStore.ReadingHistoryDataStore : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _state;
    void clearOnInitialLoad;
    void config;
    void currentDate;
    void currentUserDefaults;
    void lastModelChange;
    void lastModelChangeObservableTransaction;
    void modelProvider;
    void queue;
    void streakDayGoal;
    void transactionProvider;
    void updateCollector;
}

- (void)_handleSignificantDateChange:(id)arg1;

@end
