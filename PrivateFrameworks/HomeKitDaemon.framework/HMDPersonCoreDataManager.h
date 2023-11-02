
@interface HMDPersonCoreDataManager : HMFObject <HMDPersonResidentSyncManagerDelegate, HMFLogging> {
    NSUUID * _UUID;
    HMCContext * _context;
    <HMDPersonDataSource> * _dataSource;
    <HMDPersonCoreDataManagerDelegate> * _delegate;
    HMDHome * _home;
    NSNotificationCenter * _notificationCenter;
    HMDPersonResidentSyncManager * _residentSyncManager;
    NSUUID * _userUUID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly) HMCContext *context;
@property <HMDPersonDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMDPersonCoreDataManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMDHome *home;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDPersonResidentSyncManager *residentSyncManager;
@property (readonly) Class superclass;
@property (copy) NSUUID *userUUID;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)UUID;
- (id)addOrUpdatePersons:(id)arg1 andRemovePersonsWithUUIDs:(id)arg2;
- (void)configureWithDataSource:(id)arg1;
- (id)context;
- (id)dataSource;
- (id)delegate;
- (id)deletedPersonUUIDsUserInfoKey;
- (void)enumeratePersonsUsingBlock:(id /* block */)arg1;
- (void)handleManagedObjectContextDidSaveNotification:(id)arg1;
- (void)handleManagedObjectContextWillSaveNotification:(id)arg1;
- (id)home;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 home:(id)arg3 userUUID:(id)arg4;
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 home:(id)arg3 userUUID:(id)arg4 context:(id)arg5 residentSyncManager:(id)arg6 notificationCenter:(id)arg7;
- (void)insertOrUpdatePersonUsingPerson:(id)arg1;
- (bool)isRelevantManagedObjectContext:(id)arg1;
- (bool)isRelevantPerson:(id)arg1;
- (id)logIdentifier;
- (id)notificationCenter;
- (id)personModelWithModelID:(id)arg1;
- (id)personWithModelID:(id)arg1;
- (id)personWithUUID:(id)arg1;
- (id)persons;
- (id)removeAllAssociatedData;
- (id)residentSyncManager;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setUserUUID:(id)arg1;
- (bool)shouldDispatchToPrimaryResident;
- (id)userUUID;
- (id)workQueue;

@end
