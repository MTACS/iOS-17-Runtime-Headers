
@protocol CHRecognitionSessionObserver <NSObject>

@required

- (void)recognitionSessionDidUpdateRecognitionResult:(CHRecognitionSession *)arg1;

@optional

- (double)preferredRecognitionResultUpdatesInterval;
- (void)recognitionSessionDidChangeStatus:(CHRecognitionSession *)arg1;

@end
