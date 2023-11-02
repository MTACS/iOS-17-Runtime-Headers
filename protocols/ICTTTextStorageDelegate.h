
@protocol ICTTTextStorageDelegate <NSTextStorageDelegate>

@optional

- (void)textStorage:(NSTextStorage *)arg1 didReplace:(NSAttributedString *)arg2 with:(NSAttributedString *)arg3;
- (void)textStorageDidChange:(NSTextStorage *)arg1;
- (void)textStorageDidPerformUndo:(NSTextStorage *)arg1;
- (void)textStorageWillChange:(NSTextStorage *)arg1;

@end
