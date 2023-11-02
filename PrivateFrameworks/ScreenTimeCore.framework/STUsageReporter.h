
@interface STUsageReporter : NSObject <NSFetchedResultsControllerDelegate> {
    NSDateInterval * _dateInterval;
    NSFetchedResultsController * _fetchedResultsController;
    bool  _includeTotalUsageDetailItem;
    NSFetchedResultsController * _installedAppsController;
    NSSet * _installedBundleIdentifiers;
    NSNumber * _userDSID;
}

@property (readonly, copy) NSArray *applicationAndWebUsage;
@property (readonly, copy) NSArray *categoryUsage;
@property (readonly, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSFetchedResultsController *fetchedResultsController;
@property (readonly, copy) NSDate *firstPickup;
@property (readonly) unsigned long long hash;
@property bool includeTotalUsageDetailItem;
@property (nonatomic, retain) NSFetchedResultsController *installedAppsController;
@property (copy) NSSet *installedBundleIdentifiers;
@property (readonly, copy) NSArray *notifications;
@property (readonly, copy) NSArray *pickups;
@property (readonly) Class superclass;
@property (readonly) long long totalNotifications;
@property (readonly) long long totalPickups;
@property (readonly) double totalScreenTime;
@property (readonly, copy) NSNumber *userDSID;

+ (id)keyPathsForValuesAffectingNotifications;

- (void).cxx_destruct;
- (id)_categoryUsageWithoutAllUsageItem;
- (void)_enumerateUsageBlocksWithUnitGranularity:(unsigned long long)arg1 block:(id /* block */)arg2;
- (id)_firstPickupFromUsageBlocks:(id)arg1;
- (id)_ratiosForCategory:(id)arg1 perCalendarUnit:(unsigned long long)arg2 useTotalScreenTime:(bool)arg3;
- (void)_updateInstalledBundleIdentifiers;
- (id)applicationAndWebUsage;
- (id)categoryRatiosPerCalendarUnit:(unsigned long long)arg1 numberOfCategories:(unsigned long long)arg2;
- (id)categoryUsage;
- (void)controllerDidChangeContent:(id)arg1;
- (id)dateInterval;
- (id)fetchedResultsController;
- (id)firstPickup;
- (id)firstPickupOfIntervalWithMostPickups:(unsigned long long*)arg1 perCalendarUnit:(unsigned long long)arg2;
- (bool)generateReport:(id*)arg1;
- (bool)includeTotalUsageDetailItem;
- (id)initWithUsage:(id)arg1 dateInterval:(id)arg2;
- (id)installedAppsController;
- (id)installedBundleIdentifiers;
- (id)notificationRatiosForApplication:(id)arg1 perCalendarUnit:(unsigned long long)arg2;
- (id)notifications;
- (id)notificationsPerCalendarUnit:(unsigned long long)arg1;
- (id)pickupRatiosForApplication:(id)arg1 perCalendarUnit:(unsigned long long)arg2;
- (id)pickups;
- (id)pickupsPerCalendarUnit:(unsigned long long)arg1;
- (id)ratiosForApplication:(id)arg1 perCalendarUnit:(unsigned long long)arg2;
- (id)ratiosForCategory:(id)arg1 perCalendarUnit:(unsigned long long)arg2;
- (id)ratiosForWebDomain:(id)arg1 perCalendarUnit:(unsigned long long)arg2;
- (id)screenTimeUsagePerCalendarUnit:(unsigned long long)arg1;
- (void)setIncludeTotalUsageDetailItem:(bool)arg1;
- (void)setInstalledAppsController:(id)arg1;
- (void)setInstalledBundleIdentifiers:(id)arg1;
- (long long)totalNotifications;
- (long long)totalPickups;
- (double)totalScreenTime;
- (id)userDSID;

@end
