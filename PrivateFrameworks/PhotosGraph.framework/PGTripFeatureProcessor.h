
@interface PGTripFeatureProcessor : NSObject {
    void currentError;
    void currentFrequentLocationNodes;
    void currentTripLevel;
    void finalTripLocationScoreByLevel;
    void frequentStateLocationNodes;
    void graph;
    void highScoreCityNodes;
    void locationFrequency;
    void locationHelper;
    void momentNodes;
    void processorHelper;
    void scoreModifierNamesMet;
    void scorePerMoment;
    void scoresByAOI;
    void scoresByLevel;
    void totalNumberOfAssets;
    void totalScoreAvailable;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  tripDateInterval;
}

- (void).cxx_destruct;
- (id)finalScoreByLevelWithError:(id*)arg1;
- (id)frequencyPerLocationWithError:(id*)arg1;
- (id)getScorePerMoment;
- (id)getScoresByLevelWithError:(id*)arg1;
- (id)init;
- (id)initWithMomentNodes:(id)arg1 graph:(id)arg2 locationHelper:(id)arg3 error:(id*)arg4;
- (id)processTripLocationsWithReporter:(id)arg1 error:(id*)arg2;
- (id)scoreByAOIWithError:(id*)arg1;
- (void)sendAnalyticsEvent;

@end
