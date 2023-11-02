
@interface PPEventStorageGuardedData : NSObject {
    unsigned long long  _activeNoPurgeSessions;
    NSSet * _calendarIdentifiers;
    NSSet * _calendarObjectIDs;
    EKTimedEventStorePurger * _ekStorePurger;
    NSSet * _invisibleCalendarIdentifiers;
}

- (void).cxx_destruct;
- (id)ekStore;
- (id)init;

@end
