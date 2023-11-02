
@interface _UIStatusBarDisplayItemPlacementWifiGroup : _UIStatusBarDisplayItemPlacementGroup {
    _UIStatusBarDisplayItemPlacement * _iconPlacement;
    _UIStatusBarDisplayItemPlacement * _rawPlacement;
    _UIStatusBarDisplayItemPlacement * _signalStrengthPlacement;
}

@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *iconPlacement;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *rawPlacement;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *signalStrengthPlacement;

- (void).cxx_destruct;
- (id)iconPlacement;
- (id)rawPlacement;
- (void)setIconPlacement:(id)arg1;
- (void)setRawPlacement:(id)arg1;
- (void)setSignalStrengthPlacement:(id)arg1;
- (id)signalStrengthPlacement;

@end
