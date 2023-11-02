
@interface NTKPrideAnalogFaceViewComplicationFactory : NTKFaceViewComplicationFactory <NTKFaceViewComplicationFactory> {
    NTKFaceView * _faceView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NTKFaceView *faceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_complicationSlots;
- (double)_edgeGapForState:(long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (double)_lisaGapForState:(long long)arg1;
- (void)applyComplicationContentSpecificAttributesAnimated:(bool)arg1 faceView:(id)arg2;
- (void)cleanupAfterEditingForFaceView:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)createComplicationContentSpecificAttributesAnimationWithAttributes:(unsigned long long)arg1 faceView:(id)arg2 forSlots:(id)arg3;
- (id)faceView;
- (bool)fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 faceView:(id)arg3;
- (id)initWithFaceView:(id)arg1 device:(id)arg2;
- (long long)keylineStyleForComplicationSlot:(id)arg1;
- (void)loadLayoutRules;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)prepareForEditingForFaceView:(id)arg1;
- (void)setFaceView:(id)arg1;

@end
