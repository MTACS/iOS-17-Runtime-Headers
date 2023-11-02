
@interface STUIStatusBarDisplayItemPlacementWifiGroup : STUIStatusBarDisplayItemPlacementGroup {
    STUIStatusBarDisplayItemPlacement * _iconPlacement;
    STUIStatusBarDisplayItemPlacement * _rawPlacement;
    STUIStatusBarDisplayItemPlacement * _signalStrengthPlacement;
}

@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *iconPlacement;
@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *rawPlacement;
@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *signalStrengthPlacement;

- (void).cxx_destruct;
- (id)iconPlacement;
- (id)rawPlacement;
- (void)setIconPlacement:(id)arg1;
- (void)setRawPlacement:(id)arg1;
- (void)setSignalStrengthPlacement:(id)arg1;
- (id)signalStrengthPlacement;

@end
