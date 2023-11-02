
@interface PGHighlightItemModelManager : NSObject <PGHighlightItemListModelWriter, PGHighlightItemModelReader> {
    NSMutableDictionary * _contextualKeyAssetMixedByHighlighItemUUID;
    NSMutableDictionary * _contextualKeyAssetPrivateByHighlighItemUUID;
    NSMutableDictionary * _contextualKeyAssetSharedByHighlighItemUUID;
    PHPhotoLibrary * _library;
    NSMutableDictionary * _visibilityStateMixedByHighlighItemUUID;
    NSMutableDictionary * _visibilityStatePrivateByHighlighItemUUID;
    NSMutableDictionary * _visibilityStateSharedByHighlighItemUUID;
}

@property (nonatomic, readonly) NSMutableDictionary *contextualKeyAssetMixedByHighlighItemUUID;
@property (nonatomic, readonly) NSMutableDictionary *contextualKeyAssetPrivateByHighlighItemUUID;
@property (nonatomic, readonly) NSMutableDictionary *contextualKeyAssetSharedByHighlighItemUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *library;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *visibilityStateMixedByHighlighItemUUID;
@property (nonatomic, readonly) NSMutableDictionary *visibilityStatePrivateByHighlighItemUUID;
@property (nonatomic, readonly) NSMutableDictionary *visibilityStateSharedByHighlighItemUUID;

- (void).cxx_destruct;
- (id)_contextualKeyAssetByHighlighItemUUIDForHighlightFilter:(unsigned short)arg1;
- (id)_visibilityStateByHighlighItemUUIDForHighlightFilter:(unsigned short)arg1;
- (void)addVisibleHighlight:(id)arg1 inMonth:(id)arg2 withHighlightFilter:(unsigned short)arg3;
- (void)commonInit;
- (void)consumeHighlightItemList:(id)arg1;
- (id)contextualKeyAssetForHighlightItem:(id)arg1 sharingFilter:(unsigned short)arg2;
- (id)contextualKeyAssetMixedByHighlighItemUUID;
- (id)contextualKeyAssetPrivateByHighlighItemUUID;
- (id)contextualKeyAssetSharedByHighlighItemUUID;
- (id)fetchChildHighlightItemsForHighlightItem:(id)arg1 sharingFilter:(unsigned short)arg2;
- (id)fetchParentHighlightItemsForHighlightItems:(id)arg1;
- (id)highlightUUIDsWithContextualKeyAssetChange;
- (id)highlightUUIDsWithVisibilityStateChange;
- (id)initForTesting;
- (id)initWithLibrary:(id)arg1;
- (id)library;
- (void)setContextualKeyAsset:(id)arg1 forHighlightItem:(id)arg2 sharingFilter:(unsigned short)arg3;
- (void)setVisibilityState:(unsigned short)arg1 forHighlightItem:(id)arg2 sharingFilter:(unsigned short)arg3;
- (void)setVisibilityState:(unsigned short)arg1 forHighlightItemList:(id)arg2 sharingFilter:(unsigned short)arg3;
- (unsigned short)visibilityStateForHighlightItem:(id)arg1 sharingFilter:(unsigned short)arg2;
- (id)visibilityStateMixedByHighlighItemUUID;
- (id)visibilityStatePrivateByHighlighItemUUID;
- (id)visibilityStateSharedByHighlighItemUUID;

@end
