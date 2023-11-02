
@interface CKMediaObjectAssetDataSource : PXAssetsDataSource {
    <PXDisplayAssetCollection> * _assetCollection;
    struct { 
        unsigned long long photosCount; 
        unsigned long long videosCount; 
        unsigned long long othersCount; 
    }  _assetTypeCounts;
    NSDictionary * _chatItemGUIDMap;
    NSArray * _chatItems;
    NSArray * _displayAssets;
    bool  _hasCheckedForMomentShareURL;
    bool  _hasCollectedItemsCount;
    NSArray * _mediaObjects;
    NSURL * _momentShareURL;
    NSString * _parentChatItemGUID;
}

@property (nonatomic, retain) <PXDisplayAssetCollection> *assetCollection;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } assetTypeCounts;
@property (nonatomic, retain) NSDictionary *chatItemGUIDMap;
@property (nonatomic, retain) NSArray *chatItems;
@property (nonatomic, retain) NSArray *displayAssets;
@property (nonatomic, readonly) NSArray *mediaObjects;
@property (nonatomic, readonly) NSURL *momentShareURL;
@property (nonatomic, retain) NSString *parentChatItemGUID;

- (void).cxx_destruct;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_indexPathForMediaObject:(id)arg1;
- (id)assetCollection;
- (id)assetReferenceForMediaObject:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })assetTypeCounts;
- (id)chatItemForAsset:(id)arg1;
- (id)chatItemForAssetReference:(id)arg1;
- (id)chatItemGUIDMap;
- (id)chatItems;
- (id)copyRefreshingAssetsAtIndexes:(id)arg1;
- (id)displayAssets;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)initWithChatItems:(id)arg1 parentChatItemGUID:(id)arg2;
- (id)initWithChatItems:(id)arg1 parentChatItemGUID:(id)arg2 displayAssets:(id)arg3 chatItemGUIDMap:(id)arg4;
- (id)mediaObjects;
- (id)momentShareURL;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)parentChatItemGUID;
- (void)setAssetCollection:(id)arg1;
- (void)setChatItemGUIDMap:(id)arg1;
- (void)setChatItems:(id)arg1;
- (void)setDisplayAssets:(id)arg1;
- (void)setParentChatItemGUID:(id)arg1;
- (id)temporaryChatItemForAssetReference:(id)arg1;

@end
