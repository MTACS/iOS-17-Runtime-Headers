
@interface _DKPredictor : NSObject {
    <_DKKnowledgeQuerying> * _knowledgeStore;
}

+ (id)deviceActivityLikelihoodQueryPredicate;
+ (id)predictorWithKnowledgeStore:(id)arg1;

- (void).cxx_destruct;
- (id)deviceActivityLikelihood;
- (id)displayOnLikelihood;
- (id)expectedInBedPeriod;
- (id)launchLikelihoodForTopNApplications:(long long)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3;
- (id)launchLikelihoodPredictionForApp:(id)arg1;
- (id)localInBedPeriod;
- (id)pluginLikelihood;
- (id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
- (id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 asOfDate:(id)arg4;
- (id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 withDataPartitionType:(unsigned long long)arg4 asOfDate:(id)arg5;
- (id)predictionForStreamsWithNames:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;

@end
