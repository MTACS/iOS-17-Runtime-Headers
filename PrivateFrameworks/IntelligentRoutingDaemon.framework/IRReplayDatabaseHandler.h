
@interface IRReplayDatabaseHandler : NSObject {
    IRPersistenceManager * _persistanceManager;
}

+ (id)exportDatabaseToPath:(id)arg1;

- (void).cxx_destruct;
- (id)deviceAttributesFromCandidateIdentifier:(id)arg1 withServiceIdentifier:(id)arg2;
- (id)deviceAttributesSetFromCandidateIdentifier:(id)arg1 withServiceIdentifier:(id)arg2;
- (id)getAllServices;
- (id)getEventsForServiceIdentifier:(id)arg1;
- (id)getSortedEventsForServiceIdentifier:(id)arg1;
- (id)getSortedHistoryEventsForServiceIdentifier:(id)arg1;
- (id)getSortedHistoryEventsForServiceIdentifier:(id)arg1 useRealTimeMilo:(bool)arg2;
- (id)initWithPeristenceManager:(id)arg1;
- (id)initWithStoreDirectory:(id)arg1;
- (id)inspectEventByDate:(id)arg1 andServiceIdentifier:(id)arg2 historyEvents:(id)arg3;

@end
