
@interface CAMInterfaceModulationView : UIView {
    unsigned long long  __inFlightAnimationCount;
    CAFilter * __modulationFilter;
    UIView * _hostingView;
    unsigned long long  _interfaceModulation;
}

@property (setter=_setInFlightAnimationCount:, nonatomic) unsigned long long _inFlightAnimationCount;
@property (setter=_setModulationFilter:, nonatomic, retain) CAFilter *_modulationFilter;
@property (nonatomic, readonly) UIView *hostingView;
@property (nonatomic) unsigned long long interfaceModulation;

- (void).cxx_destruct;
- (unsigned long long)_inFlightAnimationCount;
- (id)_keyPathForFilterKey:(id)arg1;
- (id)_modulationFilter;
- (void)_setInFlightAnimationCount:(unsigned long long)arg1;
- (void)_setModulationFilter:(id)arg1;
- (void)_updateModulationLayerEnabled;
- (void)didAddSubview:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hostingView;
- (id)initWithHostingView:(id)arg1;
- (unsigned long long)interfaceModulation;
- (void)modulationAnimationDidStop:(bool)arg1;
- (void)setInterfaceModulation:(unsigned long long)arg1;
- (void)setInterfaceModulation:(unsigned long long)arg1 animated:(bool)arg2;

@end
