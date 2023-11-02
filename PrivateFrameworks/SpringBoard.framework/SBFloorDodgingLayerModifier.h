
@interface SBFloorDodgingLayerModifier : SBDodgingModifier {
    SBDodgingModel * _overridingModel;
}

@property (nonatomic, retain) SBDodgingModel *overridingModel;

- (void).cxx_destruct;
- (id)_framesForIdentifiersInModel:(id)arg1;
- (id)_identifierIfAnyIllegallyClippingOtherIdentifiers:(id)arg1 model:(id)arg2 intersectionSize:(out struct CGSize { double x1; double x2; }*)arg3 intersectingFrame:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (id)_identifierIfAnyIllegallyOutsideContentViewBounds:(id)arg1 model:(id)arg2;
- (id)_modelByClampingOverhangingIdentifiers:(id)arg1;
- (id)_modelByPerformingDodgingInModel:(id)arg1;
- (id)_modelsByResizingOverlappingIdentifiers:(id)arg1;
- (id)_modelsByTranslatingOverlappingIdentifiers:(id)arg1 allowedEdges:(unsigned long long)arg2;
- (long long)animationBehaviorModeForIdentifier:(id)arg1;
- (id)framesForIdentifiers;
- (id)layoutSettingsForIdentifier:(id)arg1;
- (id)model;
- (id)modelForInvalidatedModel:(id)arg1;
- (id)overridingModel;
- (void)setOverridingModel:(id)arg1;
- (id)zOrderedIdentifiers;

@end
