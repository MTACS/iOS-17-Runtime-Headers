
@interface _UIFluidSliderDiscreteVolumeButtonDriver : _UIFluidSliderDiscreteButtonDriver <_UIFluidSliderVolumeButtonDriving, _UIPhysicalButtonInteractionDelegate> {
    unsigned long long  __pressedButton;
    _UIPhysicalButtonInteraction * _physicalButtonInteraction;
}

@property (nonatomic) unsigned long long _pressedButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <_UIFluidSliderDrivable> *drivable;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) _UIPhysicalButtonInteraction *physicalButtonInteraction;
@property (nonatomic) double stretchAmount;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long trackAxis;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_beginWithButton:(unsigned long long)arg1;
- (void)_end;
- (void)_physicalButtonInteraction:(id)arg1 handleAction:(id)arg2 withActiveActions:(id)arg3;
- (unsigned long long)_pressedButton;
- (void)cancel;
- (id)name;
- (id)physicalButtonInteraction;
- (void)setEnabled:(bool)arg1;
- (void)setView:(id)arg1;
- (void)set_pressedButton:(unsigned long long)arg1;

@end
