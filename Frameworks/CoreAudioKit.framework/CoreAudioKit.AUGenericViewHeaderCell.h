
@interface CoreAudioKit.AUGenericViewHeaderCell : UICollectionViewCell {
    void auManufacturerLabel;
    void auNameLabel;
    void auVersionLabel;
    void audioUnit;
}

@property (nonatomic) UILabel *auManufacturerLabel;
@property (nonatomic) UILabel *auNameLabel;
@property (nonatomic) UILabel *auVersionLabel;

- (void).cxx_destruct;
- (id)auManufacturerLabel;
- (id)auNameLabel;
- (id)auVersionLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAuManufacturerLabel:(id)arg1;
- (void)setAuNameLabel:(id)arg1;
- (void)setAuVersionLabel:(id)arg1;

@end
