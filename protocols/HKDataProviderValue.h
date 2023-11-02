
@protocol HKDataProviderValue <NSObject>

@required

- (NSAttributedString *)attributedStringWithDisplayType:(HKDisplayType *)arg1 unitController:(HKUnitPreferenceController *)arg2 valueFont:(UIFont *)arg3 unitFont:(UIFont *)arg4 dateCache:(HKDateCache *)arg5;

@optional

- (NSAttributedString *)attributedSupplementaryStringWithDisplayType:(HKDisplayType *)arg1 unitController:(HKUnitPreferenceController *)arg2 font:(UIFont *)arg3;
- (NSDate *)date;
- (NSString *)lastUpdatedDescriptionWithDateCache:(HKDateCache *)arg1;
- (NSString *)lastUpdatedShortDescriptionWithDateCache:(HKDateCache *)arg1;
- (NSString *)stringWithDisplayType:(HKDisplayType *)arg1 unitController:(HKUnitPreferenceController *)arg2;

@end
