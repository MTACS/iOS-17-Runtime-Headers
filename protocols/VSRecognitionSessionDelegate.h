
@protocol VSRecognitionSessionDelegate <NSObject>

@optional

- (void)recognitionSession:(VSRecognitionSession *)arg1 didCompleteActionWithError:(NSError *)arg2;
- (void)recognitionSession:(VSRecognitionSession *)arg1 didFinishSpeakingFeedbackStringWithError:(NSError *)arg2;
- (NSError *)recognitionSession:(VSRecognitionSession *)arg1 openURL:(NSURL *)arg2;
- (void)recognitionSession:(void *)arg1 openURL:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: VSRecognitionSession *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)recognitionSessionDidBeginAction:(VSRecognitionSession *)arg1;
- (bool)recognitionSessionWillBeginAction:(VSRecognitionSession *)arg1;

@end
