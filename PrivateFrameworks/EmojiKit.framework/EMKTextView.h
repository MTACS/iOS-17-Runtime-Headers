
@interface EMKTextView : UITextView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _displayRect;
    bool  _emojiConversionActive;
    EMFEmojiPreferences * _emojiPreferences;
    EMKGestureRecognizerDelegate * _gestureRecognizerDelegate;
    EMKOverlayView * _overlayView;
    unsigned long long  _tappedGlyphIndex;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _tappedGlyphRange;
    _EMKTextKit2Controller * _textKit2Controller;
    NSTimer * _timer;
}

@property (getter=isEmojiConversionEnabled) bool emojiConversionEnabled;
@property (retain) EMFEmojiPreferences *emojiPreferences;
@property (retain) EMKGestureRecognizerDelegate *gestureRecognizerDelegate;
@property (nonatomic, retain) UIView *textContainerOverlayView;

+ (void)__emk_setNeedsDisplayCurrentRenderAttributesForView:(id)arg1;

- (void).cxx_destruct;
- (void)_emk_addRenderingAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3;
- (void)_emk_removeRenderingAttribute:(id)arg1 forTextRange:(id)arg2;
- (void)_emk_setNeedsDisplayCurrentRenderAttributes;
- (void)_setTokenListsHidden_emk:(bool)arg1;
- (void)_setTokenListsHighlighted_emk:(bool)arg1 rippler:(id)arg2;
- (bool)_shouldSuppressSelectionCommands;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })anchorRect;
- (void)calculateDisplayRect;
- (void)dealloc;
- (void)deleteBackward;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)dismissOverlayView;
- (id)emojiPreferences;
- (void)emojifyingDisabled:(id)arg1;
- (id)gestureRecognizerDelegate;
- (id)init;
- (id)initUsingTextLayoutManagerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initUsingTextLayoutManagerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)inputModeDidChange:(id)arg1;
- (bool)isEmojiConversionEnabled;
- (void)keyboardDidShow:(id)arg1;
- (void)layoutSubviews;
- (id)personalizedEmojiTokenListForList:(id)arg1;
- (void)replaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withEmojiToken:(id)arg2 language:(id)arg3;
- (void)setDelayFrames:(unsigned long long)arg1;
- (void)setEmojiConversionEnabled:(bool)arg1;
- (void)setEmojiConversionLanguagesAndActivateConversion:(bool)arg1;
- (void)setEmojiConversionLanguagesForInputModeChange:(id)arg1;
- (void)setEmojiConversionLanguagesForKeyboardShow:(id)arg1;
- (void)setEmojiPreferences:(id)arg1;
- (void)setGestureRecognizerDelegate:(id)arg1;
- (void)setPostFrames:(unsigned long long)arg1;
- (void)setPreFrames:(unsigned long long)arg1;
- (void)setTextContainerOverlayView:(id)arg1;
- (void)setupLayoutManagerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)startTimer:(id)arg1;
- (void)stopTimer:(id)arg1;
- (id)textContainerOverlayView;
- (void)textTapGestureRecognized:(id)arg1;
- (bool)touchHasEmojiSignificance:(id)arg1;
- (void)updateEmojiDisplay:(id)arg1;
- (void)updateOverlayView:(id)arg1;

@end
