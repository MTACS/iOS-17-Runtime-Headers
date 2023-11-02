
@interface UIWKTextInteractionAssistant : UITextInteractionAssistant <UIResponderStandardEditActions> {
    <UITextCursorAssertion> * _blinkAssertion;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _caretBeforeTap;
    _UITextServiceSession * _definitionSession;
    bool  _hadCaretSelectionBeforeTap;
    _UITextServiceSession * _learnSession;
    _UITextServiceSession * _lookupSession;
    unsigned long long  _options;
    long long  _selectionOperation;
    _UITextServiceSession * _shareSession;
    bool  _shouldDelayActivatingSelectionView;
    UITextChecker * _textChecker;
    _UITextServiceSession * _translateSession;
    NSString * _wordBeforeTap;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } caretBeforeTap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILongPressGestureRecognizer *forcePressGesture;
@property (nonatomic) bool hadCaretSelectionBeforeTap;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UILongPressGestureRecognizer *loupeGesture;
@property (nonatomic) bool shouldDelayActivatingSelectionView;
@property (nonatomic, readonly) UITapGestureRecognizer *singleTapGesture;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *wordBeforeTap;

- (id)_asText;
- (void)addGestureRecognizersToView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretBeforeTap;
- (bool)containerAllowsSelection;
- (bool)containerAllowsSelectionTintOnly;
- (bool)containerIsAtom;
- (bool)containerIsBrowserView;
- (long long)currentCursorBehavior;
- (void)dealloc;
- (void)didEndScrollingOverflow;
- (id)generatorForRange:(id)arg1 withOptions:(unsigned long long)arg2;
- (bool)hadCaretSelectionBeforeTap;
- (void)hideTextStyleOptions;
- (id)initWithView:(id)arg1;
- (void)lookup:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)lookup:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)overrideGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)overrideGestureRecognizerShouldBegin:(id)arg1;
- (void)rangeSelectionCanceled;
- (void)rangeSelectionEnded:(struct CGPoint { double x1; double x2; })arg1;
- (void)rangeSelectionMoved:(struct CGPoint { double x1; double x2; })arg1 withTouchPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)rangeSelectionStarted:(struct CGPoint { double x1; double x2; })arg1;
- (bool)requiresImmediateUpdate;
- (void)scheduleChineseTransliterationForText:(id)arg1;
- (void)scheduleReplacementsForText:(id)arg1;
- (void)scheduleReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)scheduleReplacementsWithOptions:(unsigned long long)arg1;
- (void)scrollSelectionToVisible:(bool)arg1;
- (void)selectAll:(id)arg1;
- (void)selectTextForReplacement:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)selectWord;
- (void)selectionChanged;
- (void)selectionChangedWithGestureAt:(struct CGPoint { double x1; double x2; })arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4;
- (void)selectionChangedWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (Class)selectionInteractionClass;
- (void)setCaretBeforeTap:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHadCaretSelectionBeforeTap:(bool)arg1;
- (void)setShouldDelayActivatingSelectionView:(bool)arg1;
- (void)setWordBeforeTap:(id)arg1;
- (bool)shouldDelayActivatingSelectionView;
- (bool)shouldSuppressSelectionCommands;
- (bool)shouldTryReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)showDictionaryFor:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)showReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)showReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 rects:(id)arg3;
- (void)showSelectionView;
- (void)showShareSheetFor:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)showTextServiceFor:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)showTextStyleOptions;
- (id)textChecker;
- (void)textRangeAdjustmentInteraction:(id)arg1 didBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)textRangeAdjustmentInteraction:(id)arg1 didEndAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)textRangeAdjustmentInteraction:(id)arg1 selectionMoved:(struct CGPoint { double x1; double x2; })arg2 withTouchPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)textRangeAdjustmentInteractionWasCancelled:(id)arg1;
- (void)translate:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)updateActivatingSelectionView;
- (void)updateSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateWithMagnifierTerminalPoint:(bool)arg1;
- (bool)usesAsynchronousSelectionController;
- (bool)wantsLinkInteraction;
- (void)willChangeSelection;
- (void)willStartScrollingOverflow;
- (id)wordBeforeTap;

@end
