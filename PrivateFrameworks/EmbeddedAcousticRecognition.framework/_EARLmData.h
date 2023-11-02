
@interface _EARLmData : NSObject {
    struct shared_ptr<quasar::PersonalizedLmData> { 
        struct PersonalizedLmData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _data;
    long long  _inputType;
    bool  _roundingEnabled;
}

@property (nonatomic, readonly) struct shared_ptr<quasar::PersonalizedLmData> { struct PersonalizedLmData {} *x1; struct __shared_weak_count {} *x2; } data;
@property (nonatomic, readonly) long long inputType;
@property (nonatomic) bool roundingEnabled;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDocumentWithUUID:(id)arg1 content:(id)arg2;
- (void)addDocumentWithUUID:(id)arg1 content:(id)arg2 metadata:(id)arg3;
- (void)addLineWithType:(unsigned long long)arg1 uuid:(id)arg2 content:(id)arg3;
- (void)addNgramCountWithType:(unsigned long long)arg1 content:(id)arg2;
- (void)addSentenceWithType:(unsigned long long)arg1 uuid:(id)arg2 content:(id)arg3;
- (void)addSentenceWithType:(unsigned long long)arg1 uuid:(id)arg2 content:(id)arg3 hasWeights:(bool)arg4;
- (struct shared_ptr<quasar::PersonalizedLmData> { struct PersonalizedLmData {} *x1; struct __shared_weak_count {} *x2; })data;
- (void)enumerateSentencesOfType:(unsigned long long)arg1 block:(id /* block */)arg2;
- (id)initWithConfiguration:(id)arg1 ncsRoot:(id)arg2 recognizerConfiguration:(id)arg3;
- (id)initWithConfiguration:(id)arg1 recognizerConfiguration:(id)arg2;
- (long long)inputType;
- (double)maxAge;
- (id)metrics;
- (double)minAge;
- (unsigned long long)queryLimit;
- (bool)roomForMoreData;
- (bool)roundingEnabled;
- (void)setInputFormat:(long long)arg1;
- (void)setRoundingEnabled:(bool)arg1;
- (id)sources;
- (id)wordFrequency;

@end
