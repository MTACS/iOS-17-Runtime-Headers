
@interface NTKColorCircularFaceViewComplicationFactory : NTKFaceViewComplicationFactory

- (double)_colorCircularEdgeGapForState:(long long)arg1;
- (double)_colorCircularKeylinePaddingForState:(long long)arg1;
- (double)_colorCircularLisaGapForState:(long long)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)initForDevice:(id)arg1;
- (long long)keylineStyleForComplicationSlot:(id)arg1;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;

@end
