
@protocol HUQuickControlContentHosting <NSObject>

@required

- (void)quickControlContent:(id <HUQuickControlInteractiveContentContaining>)arg1 requestDismissalOfType:(unsigned long long)arg2;
- (void)quickControlContentDidUpdateDesiredVisbilityState:(id <HUQuickControlInteractiveContentContaining>)arg1;

@optional

- (void)hideAuxiliaryViewForQuickControlContent:(id <HUQuickControlInteractiveContentContaining>)arg1;
- (void)quickControlContent:(id <HUQuickControlInteractiveContentContaining>)arg1 showAuxiliaryView:(UIView<HUQuickControlAuxiliaryView> *)arg2;

@end
