
@protocol ICTableColumnTextViewDelegate <NSObject>

@required

- (bool)acceptsKeystrokes;
- (ICAccount *)account;
- (ICAttachment *)attachment;
- (void)beginEditingSelectedRangeInTextView:(ICTableColumnTextView *)arg1;
- (bool)containedInNoteSelection;
- (void)didPasteOrDropTextForTableColumnTextView:(ICTableColumnTextView *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfCellForColumnTextView:(ICTableColumnTextView *)arg1 row:(NSUUID *)arg2;
- (bool)isNoteEditable;
- (void)moveDownCell;
- (void)moveLeftCell;
- (void)moveNextCell;
- (void)movePrevCell;
- (void)moveReturnCell;
- (void)moveRightCell;
- (void)moveShiftReturnCell;
- (void)moveTabCell;
- (void)moveUpCell;
- (ICNote *)note;
- (bool)pasteCellRange;
- (bool)preventScrolling;
- (void)selectTable;
- (void)setNeedsSave;
- (void)setPreventScrolling:(bool)arg1;
- (void)tappedTableAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateColumnWidthForColumn:(NSUUID *)arg1;
- (UIViewController *)viewController;

@optional

- (void)addColumnLeftOfSelection:(id)arg1;
- (void)addColumnRightOfSelection:(id)arg1;
- (void)addRowAboveSelection:(id)arg1;
- (void)addRowBelowSelection:(id)arg1;
- (void)selectCell;
- (NSArray *)textView:(ICTableColumnTextView *)arg1 selectedRanges:(NSArray *)arg2 withLocation:(struct CGPoint { double x1; double x2; })arg3 stillSelecting:(bool)arg4;

@end
