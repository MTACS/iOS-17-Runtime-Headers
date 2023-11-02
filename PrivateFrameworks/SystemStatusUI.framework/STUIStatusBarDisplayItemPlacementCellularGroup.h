
@interface STUIStatusBarDisplayItemPlacementCellularGroup : STUIStatusBarDisplayItemPlacementGroup {
    STUIStatusBarDisplayItemPlacement * _badgePlacement;
    STUIStatusBarDisplayItemPlacement * _callForwardingPlacement;
    STUIStatusBarDisplayItemPlacement * _dualNameAndTypePlacement;
    STUIStatusBarDisplayItemPlacement * _dualNamePlacement;
    STUIStatusBarDisplayItemPlacement * _dualSignalStrengthPlacement;
    STUIStatusBarDisplayItemPlacement * _namePlacement;
    NSArray * _placementsAffectedByAirplaneMode;
    STUIStatusBarDisplayItemPlacement * _rawPlacement;
    STUIStatusBarDisplayItemPlacement * _signalStrengthPlacement;
    STUIStatusBarDisplayItemPlacement * _typePlacement;
    STUIStatusBarDisplayItemPlacement * _warningPlacement;
}

@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *badgePlacement;
@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *callForwardingPlacement;
@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *dualNameAndTypePlacement;
@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *dualNamePlacement;
@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *dualSignalStrengthPlacement;
@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *namePlacement;
@property (nonatomic, retain) NSArray *placementsAffectedByAirplaneMode;
@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *rawPlacement;
@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *signalStrengthPlacement;
@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *typePlacement;
@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *warningPlacement;

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
