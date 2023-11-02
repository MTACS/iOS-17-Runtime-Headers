
@interface STUsageSummaryTableViewCellProvider : NSObject {
    STOverallUsageSummaryCell * _legacyUsageCell;
    STRootViewModelCoordinator * _rootCoordinator;
    STUsageDetailsViewModelCoordinator * _usageCoordinator;
    NSNumber * _userDSID;
}

@property (nonatomic, retain) STOverallUsageSummaryCell *legacyUsageCell;
@property (nonatomic, retain) STRootViewModelCoordinator *rootCoordinator;
@property (nonatomic, retain) STUsageDetailsViewModelCoordinator *usageCoordinator;
@property (nonatomic, readonly, copy) NSNumber *userDSID;

+ (id)usageSummaryTableViewCellForUserDSID:(id)arg1;

- (void).cxx_destruct;
- (id)initWithUserDSID:(id)arg1;
- (id)legacyUsageCell;
- (void)refresh;
- (id)rootCoordinator;
- (void)setLegacyUsageCell:(id)arg1;
- (void)setRootCoordinator:(id)arg1;
- (void)setUsageCoordinator:(id)arg1;
- (bool)shouldShowUsageSummaryForUser;
- (id)usageCoordinator;
- (id)usageSummaryTableViewCellForUser;
- (id)userDSID;

@end
