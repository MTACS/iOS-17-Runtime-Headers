
@interface CALNPersistentNotificationStorage : NSObject <CALNNotificationStorage> {
    CALNInMemoryNotificationStorage * _inMemoryStorage;
    NSString * _path;
    bool  _protected;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALNInMemoryNotificationStorage *inMemoryStorage;
@property (nonatomic, readonly, copy) NSString *path;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)notificationRecordsFromPersistentNotificationStorageWithPath:(id)arg1 error:(id*)arg2;
+ (id)persistentNotificationStorageWithPath:(id)arg1 isProtectedStorage:(bool)arg2;

- (void).cxx_destruct;
- (bool)_loadNotificationsWithError:(id*)arg1;
- (bool)_saveNotificationsWithError:(id*)arg1;
- (void)addNotificationRecord:(id)arg1;
- (void)addNotificationRecords:(id)arg1;
- (id)inMemoryStorage;
- (id)initWithPath:(id)arg1 isProtectedStorage:(bool)arg2;
- (id)notificationRecords;
- (id)path;
- (void)removeAllNotificationRecords;
- (void)removeNotificationRecordsPassingTest:(id /* block */)arg1;
- (id)workQueue;

@end
