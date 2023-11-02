
@protocol VKCTextRecognitionResultTextDelegate <NSObject>

@required

- (unsigned long long)draggedRectEdgeForTextRecognitionResult:(VKCTextRecognitionResult *)arg1;
- (VKTextRange *)preSelectionChangeSelectedRangeForTextRecognitionResult:(VKCTextRecognitionResult *)arg1;
- (VKTextRange *)selectedRangeForTextRecognitionResult:(VKCTextRecognitionResult *)arg1;

@end
