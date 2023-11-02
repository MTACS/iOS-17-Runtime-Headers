
@protocol TSUDurationFormatInspectorPropertyVendor

@required

- (NSNumber *)durationStyle;
- (NSNumber *)durationUnitLargest;
- (NSNumber *)durationUnitSmallest;
- (NSNumber *)durationUnitsAutomatic;
- (NSSet *)selectedDurationStyles;

@end
