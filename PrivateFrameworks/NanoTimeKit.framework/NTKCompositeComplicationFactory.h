
@interface NTKCompositeComplicationFactory : NSObject <NTKFaceViewComplicationFactory> {
    NSMutableOrderedSet * _factories;
    NSMutableDictionary * _factoriesBySlot;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableOrderedSet *factories;
@property (nonatomic, retain) NSMutableDictionary *factoriesBySlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)complicationPickerStyleForSlot:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)curvedComplicationCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(struct CGPoint { double x1; double x2; }*)arg4 interior:(bool*)arg5 forSlot:(id)arg6;
- (void)deregisterFactoryAtSlot:(id)arg1;
- (void)deregisterFactoryAtSlots:(id)arg1;
- (id)factories;
- (id)factoriesBySlot;
- (id)factoryAtSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)loadLayoutRules;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)registerFactory:(id)arg1 forSlot:(id)arg2;
- (void)registerFactory:(id)arg1 forSlots:(id)arg2;
- (void)setFactories:(id)arg1;
- (void)setFactoriesBySlot:(id)arg1;
- (bool)slotSupportsCurvedText:(id)arg1;

@end
