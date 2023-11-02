
@interface SBRootDodgingLayerModifier : SBDodgingModifier {
    bool  _hasPerformedInitialSetup;
}

@property (nonatomic) bool hasPerformedInitialSetup;

- (id)_floorModifier;
- (void)_setup;
- (void)didMoveToParentModifier:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handlePreferenceChangeEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleRotationEvent:(id)arg1;
- (bool)hasPerformedInitialSetup;
- (void)setDelegate:(id)arg1;
- (void)setHasPerformedInitialSetup:(bool)arg1;

@end
