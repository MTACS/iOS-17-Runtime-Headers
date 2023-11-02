
@interface EDDataDetectionPersistence : NSObject <EDMessageChangeHookResponder, EDPersistenceDatabaseProtectedSchemaProvider> {
    EDPersistenceDatabase * _database;
    <EDMessageChangeHookResponder> * _hookResponder;
    EDMessagePersistence * _messagePersistence;
}

@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <EDMessageChangeHookResponder> *hookResponder;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (readonly) Class superclass;

+ (id)_dataDetectionResultsTableSchemaWithName:(id)arg1;
+ (id)protectedTablesAndForeignKeysToResolve:(id*)arg1;

- (void).cxx_destruct;
- (bool)_addDataDetectionResults:(id)arg1 withGlobalMessageID:(long long)arg2 toTable:(id)arg3 withConnection:(id)arg4;
- (id)_getPersistedMessagesFromGlobalMessageID:(long long)arg1;
- (bool)_hookResponderRespondsToRequiredMethods:(id)arg1;
- (bool)addDataDetectionResults:(id)arg1 globalMessageID:(long long)arg2;
- (id)database;
- (id)getDataDetectionResultRowIDsForGlobalMessageID:(long long)arg1;
- (id)getDataDetectionResultsForGlobalMessageID:(long long)arg1;
- (id)hookResponder;
- (id)initWithDatabase:(id)arg1 messagePersistence:(id)arg2 hookResponder:(id)arg3;
- (id)messagePersistence;

@end
