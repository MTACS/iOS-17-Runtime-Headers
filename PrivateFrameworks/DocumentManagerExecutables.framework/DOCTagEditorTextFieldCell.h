
@interface DOCTagEditorTextFieldCell : UICollectionViewCell {
    DOCAddTagView * _addTagView;
    <DOCTagPickerCellAppearanceProviding> * _appearance;
}

@property (nonatomic, readonly) DOCAddTagView *addTagView;

- (void).cxx_destruct;
- (id)addTagView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateHoverEffects;

@end
