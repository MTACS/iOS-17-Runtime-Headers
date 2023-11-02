
@interface PXBrowserSelectionSnapshot : NSObject <PXBrowserSelectionSnapshot>

@property (nonatomic, readonly) long long assetCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedAssetCount;
@property (nonatomic, readonly) long long estimatedModelObjectsCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) NSArray *modelObjects;
@property (readonly) Class superclass;

+ (id)selectionWithIndexPaths:(id)arg1 dataSource:(id)arg2;

- (long long)assetCount;
- (id)assetReferenceAtIndex:(long long)arg1;
- (id)displayAssetAtIndex:(long long)arg1;
- (long long)estimatedAssetCount;
- (long long)estimatedModelObjectsCount;
- (long long)indexOfAssetReference:(id)arg1;
- (long long)mediaType;
- (id)modelObjects;

@end
