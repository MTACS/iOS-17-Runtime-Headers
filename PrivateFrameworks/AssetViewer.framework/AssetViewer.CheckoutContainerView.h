
@interface AssetViewer.CheckoutContainerView : UIView {
    void applePayButton;
    void ctaButton;
    void parentStackView;
    void rightParentStackViewConstraint;
    void subTitleLabel;
    void tertiaryTitleLabel;
    void titleLabel;
    void traitManager;
    void verticalTextStackView;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UIStackView *verticalTextStackView;

- (void).cxx_destruct;
- (void)contentSizeCategoryDidChangeWithNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)titleLabel;
- (id)verticalTextStackView;

@end
