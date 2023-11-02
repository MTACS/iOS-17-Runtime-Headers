
@protocol SBPressSequenceRecognizerDelegate <NSObject>

@required

- (void)pressSequenceRecognizerDidCompleteSequence:(SBPressSequenceRecognizer *)arg1;

@optional

- (void)pressSequenceRecognizer:(SBPressSequenceRecognizer *)arg1 didBeginPressDownAtIndex:(unsigned long long)arg2;
- (void)pressSequenceRecognizerDidFail:(SBPressSequenceRecognizer *)arg1;

@end
