
@interface STUIStatusBarDisplayItemPlacementLocationGroup : STUIStatusBarDisplayItemPlacementGroup {
    STUIStatusBarDisplayItemPlacement * _prominentPlacement;
    STUIStatusBarDisplayItemPlacement * _regularPlacement;
}

@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *prominentPlacement;
@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *regularPlacement;

- (void).cxx_destruct;
- (id)prominentPlacement;
- (id)regularPlacement;
- (void)setProminentPlacement:(id)arg1;
- (void)setRegularPlacement:(id)arg1;

@end
