
@protocol STUsageDetailsViewModelCoordinator <NSObject>

@required

- (NSArray *)devices;
- (bool)isRefreshing;
- (void)refreshUsageData;
- (NSString *)selectedDeviceIdentifier;
- (void)setSelectedDeviceIdentifier:(NSString *)arg1;
- (void)startRefreshingUsageData;
- (void)stopRefreshingUsageData;
- (STUsageDetailsViewModel *)viewModel;

@end
