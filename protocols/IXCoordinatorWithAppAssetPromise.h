
@protocol IXCoordinatorWithAppAssetPromise <NSObject>

@required

- (bool)appAssetPromiseHasBegunFulfillment:(bool*)arg1 error:(id*)arg2;
- (unsigned long long)appAssetPromiseResponsibleClientWithError:(id*)arg1;
- (IXOwnedDataPromise *)appAssetPromiseWithError:(id*)arg1;
- (bool)hasAppAssetPromise;
- (bool)setAppAssetPromise:(IXOwnedDataPromise *)arg1 error:(id*)arg2;
- (bool)setAppAssetPromiseResponsibleClient:(unsigned long long)arg1 error:(id*)arg2;

@end
