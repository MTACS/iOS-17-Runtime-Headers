
@interface PHBatchAssetExpunger : NSObject {
    NSArray * _assets;
    PHBatchPerformChanges * _batchPerformChanges;
    PHAssetDeleteOptions * _deleteOptions;
}

+ (id)batchAssetExpungerWithAssets:(id)arg1 deleteOptions:(id)arg2 library:(id)arg3 topLevelSelector:(SEL)arg4;

- (void).cxx_destruct;
- (void)_batchExpungeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithAssets:(id)arg1 deleteOptions:(id)arg2 library:(id)arg3 batchSize:(unsigned long long)arg4;
- (bool)performChangesAndWait:(id*)arg1;
- (void)performChangesWithCompletionHandler:(id /* block */)arg1;

@end
