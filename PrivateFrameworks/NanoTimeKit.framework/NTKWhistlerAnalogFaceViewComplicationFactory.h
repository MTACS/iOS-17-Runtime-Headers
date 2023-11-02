
@interface NTKWhistlerAnalogFaceViewComplicationFactory : NTKFaceViewComplicationFactory <NTKFaceViewComplicationFactory> {
    double  _dialDiameter;
    NTKFaceView * _faceView;
    bool  _usesNarrowTopSlots;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double dialDiameter;
@property (nonatomic) NTKFaceView *faceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool usesNarrowTopSlots;

- (void).cxx_destruct;
- (bool)_convertCircularSlot:(id)arg1 toPosition:(long long*)arg2;
- (bool)_convertCornerSlot:(id)arg1 toPosition:(long long*)arg2;
- (id)_cornerKeylineViewForSlot:(id)arg1;
- (double)_edgeGapForState:(long long)arg1;
- (bool)_isCenterComplicationForSlot:(id)arg1;
- (bool)_isCornerComplicationForSlot:(id)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (double)_lisaGapForState:(long long)arg1;
- (struct CGPoint { double x1; double x2; })circularComplicationCenterForSlot:(id)arg1 inFaceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (double)dialDiameter;
- (id)faceView;
- (id)initForDevice:(id)arg1;
- (id)initWithFaceView:(id)arg1 dialDiameter:(double)arg2 device:(id)arg3;
- (bool)isCornerComplicationForSlot:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keylineFrameForCornerComplicationSlot:(id)arg1 selected:(bool)arg2;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)loadLayoutRules;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (void)loadLayoutRulesForFaceView:(id)arg1 dialDiameter:(double)arg2;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)setAlpha:(double)arg1 faceView:(id)arg2;
- (void)setDialDiameter:(double)arg1;
- (void)setFaceView:(id)arg1;
- (void)setUsesNarrowTopSlots:(bool)arg1;
- (bool)usesNarrowTopSlots;

@end
