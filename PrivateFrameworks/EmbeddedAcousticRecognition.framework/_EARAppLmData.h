
@interface _EARAppLmData : _EARLmData {
    struct shared_ptr<quasar::AppLmData> { 
        struct AppLmData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  data;
    long long  inputType;
    bool  roundingEnabled;
}

@property (nonatomic, readonly) struct shared_ptr<quasar::AppLmData> { struct AppLmData {} *x1; struct __shared_weak_count {} *x2; } data;
@property (nonatomic, readonly) NSArray *orderedOovs;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addLineWithType:(unsigned long long)arg1 uuid:(id)arg2 content:(id)arg3;
- (void)addNgramCountWithType:(unsigned long long)arg1 content:(id)arg2;
- (id)addOovTokensFromSentence:(id)arg1;
- (void)addSentenceWithType:(unsigned long long)arg1 uuid:(id)arg2 content:(id)arg3;
- (void)addSentenceWithType:(unsigned long long)arg1 uuid:(id)arg2 content:(id)arg3 hasWeights:(bool)arg4;
- (long long)canAddAsrProns:(id)arg1 forWord:(id)arg2;
- (long long)canAddProns:(id)arg1 forWord:(id)arg2 pronIsXsampa:(bool)arg3;
- (long long)canAddXsampaProns:(id)arg1 forWord:(id)arg2;
- (struct shared_ptr<quasar::AppLmData> { struct AppLmData {} *x1; struct __shared_weak_count {} *x2; })data;
- (void)generateLmeData:(id)arg1;
- (id)initWithAppLmData:(struct shared_ptr<quasar::AppLmData> { struct AppLmData {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)initWithConfiguration:(id)arg1 ncsRoot:(id)arg2 recognizerConfigPath:(id)arg3;
- (id)initWithConfiguration:(id)arg1 recognizerConfigPath:(id)arg2;
- (long long)inputType;
- (long long)lmeThreshold;
- (id)metrics;
- (id)orderedOovs;
- (bool)roundingEnabled;
- (bool)setAsrProns:(id)arg1 forWord:(id)arg2;
- (void)setInputFormat:(long long)arg1;
- (bool)setProns:(id)arg1 forWord:(id)arg2 pronIsXsampa:(bool)arg3;
- (void)setRoundingEnabled:(bool)arg1;
- (bool)setXsampaProns:(id)arg1 forWord:(id)arg2;
- (id)supportedSlots;

@end
