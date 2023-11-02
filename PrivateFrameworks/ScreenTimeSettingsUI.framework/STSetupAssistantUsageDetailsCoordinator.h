
@interface STSetupAssistantUsageDetailsCoordinator : NSObject <STUsageDetailsViewModelCoordinator> {
    NSArray * _devices;
    bool  _refreshing;
    NSString * _selectedDeviceIdentifier;
    STUsageDetailsViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (getter=isRefreshing, readonly) bool refreshing;
@property (nonatomic, copy) NSString *selectedDeviceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) STUsageDetailsViewModel *viewModel;

- (void).cxx_destruct;
- (id)_introUsageItemsWithStartDate:(id)arg1;
- (id)appConfigByIdentifier;
- (id)categoryConfigByIdentifier;
- (id)devices;
- (id)init;
- (bool)isRefreshing;
- (void)refreshUsageData;
- (id)selectedDeviceIdentifier;
- (void)setSelectedDeviceIdentifier:(id)arg1;
- (void)startRefreshingUsageData;
- (void)stopRefreshingUsageData;
- (id)viewModel;

@end
