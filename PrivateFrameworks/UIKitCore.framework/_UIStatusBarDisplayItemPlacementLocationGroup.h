
@interface _UIStatusBarDisplayItemPlacementLocationGroup : _UIStatusBarDisplayItemPlacementGroup {
    _UIStatusBarDisplayItemPlacement * _prominentPlacement;
    _UIStatusBarDisplayItemPlacement * _regularPlacement;
}

@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *prominentPlacement;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *regularPlacement;

- (void).cxx_destruct;
- (id)prominentPlacement;
- (id)regularPlacement;
- (void)setProminentPlacement:(id)arg1;
- (void)setRegularPlacement:(id)arg1;

@end
