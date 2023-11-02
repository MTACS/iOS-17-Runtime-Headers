
@protocol PGHighlightModelChangeRequest <NSObject>

@required

- (void)clearCurationWithType:(unsigned short)arg1;
- (void)clearCurations;
- (void)didEnrichHighlight;
- (unsigned short)enrichmentState;
- (void)enumerateMomentChangeRequestsForUUIDs:(void *)arg1 inPhotoLibrary:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 10: NSArray *, PHPhotoLibrary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PGHighlightModelMomentChangeRequest> *, NSString *, bool*, void*
- (NSDate *)lastEnrichmentDate;
- (unsigned short)mixedSharingCompositionKeyAssetRelationship;
- (unsigned long long)mood;
- (double)promotionScore;
- (void)setAssets:(id <NSFastEnumeration>)arg1 forCurationType:(unsigned short)arg2;
- (void)setEnrichmentState:(unsigned short)arg1;
- (void)setKeyAssetPrivate:(PHAsset *)arg1;
- (void)setKeyAssetShared:(PHAsset *)arg1;
- (void)setLastEnrichmentDate:(NSDate *)arg1;
- (void)setMixedSharingCompositionKeyAssetRelationship:(unsigned short)arg1;
- (void)setMood:(unsigned long long)arg1;
- (void)setPromotionScore:(double)arg1;
- (void)setSmartDescription:(NSString *)arg1;
- (void)setSmartDescriptionMixed:(NSString *)arg1;
- (void)setSmartDescriptionShared:(NSString *)arg1;
- (void)setVerboseSmartDescription:(NSString *)arg1;
- (void)setVerboseSmartDescriptionMixed:(NSString *)arg1;
- (void)setVerboseSmartDescriptionShared:(NSString *)arg1;
- (NSString *)smartDescription;
- (NSString *)smartDescriptionMixed;
- (NSString *)smartDescriptionShared;
- (NSString *)verboseSmartDescription;
- (NSString *)verboseSmartDescriptionMixed;
- (NSString *)verboseSmartDescriptionShared;

@end
