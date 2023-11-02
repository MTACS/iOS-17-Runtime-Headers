
@protocol PKWorldRegionUpdaterObserver <NSObject>

@optional

- (void)worldRegionUpdated:(PKWorldRegionUpdater *)arg1 failedToUpdateRegion:(PKWorldRegion *)arg2;
- (void)worldRegionUpdated:(PKWorldRegionUpdater *)arg1 updatedRegion:(PKWorldRegion *)arg2;

@end
