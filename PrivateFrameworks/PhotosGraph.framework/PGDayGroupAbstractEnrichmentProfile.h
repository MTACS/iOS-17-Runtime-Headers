
@interface PGDayGroupAbstractEnrichmentProfile : NSObject <PGEnrichmentProfile> {
    bool  _collectsDebugInfo;
    PGCurationManager * _curationManager;
    PGDejunkerDeduperOptions * _extendedCurationOptions;
    NSObject<OS_os_log> * _loggingConnection;
    NSMutableDictionary * _mutableDebugInfos;
}

@property (nonatomic) bool collectsDebugInfo;
@property (nonatomic, readonly) PGCurationManager *curationManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *debugInfos;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PGDejunkerDeduperOptions *extendedCurationOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, readonly) NSMutableDictionary *mutableDebugInfos;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned short targetEnrichmentState;

- (void).cxx_destruct;
- (id)_childHighlightsToFetchCurationForHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2;
- (bool)canEnrichHighlight:(id)arg1 withOptions:(unsigned long long)arg2;
- (bool)canUseLocationInformationWithHighlightInfo:(id)arg1 graph:(id)arg2;
- (bool)collectsDebugInfo;
- (id)curationManager;
- (id)curationOptionsWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2;
- (id)debugInfos;
- (unsigned short)enrichmentStateWithHighlightInfo:(id)arg1;
- (id)extendedCurationOptions;
- (id)extendedCurationWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2 progressBlock:(id /* block */)arg3;
- (id)highlightInfoWithHighlight:(id)arg1 graph:(id)arg2 highlightTailorContext:(id)arg3;
- (id)identifier;
- (id)initWithCurationManager:(id)arg1 loggingConnection:(id)arg2;
- (id)keyAssetCurationCriteriaWithHighlightInfo:(id)arg1 graph:(id)arg2;
- (id)keyAssetWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2 graph:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)loggingConnection;
- (id)momentProcessedLocationByMomentUUIDWithHighlightInfo:(id)arg1 graph:(id)arg2;
- (id)momentTitleByMomentUUIDWithHighlightInfo:(id)arg1;
- (id)mutableDebugInfos;
- (double)promotionScoreWithHighlightInfo:(id)arg1;
- (void)setCollectsDebugInfo:(bool)arg1;
- (void)setExtendedCurationOptions:(id)arg1;
- (id)summaryCurationWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2 progressBlock:(id /* block */)arg3;
- (id)titleWithHighlightInfo:(id)arg1 sharingFilter:(unsigned short)arg2 curatedAssets:(id)arg3 keyAsset:(id)arg4 createVerboseTitle:(bool)arg5;

@end
