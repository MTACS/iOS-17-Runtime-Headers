
@interface _INAggregator : NSObject

+ (bool)_canReportDistributionOfVocabularyStringType:(long long)arg1;
+ (id)_distributionKeyForVocabularyStringType:(long long)arg1;
+ (unsigned long long)_singificantFigureForVocabularyStringType:(long long)arg1;
+ (void)logReceivedCount:(unsigned long long)arg1 ofVocabularyStringType:(long long)arg2;
+ (void)resetSynapseVocabularyUpdate;
+ (double)roundCount:(unsigned long long)arg1 toSignificantFigure:(unsigned long long)arg2;

@end
