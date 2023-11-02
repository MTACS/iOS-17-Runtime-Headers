
@protocol _PXSharedLibrarySharingSuggestionContainer <NSObject, NSCopying>

@required

- (NSSet *)px_sl_containedSharingSuggestionObjectIDs;
- (NSArray *)px_sl_containedSharingSuggestions;
- (PHAssetCollection *)px_sl_containerCollection;
- (PHFetchResult *)px_sl_fetchAssetCollections;
- (void)px_sl_getKeyAsset:(id*)arg1 suggestedDate:(id*)arg2 locations:(id*)arg3;
- (<NSCopying><NSObject> *)px_sl_identifier;
- (NSString *)px_sl_title;

@end
