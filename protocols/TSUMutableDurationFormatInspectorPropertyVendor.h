
@protocol TSUMutableDurationFormatInspectorPropertyVendor

@required

- (NSNumber *)durationStyle;
- (NSNumber *)durationUnitLargest;
- (NSNumber *)durationUnitSmallest;
- (NSNumber *)durationUnitsAutomatic;
- (NSSet *)selectedDurationStyles;
- (void)setDurationStyle:(NSNumber *)arg1;
- (void)setDurationUnitLargest:(NSNumber *)arg1;
- (void)setDurationUnitSmallest:(NSNumber *)arg1;
- (void)setDurationUnitsAutomatic:(NSNumber *)arg1;

@end
