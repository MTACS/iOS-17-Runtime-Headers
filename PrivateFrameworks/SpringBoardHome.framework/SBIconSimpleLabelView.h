
@interface SBIconSimpleLabelView : UIImageView <SBIconLabelView> {
    SBIconView * _iconView;
}

@property (nonatomic) SBIconView *iconView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) SBIconLabelImageParameters *imageParameters;

- (void).cxx_destruct;
- (id)iconView;
- (id)imageParameters;
- (id)initWithSettings:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)updateIconLabelWithSettings:(id)arg1 imageParameters:(id)arg2;

@end
