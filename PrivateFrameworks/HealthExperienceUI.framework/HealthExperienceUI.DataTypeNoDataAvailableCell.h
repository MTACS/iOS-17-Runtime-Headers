
@interface HealthExperienceUI.DataTypeNoDataAvailableCell : UICollectionViewListCell {
    void baseIdentifier;
    void disclosure;
    void item;
    void mainTextLabel;
}

@property (nonatomic) bool highlighted;
@property (nonatomic) bool selected;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
