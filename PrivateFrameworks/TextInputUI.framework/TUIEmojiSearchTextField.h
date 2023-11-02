
@interface TUIEmojiSearchTextField : UITextField <UITextFieldDelegate> {
    bool  _active;
    TUIEmojiSearchTextFieldBackgroundView * _backgroundView;
    NSDate * _highlightBeginTime;
    UIImageView * _magnifyingGlassView;
    TUIEmojiSearchTextFieldPortalView * _portalView;
    bool  _pretendsToBecomeFirstResponder;
    <TUIEmojiSearchTextFieldDelegate> * _searchDelegate;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool pretendsToBecomeFirstResponder;
@property (nonatomic) <TUIEmojiSearchTextFieldDelegate> *searchDelegate;
@property (readonly) Class superclass;

+ (double)preferredHeight;

- (void).cxx_destruct;
- (id)_clearButton;
- (bool)_isInteractiveDespiteResponderStatus;
- (void)_matchPortalViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setCursorVisibleAndBlinks:(bool)arg1;
- (void)_setRenderConfig:(id)arg1;
- (id)_textAndGlyphColorForRenderConfig:(id)arg1;
- (id)_textAndGlyphCompositingFilterForRenderConfig:(id)arg1;
- (void)_windowBecameKeyNotificationPosted:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)didMoveToWindow;
- (void)fieldEditorDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pretendsToBecomeFirstResponder:(bool)arg2;
- (id)insertionPointColor;
- (bool)isActive;
- (bool)isEditing;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)paste:(id)arg1;
- (id)portalView;
- (bool)pretendsToBecomeFirstResponder;
- (bool)resignFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)searchDelegate;
- (id)selectionContainerView;
- (void)setActive:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSearchDelegate:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)validateCommand:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
