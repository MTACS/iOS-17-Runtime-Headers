
@protocol PGHighlightItem <NSObject>

@required

- (unsigned short)category;
- (NSDate *)endDate;
- (unsigned short)enrichmentState;
- (NSArray *)extendedCuratedAssets;
- (PHAsset *)keyAssetForHighlightFilter:(unsigned short)arg1;
- (unsigned short)kind;
- (NSDate *)localEndDate;
- (NSDate *)localStartDate;
- (unsigned short)mixedSharingCompositionKeyAssetRelationship;
- (id)modelObject;
- (unsigned long long)numberOfAssetsInExtendedForSharingFilter:(unsigned short)arg1;
- (unsigned long long)numberOfAssetsInExtendedMixed;
- (unsigned long long)numberOfAssetsInExtendedPrivate;
- (unsigned long long)numberOfAssetsInExtendedShared;
- (double)promotionScore;
- (unsigned short)sharingComposition;
- (NSDate *)startDate;
- (unsigned short)type;
- (NSString *)uuid;
- (unsigned short)visibilityStateForHighlightFilter:(unsigned short)arg1;

@end
