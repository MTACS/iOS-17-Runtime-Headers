
@interface TCTerminationEstimator : NSObject {
    NSMutableArray * _cachedSentenceArray;
    NSMutableDictionary * _cachedTerminationEstimateDictionary;
    struct CoreLanguageModelWithState { } * _coreLM;
    unsigned long long  _coreLMCount;
    double  _coreLMLastTime;
    NSObject<OS_os_transaction> * _coreLMTransaction;
    NSTimer * _idleTimer;
    NSString * _language;
    float  _threshold;
}

- (void).cxx_destruct;
- (bool)analyzeSentenceAsPotentiallyTerminated:(id)arg1;
- (float)computedTerminationEstimateForSentence:(id)arg1;
- (void)dealloc;
- (void)idleTimerFired:(id)arg1;
- (id)initWithLanguage:(id)arg1;
- (void)loadModel;
- (void)resetIdleTimer;
- (void)resetModel;
- (float)terminationEstimateForSentence:(id)arg1;

@end
