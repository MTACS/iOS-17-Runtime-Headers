
@interface JFXTextEffectEditorView : UIView <UIIndirectScribbleInteractionDelegate> {
    JFXOverlayEffectDebugViewOptions * _debugOptions;
    UIView * _debugView;
    JFXTextEffectEditorTextView * _editField;
    NSUUID * _pencilTextEditingElementID;
    JFXEffectTextEditingProperties * _textEditingProperties;
    UIView * _transformView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) JFXOverlayEffectDebugViewOptions *debugOptions;
@property (nonatomic, retain) UIView *debugView;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) JFXTextEffectEditorTextView *editField;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *pencilTextEditingElementID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, retain) JFXEffectTextEditingProperties *textEditingProperties;
@property (nonatomic, retain) UIView *transformView;

- (void).cxx_destruct;
- (void)applyTextEditingProperties:(id)arg1;
- (id)debugOptions;
- (id)debugView;
- (id)editField;
- (void)endEditing;
- (void)indirectScribbleInteraction:(id)arg1 focusElementIfNeeded:(id)arg2 referencePoint:(struct CGPoint { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })indirectScribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (bool)indirectScribbleInteraction:(id)arg1 isElementFocused:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textEditingProperties:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textEditingProperties:(id)arg2 textContainer:(id)arg3;
- (id)pencilTextEditingElementID;
- (void)selectAll;
- (void)setDebugOptions:(id)arg1;
- (void)setDebugView:(id)arg1;
- (void)setEditField:(id)arg1;
- (void)setPencilTextEditingElementID:(id)arg1;
- (void)setTextEditingProperties:(id)arg1;
- (void)setTransformView:(id)arg1;
- (id)text;
- (id)textEditingProperties;
- (id)transformView;

@end
