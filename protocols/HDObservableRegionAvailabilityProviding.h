
@protocol HDObservableRegionAvailabilityProviding <HDRegionAvailabilityProviding>

@required

- (<HDRegionAvailabilityProvidingDelegate> *)delegate;
- (void)setDelegate:(id <HDRegionAvailabilityProvidingDelegate>)arg1;

@end
