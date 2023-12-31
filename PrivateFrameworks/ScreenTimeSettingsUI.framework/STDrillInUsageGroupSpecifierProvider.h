
@interface STDrillInUsageGroupSpecifierProvider : STGroupSpecifierProvider {
    NSObject<STRootViewModelCoordinator> * _coordinator;
    unsigned long long  _numberOfNotifications;
    STUsageItem * _usageItem;
}

@property (nonatomic, readonly) NSObject<STRootViewModelCoordinator> *coordinator;
@property (nonatomic, readonly) unsigned long long numberOfNotifications;
@property (nonatomic, readonly) STUsageItem *usageItem;

- (void).cxx_destruct;
- (id)coordinator;
- (id)dailyAverage:(id)arg1;
- (id)initWithUsageItem:(id)arg1 coordinator:(id)arg2;
- (id)notifications:(id)arg1;
- (unsigned long long)numberOfNotifications;
- (id)selectedUsageReport:(id)arg1;
- (id)usageItem;
- (id)weeklyPickupTotal:(id)arg1;

@end
