
@interface BMSQLStoreManager : BMSQLStore {
    NSMutableSet * _managedTableNames;
    <BMIdentifiable> * _sessionEvent;
}

@property (nonatomic, readonly) NSMutableSet *managedTableNames;
@property (nonatomic, retain) <BMIdentifiable> *sessionEvent;

+ (id)migrations;

- (void).cxx_destruct;
- (bool)addManagedTable:(id)arg1 derivedFromSource:(id)arg2;
- (bool)addManagedTable:(id)arg1 derivedFromStream:(id)arg2;
- (void)beginManagedSessionWithEvent:(id)arg1;
- (int)deleteRows:(id)arg1 fromTable:(id)arg2;
- (id)deleteRowsDerivedFromEvent:(id)arg1;
- (id)deleteRowsDerivedFromEvents:(id)arg1;
- (id)deleteRowsDerivedFromStream:(id)arg1 eventIdentifier:(id)arg2;
- (id)deleteRowsDerivedFromStream:(id)arg1 eventIdentifiers:(id)arg2;
- (void)endManagedSession;
- (id)initWithURL:(id)arg1;
- (id)managedTableNames;
- (id)managedTables;
- (void)prepareTriggerForTable:(id)arg1;
- (id)sessionEvent;
- (void)setSessionEvent:(id)arg1;
- (id)sourcesForManagedTable:(id)arg1;

@end
