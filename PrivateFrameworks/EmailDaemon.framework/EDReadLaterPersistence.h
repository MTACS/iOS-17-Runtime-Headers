
@interface EDReadLaterPersistence : NSObject <EDReadLaterCloudStorageDateProvider> {
    EDReadLaterCloudStorage * _cloudStorage;
    EDPersistenceDatabase * _database;
    EDPersistenceHookRegistry * _hookRegistry;
}

@property (nonatomic, retain) EDReadLaterCloudStorage *cloudStorage;
@property (nonatomic, retain) EDPersistenceDatabase *database;
@property (nonatomic, retain) EDPersistenceHookRegistry *hookRegistry;

- (void).cxx_destruct;
- (void)_persistReadLater:(id)arg1 date:(id)arg2;
- (void)_resetDisplayDateForMessage:(id)arg1 connection:(id)arg2;
- (id)cloudStorage;
- (id)cloudStorageReadLaterDateForMessage:(id)arg1 displayDate:(id*)arg2;
- (id)database;
- (id)hookRegistry;
- (id)initWithDatabase:(id)arg1 hookRegistry:(id)arg2;
- (void)persistReadLaterForMessage:(id)arg1 date:(id)arg2;
- (void)removeReadLaterForMessage:(id)arg1;
- (void)scheduleRecurringActivity;
- (void)setCloudStorage:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setHookRegistry:(id)arg1;

@end
