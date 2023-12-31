
@interface TVRMaterialView : UIView {
    MTMaterialView * _materialView;
}

@property (nonatomic) double weighting;

+ (id)backgroundMaterialViewWithWeighting:(double)arg1;
+ (id)seperatorMaterialView;
+ (id)trackpadMaterialView;

- (void).cxx_destruct;
- (id)initWithDarkMaterialView;
- (id)initWithMaterialView:(id)arg1;
- (void)layoutSubviews;
- (void)setWeighting:(double)arg1;
- (double)weighting;

@end
