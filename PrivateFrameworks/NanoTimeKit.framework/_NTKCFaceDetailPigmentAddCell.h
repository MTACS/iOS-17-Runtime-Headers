
@interface _NTKCFaceDetailPigmentAddCell : _NTKCFaceDetailCollectionCell {
    UIButton * _button;
    <_NTKCFaceDetailPigmentAddCellDelegate> * _delegate;
}

@property (nonatomic) <_NTKCFaceDetailPigmentAddCellDelegate> *delegate;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_tapped;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setActive:(bool)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;

@end
