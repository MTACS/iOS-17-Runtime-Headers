
@protocol PLTitled <NSObject, PLContentSizeCategoryAdjusting>

@required

- (NSDate *)date;
- (long long)dateFormatStyle;
- (NSArray *)iconButtons;
- (NSArray *)icons;
- (bool)isDateAllDay;
- (void)setDate:(NSDate *)arg1;
- (void)setDateAllDay:(bool)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (void)setIcons:(NSArray *)arg1;
- (void)setTimeZone:(NSTimeZone *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSTimeZone *)timeZone;
- (NSString *)title;
- (UIButton *)utilityButton;

@end
