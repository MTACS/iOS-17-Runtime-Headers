
@interface SBIconLegibilityLabelView : SBUILegibilityView <SBIconLabelView> {
    SBIconView * _iconView;
    SBIconLabelImageParameters * _imageParameters;
}

@property (nonatomic) SBIconView *iconView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) SBIconLabelImageParameters *imageParameters;

- (void).cxx_destruct;
- (id)iconView;
- (id)imageParameters;
- (id)initWithSettings:(id)arg1;
- (id)initWithSettings:(id)arg1 legibilityEngine:(id)arg2;
- (void)setIconView:(id)arg1;
- (void)setImageParameters:(id)arg1;
- (void)updateIconLabelWithSettings:(id)arg1 imageParameters:(id)arg2;

@end
