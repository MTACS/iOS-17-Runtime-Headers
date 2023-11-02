
@interface SGMIFeatureVectorCollator : NSObject {
    unsigned long long  _endInDaysAgo;
    NSArray * _featureNames;
    unsigned long long  _limit;
    NSArray * _simulatedCSSIs;
    unsigned long long  _startInDaysAgo;
    SGSqlEntityStore * _store;
    bool  _useSpotlightDataForMissingBiomeData;
    bool  _withBiomeData;
}

- (void).cxx_destruct;
- (void)forEach:(id /* block */)arg1;
- (id)initWithMessagesFromDaysAgo:(unsigned long long)arg1 throughDaysAgo:(unsigned long long)arg2 limit:(unsigned long long)arg3 withBiomeData:(bool)arg4 store:(id)arg5 useSpotlightDataForMissingBiomeData:(bool)arg6 preLoadedFeatureNames:(id)arg7;
- (id)initWithMessagesFromDaysAgo:(unsigned long long)arg1 throughDaysAgo:(unsigned long long)arg2 limit:(unsigned long long)arg3 withBiomeData:(bool)arg4 store:(id)arg5 useSpotlightDataForMissingBiomeData:(bool)arg6 preLoadedFeatureNames:(id)arg7 simulatedCSSIs:(id)arg8;

@end
