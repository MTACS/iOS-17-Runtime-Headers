
@interface ActionButtonConfigurationUI.ActionDetailsView : UIView <ABActionSelectorContent> {
    void actions;
    void cancellableBag;
    void configureButton;
    void configureButtonViewModel;
    void emptyStateConfigureButton;
    void emptyStateConfigureButtonViewModel;
    void initialIndex;
    void pageControl;
    void primaryButton;
    void primaryButtonViewModel;
    void selectionHandler;
    void stackView;
    void stackViewScrollContainer;
    void subtitleLabel;
    void titleLabel;
}

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)pageControlValueChanged;

@end
