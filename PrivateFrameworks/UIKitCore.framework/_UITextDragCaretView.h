
@interface _UITextDragCaretView : UIView {
    CAShapeLayer * _mask;
    bool  _rangesExcludeSelection;
    UIView<UITextInput> * _view;
}

@property (nonatomic) bool rangesExcludeSelection;

- (void).cxx_destruct;
- (id)_caretColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_configureMask:(id)arg1 withPath:(id)arg2;
- (void)_insertAtRangeOrPosition:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3 animated:(bool)arg4;
- (bool)_isRemoveAnimatesBackToCaret;
- (id)_maskForRects:(id)arg1;
- (void)_performUpdate:(id)arg1;
- (id)_rangeColor;
- (id)_rectsForRange:(id)arg1;
- (void)_updateToRangeOrPosition:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3 animated:(bool)arg4;
- (id)initWithTextInputView:(id)arg1;
- (void)insertAtPosition:(id)arg1;
- (void)insertAtPosition:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)insertAtRange:(id)arg1;
- (void)insertAtRange:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)insertAtRange:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3 animated:(bool)arg4;
- (bool)rangesExcludeSelection;
- (void)remove;
- (void)removeWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)removeWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2 animated:(bool)arg3;
- (void)setRangesExcludeSelection:(bool)arg1;
- (void)updateToPosition:(id)arg1;
- (void)updateToPosition:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)updateToRange:(id)arg1;
- (void)updateToRange:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)updateToRange:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3 animated:(bool)arg4;

@end
