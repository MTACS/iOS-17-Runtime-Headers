
@interface CALNPersistentTriggeredEventNotificationDataStorage : NSObject <CALNTriggeredEventNotificationDataStorage> {
    CALNInMemoryTriggeredEventNotificationDataStorage * _inMemoryStorage;
    NSString * _path;
    bool  _protected;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALNInMemoryTriggeredEventNotificationDataStorage *inMemoryStorage;
@property (nonatomic, readonly, copy) NSString *path;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)notificationDataFromPersistentStorageWithPath:(id)arg1 error:(id*)arg2;
+ (id)persistentStorageWithPath:(id)arg1 isProtectedStorage:(bool)arg2;

- (void).cxx_destruct;
- (void)_addNotificationData:(id)arg1 withIdentifier:(id)arg2;
- (bool)_loadDataWithError:(id*)arg1;
- (void)_removeData;
- (void)_removeNotificationDataWithIdentifier:(id)arg1;
- (bool)_saveDataWithError:(id*)arg1;
- (void)addNotificationData:(id)arg1 withIdentifier:(id)arg2;
- (id)inMemoryStorage;
- (id)initWithPath:(id)arg1 isProtectedStorage:(bool)arg2;
- (id)notificationData;
- (id)notificationDataWithIdentifier:(id)arg1;
- (id)path;
- (void)removeNotificationData;
- (void)removeNotificationDataWithIdentifier:(id)arg1;
- (id)workQueue;

@end
