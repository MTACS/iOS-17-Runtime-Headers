
@protocol PKRecognitionSessionManagerDelegate <NSObject>

@required

- (void)recognitionSessionManager:(PKRecognitionSessionManager *)arg1 foundDataDetectorItems:(NSArray *)arg2;
- (void)recognitionSessionManager:(PKRecognitionSessionManager *)arg1 foundHashtagItems:(NSArray *)arg2;
- (void)recognitionSessionManager:(PKRecognitionSessionManager *)arg1 foundMentionItems:(NSArray *)arg2;

@end
