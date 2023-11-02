
@interface NTKFullscreenSubdialComplicationFactory : NTKFaceViewComplicationFactory <NTKFaceViewComplicationFactory> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _circularComplicationDistanceFromCenter;
    NTKFaceView * _faceView;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } circularComplicationDistanceFromCenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NTKFaceView *faceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_circularComplicationCenterForSlot:(id)arg1 inFaceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_convertCircularSlot:(id)arg1 toPosition:(long long*)arg2;
- (struct CGPoint { double x1; double x2; })circularComplicationDistanceFromCenter;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)faceView;
- (id)initForDevice:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)loadLayoutRules;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)setAlpha:(double)arg1 faceView:(id)arg2;
- (void)setCircularComplicationDistanceFromCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFaceView:(id)arg1;

@end
