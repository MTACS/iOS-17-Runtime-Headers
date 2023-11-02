
@interface PUPhotoEditAdjustmentCell : PUPhotoEditBaseAdjustmentCell {
    <PUPhotoEditBaseAdjustmentCellDelegate> * _delegate;
    bool  _shouldDisplayValueLabel;
}

@property (nonatomic) <PUPhotoEditBaseAdjustmentCellDelegate> *delegate;
@property (nonatomic) bool displayMappedValue;
@property (nonatomic) bool shouldDisplayValueLabel;

- (void).cxx_destruct;
- (void)_setupEventHandler;
- (void)_updateValueLabelVisibility;
- (id)delegate;
- (bool)displayMappedValue;
- (void)handleButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)reloadImage;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMappedValue:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImageIsColor:(bool)arg1;
- (void)setImageName:(id)arg1;
- (void)setIsUserModifying:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShouldDisplayValueLabel:(bool)arg1;
- (bool)shouldDisplayValueLabel;

@end
