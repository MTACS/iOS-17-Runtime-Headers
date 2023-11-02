
@interface NLPLearnerEmojiClassificationData : NLPLearnerTextData {
    struct CFScopedPtr<void *> { 
        void *m_ref; 
    }  _embedding;
    unsigned long long  _embeddingDimension;
    NSDictionary * _labelClasses;
    NSMutableArray * _labels;
    NSNumber * _noneClassProbability;
}

@property (nonatomic, readonly) unsigned long long embeddingDimension;
@property (nonatomic, readonly) NSDictionary *labelClasses;
@property (nonatomic, readonly) unsigned long long numOutputClasses;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addExamples:(id)arg1;
- (void)addResource:(id)arg1;
- (unsigned long long)embeddingDimension;
- (id)initWithLocale:(id)arg1;
- (id)labelClasses;
- (bool)loadFromCoreDuet:(id)arg1 limitSamplesTo:(unsigned long long)arg2;
- (id)nextEvaluationDataPoint;
- (id)nextTrainingDataBatch:(unsigned long long)arg1;
- (unsigned long long)numOutputClasses;
- (void)sampleNoneClassExample:(id)arg1;

@end
