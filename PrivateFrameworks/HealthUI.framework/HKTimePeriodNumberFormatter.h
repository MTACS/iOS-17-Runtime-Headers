
@interface HKTimePeriodNumberFormatter : NSObject <HKNumberFormatter> {
    bool  _shouldRoundToHours;
    bool  _shouldShowDays;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldRoundToHours;
@property (nonatomic) bool shouldShowDays;
@property (readonly) Class superclass;

- (id)init;
- (bool)returnsUnitWithValueForDisplay;
- (void)setShouldRoundToHours:(bool)arg1;
- (void)setShouldShowDays:(bool)arg1;
- (bool)shouldRoundToHours;
- (bool)shouldShowDays;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;

@end
