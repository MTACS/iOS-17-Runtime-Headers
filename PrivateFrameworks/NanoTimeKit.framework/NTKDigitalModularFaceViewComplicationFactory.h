
@interface NTKDigitalModularFaceViewComplicationFactory : NTKFaceViewComplicationFactory {
    NTKLayoutRule * _timeLayoutRuleEditing;
    NTKLayoutRule * _timeLayoutRuleNormal;
}

- (void).cxx_destruct;
- (void)_loadLayoutRulesForState:(long long)arg1 withTopGap:(double)arg2 largeModuleHeight:(double)arg3 faceView:(id)arg4;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)digitalTimeLayoutRuleForEditMode:(long long)arg1;
- (id)initForDevice:(id)arg1;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;

@end
