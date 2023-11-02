
@interface HUISoundMeterViewInterface : NSObject <HUISoundMeterListenerDelegate> {
    <HUISoundMeterViewInterfaceDelegate> * _delegate;
    HUISoundMeterListener * _meteringListener;
    HUISoundMeterViewInterfaceInternal * _soundMeterViewInterfaceInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUISoundMeterViewInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUISoundMeterListener *meteringListener;
@property (nonatomic, retain) HUISoundMeterViewInterfaceInternal *soundMeterViewInterfaceInternal;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithConfigurationType:(unsigned long long)arg1 delegate:(id)arg2 source:(unsigned long long)arg3;
- (void)liveLevelMeteringDisplayStateChanged:(bool)arg1;
- (void)localSourceAvailableDidUpdate:(bool)arg1;
- (id)meteringListener;
- (void)remoteSourceAvailableDidUpdate:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMeteringListener:(id)arg1;
- (void)setSoundMeterViewInterfaceInternal:(id)arg1;
- (bool)shouldShow;
- (id)soundMeterView;
- (id)soundMeterViewController;
- (id)soundMeterViewInterfaceInternal;
- (void)start;
- (void)stop;
- (void)updateViewsWith:(double)arg1 fastLeq:(double)arg2 thresholdLevel:(unsigned long long)arg3;

@end
