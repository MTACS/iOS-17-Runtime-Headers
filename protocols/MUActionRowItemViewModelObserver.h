
@protocol MUActionRowItemViewModelObserver <NSObject>

@required

- (void)actionRowItemViewModelDidUpdate:(MUActionRowItemViewModel *)arg1;
- (void)didUpdateFeatureDiscoveryStatus:(MUActionRowItemViewModel *)arg1;

@end
