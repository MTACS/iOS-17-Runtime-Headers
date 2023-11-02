
@interface HUQuickControlIconView : UIView <HUQuickControlInteractiveView> {
    HUIconView * _iconView;
    <HUQuickControlViewInteractionDelegate> * _interactionDelegate;
    HUQuickControlIconViewProfile * _profile;
    unsigned long long  _reachabilityState;
    UILabel * _statusLabel;
    UILabel * _supplementaryLabel;
    bool  _userInteractionActive;
    id  _viewValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUIconView *iconView;
@property (nonatomic) <HUQuickControlViewInteractionDelegate> *interactionDelegate;
@property (nonatomic, copy) HUQuickControlIconViewProfile *profile;
@property (nonatomic) unsigned long long reachabilityState;
@property (nonatomic, retain) id secondaryValue;
@property (nonatomic, retain) UILabel *statusLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *supplementaryLabel;
@property (getter=isUserInteractionActive, nonatomic) bool userInteractionActive;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) id viewValue;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_getLabelsContainingRect;
- (double)_iconAndLabelsHeight;
- (void)_updateLabelFramesOrigins;
- (void)_updateLabelSizes;
- (void)_updateLayout;
- (void)_updateUI;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)iconView;
- (id)initWithProfile:(id)arg1;
- (id)interactionDelegate;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (bool)isUserInteractionActive;
- (void)layoutSubviews;
- (id)profile;
- (unsigned long long)reachabilityState;
- (void)setIconView:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setReachabilityState:(unsigned long long)arg1;
- (void)setStatusLabel:(id)arg1;
- (void)setSupplementaryLabel:(id)arg1;
- (void)setUserInteractionActive:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setViewValue:(id)arg1;
- (id)statusLabel;
- (id)supplementaryLabel;
- (id)value;
- (id)viewValue;

@end
