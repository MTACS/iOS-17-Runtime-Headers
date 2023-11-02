
@interface NTKColorCircularUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory <NTKFaceViewComplicationFactory, NTKUtilityComplicationFactoryDelegate> {
    NTKUtilityComplicationFactory * _complicationFactory;
    NTKWhistlerAnalogFaceViewComplicationFactory * _cornerComplicationFactory;
    <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate> * _delegate;
    NTKFaceView * _faceView;
    bool  _graphicCornerComplications;
    UIColor * _previousForegroundColor;
    UIColor * _previousPlatterColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) NTKFaceView *faceView;
@property (nonatomic) bool graphicCornerComplications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_colorComplicationSlots;
- (id)_complicationSlots;
- (double)_edgeGapForState:(long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (double)_lisaGapForState:(long long)arg1;
- (id)_slotForUtilitySlot:(long long)arg1;
- (id)_utilityComplicationSlots;
- (long long)_utilitySlotForSlot:(id)arg1;
- (void)applyComplicationContentSpecificAttributesAnimated:(bool)arg1 faceView:(id)arg2;
- (void)cleanupAfterEditingForFaceView:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)arg1 faceView:(id)arg2 forSlots:(id)arg3;
- (void)curvedCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(struct CGPoint { double x1; double x2; }*)arg4 interior:(bool*)arg5 forSlot:(id)arg6;
- (id)curvedMaskForSlot:(id)arg1;
- (id)delegate;
- (id)faceView;
- (bool)graphicCornerComplications;
- (id)initForDevice:(id)arg1;
- (id)initWithFaceView:(id)arg1 device:(id)arg2 graphicCornerComplications:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keylineFrameForCornerComplicationSlot:(id)arg1 selected:(bool)arg2;
- (long long)keylineStyleForComplicationSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (void)loadLayoutRules;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)prepareForEditingForFaceView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFaceView:(id)arg1;
- (void)setGraphicCornerComplications:(bool)arg1;
- (bool)slotUsesCurvedText:(long long)arg1;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;

@end
