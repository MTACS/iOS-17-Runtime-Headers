
@protocol MKVariableDelayTapRecognizerDelegate <NSObject>

@optional

- (double)variableDelayTapRecognizer:(MKVariableDelayTapRecognizer *)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(UITouch *)arg3;

@end
