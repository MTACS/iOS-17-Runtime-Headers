
@interface GKDashboardShowMoreTextCell : GKRectShadowCell {
    UILabel * _label;
}

@property (nonatomic) UILabel *label;

+ (struct CGSize { double x1; double x2; })defaultSize;

- (void)awakeFromNib;
- (id)label;
- (void)setLabel:(id)arg1;

@end
