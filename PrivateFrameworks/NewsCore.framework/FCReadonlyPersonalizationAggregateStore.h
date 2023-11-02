
@interface FCReadonlyPersonalizationAggregateStore : NSObject <FCReadonlyPersonalizationAggregateStore> {
    double  _decayRate;
    <FCDerivedPersonalizationData> * _derivedPersonalizationData;
    <FCPersonalizationDataGeneratorType> * _generator;
    NSMutableDictionary * _overrideAggregatesByFeatureKey;
    FCOnce * _prepareOnce;
    unsigned long long  _scoringType;
}

@property (nonatomic, readonly) NSDictionary *allAggregates;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double decayRate;
@property (nonatomic, retain) <FCDerivedPersonalizationData> *derivedPersonalizationData;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FCPersonalizationDataGeneratorType> *generator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *overrideAggregatesByFeatureKey;
@property (nonatomic, retain) FCOnce *prepareOnce;
@property (nonatomic) unsigned long long scoringType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aggregateForFeatureKey:(id)arg1;
- (id)aggregatesForFeatures:(id)arg1;
- (id)allAggregates;
- (id)baselineAggregateWithConfigurableValues:(id)arg1;
- (double)decayRate;
- (id)derivedPersonalizationData;
- (void)enumerateAggregatesUsingBlock:(id /* block */)arg1;
- (id)generator;
- (id)init;
- (id)initWithGenerator:(id)arg1;
- (void)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6 configurableValues:(id)arg7;
- (id)overrideAggregatesByFeatureKey;
- (void)prepareAggregatesForUseWithCompletionHandler:(id /* block */)arg1;
- (id)prepareOnce;
- (void)processTodayPersonalizationUpdates:(id)arg1 withConfigurableValues:(id)arg2;
- (unsigned long long)scoringType;
- (void)setDecayRate:(double)arg1;
- (void)setDerivedPersonalizationData:(id)arg1;
- (void)setGenerator:(id)arg1;
- (void)setOverrideAggregatesByFeatureKey:(id)arg1;
- (void)setPrepareOnce:(id)arg1;
- (void)setScoringType:(unsigned long long)arg1;
- (void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 individually:(bool)arg5 configurableValues:(id)arg6;

@end
