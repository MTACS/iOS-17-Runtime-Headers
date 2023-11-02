
@interface PXCuratedLibraryHitTestResult : PXGHitTestResult {
    PXAssetCollectionReference * _assetCollectionReference;
    PXAssetReference * _assetReference;
    long long  _control;
}

@property (nonatomic, readonly) PXAssetCollectionReference *assetCollectionReference;
@property (nonatomic, readonly) PXAssetReference *assetReference;
@property (nonatomic, readonly) long long control;

- (void).cxx_destruct;
- (id)assetCollectionReference;
- (id)assetReference;
- (long long)control;
- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3;
- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetCollectionReference:(id)arg4;
- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetReference:(id)arg4;
- (id)initWithControl:(long long)arg1 spriteReference:(id)arg2 layout:(id)arg3 assetReference:(id)arg4 assetCollectionReference:(id)arg5;
- (id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userData:(id)arg4;

@end
