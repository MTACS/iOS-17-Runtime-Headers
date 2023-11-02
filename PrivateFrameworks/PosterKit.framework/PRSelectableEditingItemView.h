
@interface PRSelectableEditingItemView : UIView {
    bool  _selected;
    PREditingPickerShapeView * _selectionView;
}

@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) PREditingPickerShapeView *selectionView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isSelected;
- (id)selectionView;
- (void)setSelected:(bool)arg1;

@end
