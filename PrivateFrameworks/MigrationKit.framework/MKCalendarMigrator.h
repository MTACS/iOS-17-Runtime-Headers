
@interface MKCalendarMigrator : MKMigrator {
    EKEventStore * _eventStore;
}

- (void).cxx_destruct;
- (void)import:(id)arg1;
- (void)importiCal:(id)arg1;
- (id)init;

@end
