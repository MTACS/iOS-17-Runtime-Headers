
@protocol BCSLocalizedStringProviding <NSObject>

@required

- (NSString *)willOpenAtDifferentDayPluralWithFormattedTime:(NSString *)arg1 formattedDay:(NSString *)arg2;
- (NSString *)willOpenAtDifferentDaySingularWithFormattedTime:(NSString *)arg1 formattedDay:(NSString *)arg2;
- (NSString *)willOpenAtSameDayPluralWithFormattedTime:(NSString *)arg1;
- (NSString *)willOpenAtSameDaySingularWithFormattedTime:(NSString *)arg1;

@end
