
@interface PUPhotoEditAutoAdjustmentCell : PUPhotoEditBaseAdjustmentCell {
    <PUPhotoEditBaseAdjustmentCellDelegate> * _delegate;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic) <PUPhotoEditBaseAdjustmentCellDelegate> *delegate;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (void)_configureContainerButton;
- (id)delegate;
- (void)handleButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)performPrimaryAction;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImageName:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)tapGestureRecognizer;

@end
