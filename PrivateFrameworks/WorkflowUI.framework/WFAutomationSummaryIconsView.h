
@interface WFAutomationSummaryIconsView : UIView {
    WFRowOfIconsView * _actionsIconsView;
    UIImageView * _arrowImageView;
    HUTriggerIconView * _homeTriggerIconView;
    UIStackView * _stackView;
    UIImageView * _triggerIconView;
}

@property (nonatomic, readonly) WFRowOfIconsView *actionsIconsView;
@property (nonatomic, readonly) UIImageView *arrowImageView;
@property (nonatomic, retain) HUTriggerIconView *homeTriggerIconView;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, retain) UIImageView *triggerIconView;

- (void).cxx_destruct;
- (id)actionsIconsView;
- (id)arrowImageView;
- (void)configureIconView:(id)arg1;
- (id)homeTriggerIconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setActionIcons:(id)arg1;
- (void)setHomeActionIcons:(id)arg1;
- (void)setHomeTriggerIcon:(id)arg1;
- (void)setHomeTriggerIconView:(id)arg1;
- (void)setTriggerIcon:(id)arg1 tintColor:(id)arg2 withCornerRadius:(double)arg3;
- (void)setTriggerIcon:(id)arg1 tintColor:(id)arg2 withTrigger:(id)arg3;
- (void)setTriggerIconView:(id)arg1;
- (id)stackView;
- (id)triggerIconView;

@end
