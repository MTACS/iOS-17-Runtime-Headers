
@interface HKOverlayPillValueProvider : NSObject <HKOverlayPillValueProviding>

- (id)_formattedQuantity:(id)arg1 displayType:(id)arg2;
- (id)_formattedQuantityRange:(id)arg1 displayType:(id)arg2;
- (id)_quantityRangeFromChartPoints:(id)arg1 unit:(id)arg2 displayType:(id)arg3 unitPreferenceController:(id)arg4;
- (id)_unitFromQuantityRange:(id)arg1 displayType:(id)arg2;
- (id)_valueFromQuantityRange:(id)arg1 displayType:(id)arg2;
- (id)valueFromChartPoints:(id)arg1 unit:(id)arg2 displayType:(id)arg3 unitPreferenceController:(id)arg4;

@end
