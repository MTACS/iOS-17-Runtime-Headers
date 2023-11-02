
@interface CAMSlashContainer : UIView <CAMViewOrientable> {
    CAMSlashMaskView * __slashMaskView;
    CAMSlashView * __slashView;
    UIView * _contentView;
    long long  _orientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _slashSize;
    bool  _slashed;
}

@property (setter=_setSlashMaskView:, nonatomic, retain) CAMSlashMaskView *_slashMaskView;
@property (setter=_setSlashView:, nonatomic, retain) CAMSlashView *_slashView;
@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGSize { double x1; double x2; } slashSize;
@property (getter=isSlashed, nonatomic) bool slashed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setSlashMaskView:(id)arg1;
- (void)_setSlashView:(id)arg1;
- (id)_slashMaskView;
- (id)_slashView;
- (void)_updateOrientationAnimated:(bool)arg1;
- (void)_updateSlashAnimated:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isSlashed;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setContentView:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setSlashSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSlashed:(bool)arg1;
- (void)setSlashed:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })slashSize;

@end
