
@interface PGDayHighlightFeatureSummaryGenerator : NSObject <PGFeatureSummaryGeneratorProtocol> {
    PGGraph * _graph;
    PGGraphHighlightNode * _highlightNode;
    PGHighlightTailorContext * _highlightTailorContext;
    NSObject<OS_os_log> * _loggingConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)durationFromDateIntervals:(id)arg1;
- (id)initWithHighlightNode:(id)arg1 loggingConnection:(id)arg2 highlightTailorContext:(id)arg3 graph:(id)arg4;
- (unsigned long long)locationGranularityScoreForSummarizedFeatureSubtype:(unsigned short)arg1;
- (id)sortedSummarizedFeaturesForMomentNodes:(id)arg1;

@end
