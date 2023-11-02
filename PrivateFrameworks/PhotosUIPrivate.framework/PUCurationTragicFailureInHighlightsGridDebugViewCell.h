
@interface PUCurationTragicFailureInHighlightsGridDebugViewCell : PUPhotosGridCell {
    unsigned long long  _utilityTypes;
    UILabel * _utilityTypesLabel;
    UILabel * _visibleLabel;
}

@property (nonatomic) unsigned long long utilityTypes;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setUtilityTypes:(unsigned long long)arg1;
- (unsigned long long)utilityTypes;

@end
