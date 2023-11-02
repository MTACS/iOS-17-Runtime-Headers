
@protocol DDSAssetObserving <NSObject>

@required

- (<DDSAssetObservingDelegate> *)delegate;
- (void)notifyObserversAssetsUpdatedForType:(NSString *)arg1;
- (void)observeAssetType:(NSString *)arg1;
- (void)setDelegate:(id <DDSAssetObservingDelegate>)arg1;

@end
