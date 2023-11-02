
@protocol LoadProgressObserver <NSObject>

@required

- (void)didFailLoadingResource:(id <LoadableResource>)arg1;
- (void)didStartLoadingResource;
- (void)didStopLoadingResource;
- (void)updateProgressWithResource:(id <LoadableResource>)arg1;

@end
