
@protocol OUSessionDelegate <NSObject>

@optional

- (void)session:(OUSession *)arg1 didFailWithError:(long long)arg2;
- (void)session:(OUSession *)arg1 didGeneratedOfflineObjectAsset:(OUObjectAsset *)arg2;
- (void)session:(OUSession *)arg1 didGeneratedOfflineObjects:(NSArray *)arg2;
- (void)session:(OUSession *)arg1 didUpdateDetectedObjects:(NSArray *)arg2;
- (void)session:(OUSession *)arg1 didUpdateObjectAsset:(OUObjectAsset *)arg2;

@end
