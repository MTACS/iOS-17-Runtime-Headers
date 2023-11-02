
@protocol NTKFaceViewComplicationFactory <NSObject>

@required

- (void)configureComplicationView:(UIView *)arg1 forSlot:(NSString *)arg2;
- (UIView<NTKKeylineView> *)keylineViewForComplicationSlot:(NSString *)arg1;
- (void)loadLayoutRules;
- (UIView<CDComplicationDisplay> *)newLegacyViewForComplication:(NTKComplication *)arg1 family:(long long)arg2 slot:(NSString *)arg3;

@optional

- (long long)complicationPickerStyleForSlot:(NSString *)arg1;
- (void)curvedComplicationCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(struct CGPoint { double x1; double x2; }*)arg4 interior:(bool*)arg5 forSlot:(NSString *)arg6;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(NSString *)arg2;
- (bool)slotSupportsCurvedText:(NSString *)arg1;

@end
