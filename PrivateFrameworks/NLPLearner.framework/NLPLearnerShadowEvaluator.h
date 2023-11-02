
@interface NLPLearnerShadowEvaluator : NSObject {
    long long  _evaluationTask;
    NSLocale * _locale;
    unsigned long long  _maxSamples;
    unsigned long long  _topK;
}

@property (nonatomic) long long evaluationTask;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) unsigned long long maxSamples;
@property (nonatomic, readonly) unsigned long long topK;

+ (id)evaluatorWithLocale:(id)arg1 andTask:(long long)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (id)evaluateModel:(id)arg1 onRecords:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4 error:(id*)arg5;
- (long long)evaluationTask;
- (id)initWithLocale:(id)arg1 andTask:(long long)arg2;
- (id)locale;
- (unsigned long long)maxSamples;
- (id)prepareDataFromRecords:(id)arg1;
- (void)setEvaluationTask:(long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaxSamples:(unsigned long long)arg1;
- (unsigned long long)topK;

@end
