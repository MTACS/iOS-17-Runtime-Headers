
@interface CKImportStatusManager : NSObject <PXAssetImportStatusManager>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addAssetImportStatusObserver:(id)arg1;
- (long long)importStateForAsset:(id)arg1;
- (void)removeAssetImportStatusObserver:(id)arg1;

@end
