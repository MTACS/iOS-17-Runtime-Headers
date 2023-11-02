
@interface CAMControlDrawerButton : UIControl <CAMAccessibilityHUDItemProvider> {
    UIImageView * __backgroundView;
    UIImageView * __imageView;
    CAMSlashMaskView * __slashMaskView;
    CAMSlashView * __slashView;
    long long  _layoutStyle;
    long long  _orientation;
}

@property (nonatomic, readonly) UIImageView *_backgroundView;
@property (nonatomic, readonly) UIImageView *_imageView;
@property (nonatomic, readonly) CAMSlashMaskView *_slashMaskView;
@property (nonatomic, readonly) CAMSlashView *_slashView;
@property (nonatomic, readonly) long long controlType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExpandable, nonatomic, readonly) bool expandable;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long orientation;
@property (readonly) Class superclass;

+ (id)_backgroundImage;
+ (struct CGSize { double x1; double x2; })buttonSize;

- (void).cxx_destruct;
- (id)_backgroundView;
- (id)_imageForImageName:(id)arg1;
- (id)_imageView;
- (id)_slashMaskView;
- (id)_slashView;
- (void)_updateSlashAnimated:(bool)arg1;
- (long long)controlType;
- (void)didChangeContentSize;
- (void)handleButtonReleased:(id)arg1;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (id)imageSymbolColorConfiguration;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isExpandable;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (long long)orientation;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (bool)shouldScaleImageWhileHighlighted;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseSlash;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateImage;
- (void)updateImageAnimated:(bool)arg1;

@end
