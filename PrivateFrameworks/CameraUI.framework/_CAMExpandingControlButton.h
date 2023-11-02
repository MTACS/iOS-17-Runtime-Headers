
@interface _CAMExpandingControlButton : UIControl <CAMViewOrientable> {
    struct CGSize { 
        double width; 
        double height; 
    }  __intrinsicLabelSize;
    CAMSlashContainer * __titleContentView;
    UIImageView * __titleImageView;
    UILabel * __titleLabel;
    UIFont * _titleFont;
    UIImage * _titleImage;
    NSString * _titleText;
}

@property (setter=_setIntrinsicLabelSize:, nonatomic) struct CGSize { double x1; double x2; } _intrinsicLabelSize;
@property (nonatomic, readonly) CAMSlashContainer *_titleContentView;
@property (setter=_setTitleImageView:, nonatomic, retain) UIImageView *_titleImageView;
@property (setter=_setTitleLabel:, nonatomic, retain) UILabel *_titleLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGSize { double x1; double x2; } slashSize;
@property (getter=isSlashed, nonatomic) bool slashed;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIFont *titleFont;
@property (nonatomic) UIImage *titleImage;
@property (nonatomic, retain) NSString *titleText;

- (void).cxx_destruct;
- (id)_attributedTextForTitle:(id)arg1;
- (id)_effectiveSubtitleFont;
- (id)_effectiveTitleFont;
- (struct CGSize { double x1; double x2; })_intrinsicLabelSize;
- (void)_setIntrinsicLabelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setTitleImageView:(id)arg1;
- (void)_setTitleLabel:(id)arg1;
- (id)_titleContentView;
- (id)_titleImageView;
- (id)_titleLabel;
- (void)_updateTitleImageView;
- (void)_updateTitleLabel;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isSlashed;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setHighlighted:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setSlashSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSlashed:(bool)arg1;
- (void)setSlashed:(bool)arg1 animated:(bool)arg2;
- (void)setTitleImage:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleText:(id)arg1 font:(id)arg2;
- (struct CGSize { double x1; double x2; })slashSize;
- (void)tintColorDidChange;
- (id)titleFont;
- (id)titleImage;
- (id)titleText;

@end
