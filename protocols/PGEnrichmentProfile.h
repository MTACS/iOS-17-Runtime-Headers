
@protocol PGEnrichmentProfile <NSObject>

@required

- (bool)canEnrichHighlight:(id <PGHighlightModel>)arg1 withOptions:(unsigned long long)arg2;
- (bool)canUseLocationInformationWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1 graph:(PGGraph *)arg2;
- (bool)collectsDebugInfo;
- (PGCurationOptions *)curationOptionsWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1 sharingFilter:(unsigned short)arg2;
- (NSDictionary *)debugInfos;
- (unsigned short)enrichmentStateWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1;
- (PGDejunkerDeduperOptions *)extendedCurationOptions;
- (NSArray *)extendedCurationWithHighlightInfo:(void *)arg1 sharingFilter:(void *)arg2 progressBlock:(void *)arg3; // needs 3 arg types, found 9: PGHighlightTailorHighlightInfo *, unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*
- (PGHighlightTailorHighlightInfo *)highlightInfoWithHighlight:(id <PGHighlightModel>)arg1 graph:(PGGraph *)arg2 highlightTailorContext:(PGHighlightTailorContext *)arg3;
- (NSString *)identifier;
- (PGCurationCriteria *)keyAssetCurationCriteriaWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1 graph:(PGGraph *)arg2;
- (PHAsset *)keyAssetWithHighlightInfo:(void *)arg1 sharingFilter:(void *)arg2 graph:(void *)arg3 progressBlock:(void *)arg4; // needs 4 arg types, found 10: PGHighlightTailorHighlightInfo *, unsigned short, PGGraph *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*
- (NSDictionary *)momentProcessedLocationByMomentUUIDWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1 graph:(PGGraph *)arg2;
- (NSDictionary *)momentTitleByMomentUUIDWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1;
- (double)promotionScoreWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1;
- (void)setCollectsDebugInfo:(bool)arg1;
- (void)setExtendedCurationOptions:(PGDejunkerDeduperOptions *)arg1;
- (NSArray *)summaryCurationWithHighlightInfo:(void *)arg1 sharingFilter:(void *)arg2 progressBlock:(void *)arg3; // needs 3 arg types, found 9: PGHighlightTailorHighlightInfo *, unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*
- (PGTitleTuple *)titleWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1 sharingFilter:(unsigned short)arg2 curatedAssets:(NSArray *)arg3 keyAsset:(PHAsset *)arg4 createVerboseTitle:(bool)arg5;

@optional

- (unsigned short)targetEnrichmentState;

@end
