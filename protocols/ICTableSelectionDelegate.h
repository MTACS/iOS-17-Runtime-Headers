
@protocol ICTableSelectionDelegate <NSObject>

@required

- (bool)acceptsKeystrokes;
- (<ICAuxiliaryStyling> *)auxiliaryStylingController;
- (void)copySelection:(id)arg1;
- (void)cutSelection:(id)arg1;
- (void)deleteSelection:(id)arg1;
- (void)extendCellRangeSelectionInDirection:(unsigned long long)arg1 toEnd:(bool)arg2;
- (bool)isShowingTextStyleOptions;
- (void)pasteIntoSelection:(id)arg1;
- (void)selectionDidResignFirstResponder:(UIResponder *)arg1;
- (void)selectionWillBecomeFirstResponder:(UIResponder *)arg1;

@optional

- (void)addColumnLeftOfSelection:(id)arg1;
- (void)addColumnRightOfSelection:(id)arg1;
- (void)addRowAboveSelection:(id)arg1;
- (void)addRowBelowSelection:(id)arg1;

@end
