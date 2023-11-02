
@protocol TSUMutableDateTimeFormatInspectorPropertyVendor

@required

- (NSString *)dateFormat;
- (NSSet *)selectedDateFormats;
- (NSSet *)selectedTimeFormats;
- (void)setDateFormat:(NSString *)arg1;
- (void)setTimeFormat:(NSString *)arg1;
- (NSString *)timeFormat;

@end
