
@interface SearchUIKeyboardableCollectionViewController : UICollectionViewController <UIGestureRecognizerDelegate> {
    double  _additionalKeyboardHeight;
    double  _currentKeyboardHeight;
    <SearchUIKeyboardableTableViewDelegate> * _interactionDelegate;
    bool  _shouldHideTableCellsUnderKeyboard;
    UITextField * _textField;
}

@property (nonatomic) double additionalKeyboardHeight;
@property (nonatomic) double currentKeyboardHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property <SearchUIKeyboardableTableViewDelegate> *interactionDelegate;
@property (nonatomic) bool shouldHideTableCellsUnderKeyboard;
@property (readonly) Class superclass;
@property (nonatomic) UITextField *textField;

- (void).cxx_destruct;
- (void)addKeyCommandForKey:(id)arg1 action:(SEL)arg2;
- (double)additionalKeyboardHeight;
- (double)adjustedVerticalOffset;
- (bool)canBecomeFirstResponder;
- (bool)canHighlightRowAtIndexPath:(id)arg1;
- (double)contentHeight;
- (bool)contentIsTallEnoughToBeOccludedByCurrentKeyboardHeightAndTextField;
- (double)currentKeyboardHeight;
- (void)deletePressed;
- (void)downArrowPressed:(id)arg1;
- (void)escapeButtonPressed;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)goBack;
- (void)highlightNextRowAtIndexPath:(id)arg1 upward:(bool)arg2;
- (void)highlightRowAtIndexPath:(id)arg1;
- (id)indexPathForNextSelectableIndexPath:(id)arg1 upward:(bool)arg2;
- (id)indexPathToSelectForKeyboardOnQuickReturn;
- (id)init;
- (id)interactionDelegate;
- (bool)isOnCard;
- (void)keyboardFrameChanged:(id)arg1;
- (void)leftArrowPressed;
- (void)moveCursorToBeginning;
- (void)moveCursorToEnd;
- (void)moveCursorToPosition:(id)arg1;
- (void)returnKeyPressed;
- (void)rightArrowPressed;
- (void)scrollIndexPathToVisible:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)selectAllTextInTextField;
- (void)selectHighlightedRow;
- (void)setAdditionalKeyboardHeight:(double)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCurrentKeyboardHeight:(double)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setShouldHideTableCellsUnderKeyboard:(bool)arg1;
- (void)setTextField:(id)arg1;
- (bool)shouldHideTableCellsUnderKeyboard;
- (void)showKeyboard;
- (id)textField;
- (void)upArrowPressed:(id)arg1;
- (void)viewDidLoad;

@end
