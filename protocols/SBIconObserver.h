
@protocol SBIconObserver <NSObject>

@optional

- (void)iconAccessoriesDidUpdate:(SBIcon *)arg1;
- (void)iconArchivableStateDidChange:(SBIcon *)arg1;
- (void)iconGridSizeClassDidChange:(SBIcon *)arg1;
- (void)iconImageDidUpdate:(SBIcon *)arg1;
- (void)iconLaunchEnabledDidChange:(SBIcon *)arg1;

@end
