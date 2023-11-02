
@interface WFAutomationNotificationContentView : UIView {
    WFRowOfIconsView * _actionIconsView;
    UILabel * _descriptionLabel;
    UIStackView * _stackView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) WFRowOfIconsView *actionIconsView;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)actionIconsView;
- (id)descriptionLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)stackView;
- (id)titleLabel;
- (void)updateUIFromNotification:(id)arg1;

@end
