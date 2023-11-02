
@interface NLPLearnerTextData : NSObject {
    unsigned long long  _iterator;
    NSLocale * _locale;
    unsigned long long  _maxSequenceLength;
    bool  _processingNewRecord;
    NSMutableArray * _sentences;
}

@property (nonatomic) unsigned long long iterator;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic) unsigned long long maxSequenceLength;
@property (nonatomic, readonly) unsigned long long numSamples;
@property (nonatomic) bool processingNewRecord;
@property (nonatomic, retain) NSMutableArray *sentences;

+ (id)dataForPFL:(long long)arg1 andLocale:(id)arg2;
+ (id)dataForTask:(long long)arg1 andLocale:(id)arg2;
+ (unsigned long long)defaultMaxSequenceLength;
+ (void)initialize;

- (void).cxx_destruct;
- (bool)addExamples:(id)arg1;
- (void)addResource:(id)arg1;
- (id)getSamples;
- (id)initWithLocale:(id)arg1;
- (unsigned long long)iterator;
- (bool)loadFromCoreDuet:(id)arg1 limitSamplesTo:(unsigned long long)arg2;
- (bool)loadFromCoreDuet:(id)arg1 limitSamplesTo:(unsigned long long)arg2 withLocale:(id)arg3 andLMStreamTokenizationBlock:(id /* block */)arg4;
- (id)locale;
- (unsigned long long)maxSequenceLength;
- (unsigned long long)numSamples;
- (bool)processingNewRecord;
- (void)rewind;
- (id)sentences;
- (void)setIterator:(unsigned long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaxSequenceLength:(unsigned long long)arg1;
- (void)setProcessingNewRecord:(bool)arg1;
- (void)setSentences:(id)arg1;

@end
