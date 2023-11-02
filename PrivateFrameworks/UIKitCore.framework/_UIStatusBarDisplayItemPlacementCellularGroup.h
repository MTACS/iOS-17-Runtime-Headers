
@interface _UIStatusBarDisplayItemPlacementCellularGroup : _UIStatusBarDisplayItemPlacementGroup {
    _UIStatusBarDisplayItemPlacement * _badgePlacement;
    _UIStatusBarDisplayItemPlacement * _callForwardingPlacement;
    _UIStatusBarDisplayItemPlacement * _dualNameAndTypePlacement;
    _UIStatusBarDisplayItemPlacement * _dualNamePlacement;
    _UIStatusBarDisplayItemPlacement * _dualSignalStrengthPlacement;
    _UIStatusBarDisplayItemPlacement * _namePlacement;
    NSArray * _placementsAffectedByAirplaneMode;
    _UIStatusBarDisplayItemPlacement * _rawPlacement;
    _UIStatusBarDisplayItemPlacement * _signalStrengthPlacement;
    _UIStatusBarDisplayItemPlacement * _typePlacement;
    _UIStatusBarDisplayItemPlacement * _warningPlacement;
}

@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *badgePlacement;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *callForwardingPlacement;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *dualNameAndTypePlacement;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *dualNamePlacement;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *dualSignalStrengthPlacement;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *namePlacement;
@property (nonatomic, retain) NSArray *placementsAffectedByAirplaneMode;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *rawPlacement;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *signalStrengthPlacement;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *typePlacement;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *warningPlacement;

- (void).cxx_destruct;
- (id)badgePlacement;
- (id)callForwardingPlacement;
- (id)dualNameAndTypePlacement;
- (id)dualNamePlacement;
- (id)dualSignalStrengthPlacement;
- (id)namePlacement;
- (id)placementsAffectedByAirplaneMode;
- (id)rawPlacement;
- (void)setBadgePlacement:(id)arg1;
- (void)setCallForwardingPlacement:(id)arg1;
- (void)setDualNameAndTypePlacement:(id)arg1;
- (void)setDualNamePlacement:(id)arg1;
- (void)setDualSignalStrengthPlacement:(id)arg1;
- (void)setNamePlacement:(id)arg1;
- (void)setPlacementsAffectedByAirplaneMode:(id)arg1;
- (void)setRawPlacement:(id)arg1;
- (void)setSignalStrengthPlacement:(id)arg1;
- (void)setTypePlacement:(id)arg1;
- (void)setWarningPlacement:(id)arg1;
- (id)signalStrengthPlacement;
- (id)typePlacement;
- (id)warningPlacement;

@end
