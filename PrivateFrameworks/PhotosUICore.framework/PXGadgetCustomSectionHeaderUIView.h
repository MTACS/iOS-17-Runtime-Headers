
@interface PXGadgetCustomSectionHeaderUIView : PXGadgetSectionHeaderUIView {
    UILabel * _appleInternalLabel;
    UIImageView * _iconImageView;
    UILabel * _iconTitleLabel;
    UIButton * _infoButton;
}

@property (nonatomic, retain) UILabel *appleInternalLabel;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) UILabel *iconTitleLabel;
@property (nonatomic, retain) UIButton *infoButton;

+ (id)_appleInternalLabelText;
+ (double)_preferredHeightOfAppleInternalTextWithWidth:(double)arg1;
+ (double)preferredHeightForText:(id)arg1 buttonType:(unsigned long long)arg2 fittingWidth:(double)arg3 style:(unsigned long long)arg4 dividerHidden:(bool)arg5 isAccessibilitySize:(bool)arg6;

- (void).cxx_destruct;
- (void)_infoButtonSelected;
- (id)appleInternalLabel;
- (void)configureTitleLabel:(id)arg1;
- (id)iconImageView;
- (id)iconTitleLabel;
- (id)infoButton;
- (void)layoutSubviews;
- (void)setAppleInternalLabel:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setIconTitleLabel:(id)arg1;
- (void)setInfoButton:(id)arg1;

@end
