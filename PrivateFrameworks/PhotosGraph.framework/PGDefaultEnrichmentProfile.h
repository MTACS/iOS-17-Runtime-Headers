
@interface PGDefaultEnrichmentProfile : NSObject <PGEnrichmentProfile> {
    bool  _collectsDebugInfo;
    PGCurationManager * _curationManager;
    NSMutableDictionary * _debugInfos;
    PGDejunkerDeduperOptions * _extendedCurationOptions;
    NSObject<OS_os_log> * _loggingConnection;
}

@property (nonatomic) bool collectsDebugInfo;
@property (nonatomic, readonly) PGCurationManager *curationManager;
@property (nonatomic, readonly) PGCurationOptions *curationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *debugInfos;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PGDejunkerDeduperOptions *extendedCurationOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) PGKeyAssetCurationOptions *keyAssetCurationOptions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned short targetEnrichmentState;

+ (unsigned long long)durationForSummary;
+ (double)evaluatedDurationsWithAssets:(id)arg1 options:(id)arg2;
+ (double)evaluatedDurationsWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2 options:(id)arg3;
+ (double)targetCurationDurationWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2 options:(id)arg3;
+ (double)targetCurationDurationWithPrivateAssets:(id)arg1 sharedAssets:(id)arg2 sharingFilter:(unsigned short)arg3 options:(id)arg4;

- (void).cxx_destruct;
- (bool)canEnrichHighlight:(id)arg1 withOptions:(unsigned long long)arg2;
- (bool)canUseLocationInformationWithHighlightInfo:(id)arg1 graph:(id)arg2;
- (bool)collectsDebugInfo;
- (id)curationManager;
- (id)curationOptions;
- (id)curationOptionsWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2;
- (id)debugInfoDictionaryByAddingItemInfosToDebugInfo:(id)arg1;
- (id)debugInfos;
- (unsigned short)enrichmentStateWithHighlightInfo:(id)arg1;
- (id)extendedCurationOptions;
- (id)extendedCurationWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2 progressBlock:(id /* block */)arg3;
- (id)faceInfosWithAsset:(id)arg1;
- (id)highlightInfoWithHighlight:(id)arg1 graph:(id)arg2 highlightTailorContext:(id)arg3;
- (id)identifier;
- (id)initWithCurationManager:(id)arg1 loggingConnection:(id)arg2;
- (id)keyAssetCurationCriteriaWithHighlightInfo:(id)arg1 graph:(id)arg2;
- (id)keyAssetCurationOptions;
- (id)keyAssetWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2 graph:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)momentProcessedLocationByMomentUUIDWithHighlightInfo:(id)arg1 graph:(id)arg2;
- (id)momentTitleByMomentUUIDWithHighlightInfo:(id)arg1;
- (double)promotionScoreWithHighlightInfo:(id)arg1;
- (void)setCollectsDebugInfo:(bool)arg1;
- (void)setExtendedCurationOptions:(id)arg1;
- (id)summaryCurationWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2 progressBlock:(id /* block */)arg3;
- (unsigned short)targetEnrichmentState;
- (id)titleWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2 curatedAssets:(id)arg3 keyAsset:(id)arg4 createVerboseTitle:(bool)arg5;

@end
