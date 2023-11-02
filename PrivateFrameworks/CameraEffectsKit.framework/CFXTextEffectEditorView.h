
@interface CFXTextEffectEditorView : UIView <JFXTextEffectEditorTextViewDelegate, UITextDragDelegate, UITextPasteDelegate, UITextViewDelegate> {
    <CFXTextEffectEditorViewDelegate> * _delegate;
    JFXTextEffectEditorView * _editorView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CFXTextEffectEditorViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) JFXTextEffectEditorView *editorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *text;

+ (id)viewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textEditingProperties:(id)arg2;

- (void).cxx_destruct;
- (void)CFX_setupTextField:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applyTextEditingProperties:(id)arg1;
- (id)delegate;
- (id)editorView;
- (void)endTextEditing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textEditingProperties:(id)arg2;
- (void)selectAll;
- (void)selectAtEnd;
- (void)setDelegate:(id)arg1;
- (void)setEditorView:(id)arg1;
- (id)text;
- (id)textDraggableView:(id)arg1 itemsForDrag:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textEditingFrameRelativeToView:(id)arg1;
- (void)textEffectEditorTextViewDidUnmarkText:(id)arg1;
- (bool)textPasteConfigurationSupporting:(id)arg1 shouldAnimatePasteOfAttributedString:(id)arg2 toRange:(id)arg3;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;

@end
