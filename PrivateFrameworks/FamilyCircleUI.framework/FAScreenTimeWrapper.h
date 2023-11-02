
@interface FAScreenTimeWrapper : NSObject {
    bool  _previousState;
    STUsageSummaryTableViewCellProvider * _provider;
    NSNumber * _userDSID;
}

@property (nonatomic) bool previousState;
@property (nonatomic, retain) STUsageSummaryTableViewCellProvider *provider;
@property (nonatomic) NSNumber *userDSID;

- (void).cxx_destruct;
- (bool)activityEnabledForUser;
- (bool)activityEnablementChanged;
- (id)getScreenTimeUsageGraphForUser;
- (id)initWithUserDSID:(id)arg1;
- (bool)previousState;
- (id)provider;
- (void)refresh;
- (void)setPreviousState:(bool)arg1;
- (void)setProvider:(id)arg1;
- (void)setUserDSID:(id)arg1;
- (id)userDSID;

@end
