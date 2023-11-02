
@interface PRXOptionCollectionViewCell : UICollectionViewCell {
    PRXSelectionIndicatorView * _selectionIndicator;
    UILabel * _textLabel;
}

@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelected:(bool)arg1;
- (id)textLabel;

@end
