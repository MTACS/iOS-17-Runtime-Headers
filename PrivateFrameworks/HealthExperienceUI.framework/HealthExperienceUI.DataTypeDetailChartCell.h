
@interface HealthExperienceUI.DataTypeDetailChartCell : UICollectionViewCell <HKChartOverlayVersionProviding> {
    void chartViewController;
    void item;
    void parentViewController;
}

@property (nonatomic, readonly) NSString *chartOverlayVersion;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)chartOverlayVersion;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
