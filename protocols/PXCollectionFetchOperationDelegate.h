
@protocol PXCollectionFetchOperationDelegate <NSObject>

@optional

- (void)collectionFetchOperationDidBegin:(PXCollectionFetchOperation *)arg1;
- (void)collectionFetchOperationDidCancel:(PXCollectionFetchOperation *)arg1;
- (void)collectionFetchOperationDidComplete:(PXCollectionFetchOperation *)arg1;

@end
