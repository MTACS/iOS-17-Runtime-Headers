
@interface STUsageDetailsViewModelCoordinator : NSObject <NSFetchedResultsControllerDelegate, STUsageDetailsViewModelCoordinator> {
    NSManagedObjectID * _currentUsageRequestObjectID;
    NSArray * _devices;
    NSDate * _lastUsageDataRefreshTime;
    NSString * _organizationIdentifier;
    <STPersistenceControllerProtocol> * _persistenceController;
    bool  _refreshing;
    NSString * _selectedDeviceIdentifier;
    long long  _usageContext;
    NSTimer * _usageDataRefreshTimer;
    NSFetchedResultsController * _usageRequestFetchedResultsController;
    NSNumber * _userDSID;
    STUsageDetailsViewModel * _viewModel;
}

@property (nonatomic, retain) NSManagedObjectID *currentUsageRequestObjectID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastUsageDataRefreshTime;
@property (nonatomic, copy) NSString *organizationIdentifier;
@property (nonatomic, retain) <STPersistenceControllerProtocol> *persistenceController;
@property (getter=isRefreshing) bool refreshing;
@property (nonatomic, copy) NSString *selectedDeviceIdentifier;
@property (readonly) Class superclass;
@property (readonly) long long usageContext;
@property (nonatomic, retain) NSTimer *usageDataRefreshTimer;
@property (nonatomic, retain) NSFetchedResultsController *usageRequestFetchedResultsController;
@property (nonatomic, copy) NSNumber *userDSID;
@property (nonatomic, readonly) STUsageDetailsViewModel *viewModel;

+ (id)defaultDeviceIdentifierForChild:(id)arg1;
+ (id)defaultDeviceIdentifierForLocalUser;
+ (id)defaultUsageReportTypeForChild:(id)arg1;
+ (id)defaultUsageReportTypeForLocalUser;
+ (void)setDefaultDeviceIdentifier:(id)arg1 childDSID:(id)arg2;
+ (void)setDefaultDeviceIdentifierForLocalUser:(id)arg1;
+ (void)setDefaultUsageReportType:(id)arg1 childDSID:(id)arg2;
+ (void)setDefaultUsageReportTypeForLocalUser:(id)arg1;

- (void).cxx_destruct;
- (void)_loadAllHistoricalUsageWithUsageBlocks:(id)arg1 selectedItemDisplayName:(id)arg2 selectedDay:(unsigned long long)arg3 selectedWeek:(unsigned long long)arg4 hadUsageData:(bool)arg5 referenceDate:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)_loadLastWeekUsageWithUsageBlocks:(id)arg1 selectedItemDisplayName:(id)arg2 referenceDate:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_loadTodayUsageWithUsageBlocks:(id)arg1 selectedItemDisplayName:(id)arg2 referenceDate:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_refreshUsageDataAndReschedule;
- (void)_refreshUsageDataWithCompletion:(id /* block */)arg1;
- (void)_updateWeekAndDayReportsWithUsageItems:(id)arg1 weekStartDate:(id)arg2 lastUpdatedDate:(id)arg3 referenceDate:(id)arg4 selectedItemDisplayName:(id)arg5 isSelectedWeek:(bool)arg6 selectedDay:(unsigned long long)arg7 weekUsageReports:(id)arg8 dayUsageReports:(id)arg9 dayUsageReportByWeekdays:(id)arg10 firstPickupByWeekdayByWeek:(id)arg11;
- (id)_usageBlocksWithUser:(id)arg1 device:(id)arg2 error:(id*)arg3;
- (id)_usageItemsWithUsageBlocks:(id)arg1 lastUpdatedDate:(id*)arg2 firstPickupByWeekdayByWeek:(id)arg3 referenceDate:(id)arg4 usageContext:(long long)arg5;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (id)currentUsageRequestObjectID;
- (void)dealloc;
- (id)devices;
- (id)initWithPersistenceController:(id)arg1 organizationIdentifier:(id)arg2 userDSID:(id)arg3 devices:(id)arg4 selectedDeviceIdentifier:(id)arg5 selectedUsageReportType:(id)arg6 usageContext:(long long)arg7;
- (bool)isRefreshing;
- (id)lastUsageDataRefreshTime;
- (void)loadViewModelWithCompletionHandler:(id /* block */)arg1;
- (id)organizationIdentifier;
- (id)persistenceController;
- (void)refreshUsageData;
- (void)scheduleRefreshUsageData;
- (id)selectedDeviceIdentifier;
- (void)setCurrentUsageRequestObjectID:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setLastUsageDataRefreshTime:(id)arg1;
- (void)setOrganizationIdentifier:(id)arg1;
- (void)setPersistenceController:(id)arg1;
- (void)setRefreshing:(bool)arg1;
- (void)setSelectedDeviceIdentifier:(id)arg1;
- (void)setUsageDataRefreshTimer:(id)arg1;
- (void)setUsageRequestFetchedResultsController:(id)arg1;
- (void)setUserDSID:(id)arg1;
- (void)startRefreshingUsageData;
- (void)stopRefreshingUsageData;
- (long long)usageContext;
- (id)usageDataRefreshTimer;
- (id)usageRequestFetchedResultsController;
- (id)userDSID;
- (id)viewModel;

@end
