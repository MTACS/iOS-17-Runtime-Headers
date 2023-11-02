
@interface PaperKit.TextBoxTextView : UITextView {
    void formAutofillDelegate;
    void textBoxView;
}

@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) bool supportsImagePaste;
@property (nonatomic, readonly) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (void)handleBackTabWithSender:(id)arg1;
- (void)handleTabWithSender:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)insertTextSuggestion:(id)arg1;
- (id)keyCommands;
- (bool)supportsImagePaste;
- (id)undoManager;

@end
