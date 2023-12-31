
@protocol TILanguageModelOfflineLearningStrategy <NSObject>

@required

- (void)didFinishLearning;
- (NSArray *)filterMessages:(NSArray *)arg1;
- (bool)learnMessages:(NSArray *)arg1 withRecipientRecords:(NSDictionary *)arg2;
- (TILanguageModelOfflineLearningTask *)learningTask;

@end
