
@protocol PKTextInputWritingSessionDelegate <NSObject>

@required

- (void)writingSession:(PKTextInputWritingSession *)arg1 didEndWritingInElement:(PKTextInputElement *)arg2;
- (void)writingSession:(PKTextInputWritingSession *)arg1 didInsertTextInElement:(PKTextInputElement *)arg2;
- (bool)writingSession:(PKTextInputWritingSession *)arg1 elementHasPendingOperations:(PKTextInputElement *)arg2;
- (void)writingSession:(PKTextInputWritingSession *)arg1 willBeginWritingInElement:(PKTextInputElement *)arg2;

@end
