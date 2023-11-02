
@interface CALNPersistentTimeToLeaveRefreshStorage : NSObject <CALNTimeToLeaveRefreshStorage> {
    CALNInMemoryTimeToLeaveRefreshStorage * _inMemoryStorage;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALNInMemoryTimeToLeaveRefreshStorage *inMemoryStorage;
@property (nonatomic, readonly, copy) NSString *path;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)persistentStorageWithPath:(id)arg1;
+ (id)timeToLeaveRefreshDataFromPersistentStorageWithPath:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_addRefreshDate:(id)arg1 withIdentifier:(id)arg2;
- (bool)_loadDataWithError:(id*)arg1;
- (void)_removeData;
- (void)_removeRefreshDateWithIdentifier:(id)arg1;
- (bool)_saveDataWithError:(id*)arg1;
- (void)addRefreshDate:(id)arg1 withIdentifier:(id)arg2;
- (id)inMemoryStorage;
- (id)initWithPath:(id)arg1;
- (id)path;
- (id)refreshDateWithIdentifier:(id)arg1;
- (id)refreshDates;
- (void)removeRefreshDateWithIdentifier:(id)arg1;
- (void)removeRefreshDates;
- (id)workQueue;

@end
