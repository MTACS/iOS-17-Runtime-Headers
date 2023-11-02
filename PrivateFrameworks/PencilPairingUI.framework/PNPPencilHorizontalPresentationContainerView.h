
@interface PNPPencilHorizontalPresentationContainerView : UIView <PNPChargingStatusViewHosting, PNPDeviceStateConfigurable> {
    PNPChargingStatusView * _chargingStatusView;
    PNPDeviceState * _deviceState;
    PNPPencilView * _pencilView;
    bool  _showsChargingStatusView;
}

@property (nonatomic, retain) PNPChargingStatusView *chargingStatusView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) PNPDeviceState *deviceState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PNPPencilView *pencilView;
@property (nonatomic) bool showsChargingStatusView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)chargingStatusView;
- (id)deviceState;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)pencilView;
- (void)setChargingStatusView:(id)arg1;
- (void)setDeviceState:(id)arg1;
- (void)setPencilView:(id)arg1;
- (void)setShowsChargingStatusView:(bool)arg1;
- (bool)showsChargingStatusView;

@end
