
@interface TILanguageModelOfflineLearningStrategyMecabraFavonius : NSObject <TILanguageModelOfflineLearningStrategy> {
    TILanguageModelOfflineLearningTask * _learningTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) TILanguageModelOfflineLearningTask *learningTask;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didFinishLearning;
- (id)filterMessages:(id)arg1;
- (id)identifyLanguagesForMessages:(id)arg1;
- (bool)incrementUsageCountsForMessages:(id)arg1 withAdaptationContext:(id)arg2;
- (id)initWithClientIdentifier:(id)arg1;
- (bool)learnMessages:(id)arg1 withRecipientRecords:(id)arg2;
- (id)learningTask;

@end
