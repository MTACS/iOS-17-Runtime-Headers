
@interface _PXStoryRecipeEnumerator : NSObject {
    unsigned long long  _batchSize;
    id /* block */  _block;
    NSMutableDictionary * _identifierMap;
    PHPhotoLibrary * _photoLibrary;
    NSString * _scheme;
}

@property (nonatomic, copy) id /* block */ block;

- (void).cxx_destruct;
- (void)_flush;
- (id /* block */)block;
- (bool)didEnumerateRecipeDisplayAsset:(id)arg1 error:(id*)arg2;
- (void)didFinishEnumeratingRecipeDisplayAssets;
- (id)initWithBatchSize:(unsigned long long)arg1 photoLibrary:(id)arg2 scheme:(id)arg3 block:(id /* block */)arg4;
- (void)setBlock:(id /* block */)arg1;

@end
