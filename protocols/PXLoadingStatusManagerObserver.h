
@protocol PXLoadingStatusManagerObserver <NSObject>

@required

- (void)loadingStatusManager:(PXLoadingStatusManager *)arg1 didUpdateLoadingStatus:(PXOperationStatus *)arg2 forItemIdentifier:(id)arg3;

@end
