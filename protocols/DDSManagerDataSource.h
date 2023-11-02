
@protocol DDSManagerDataSource <NSObject>

@required

- (NSDate *)date;
- (NSDate *)dateForPreferenceKey:(NSString *)arg1;
- (void)setDate:(NSDate *)arg1 forPreferenceKey:(NSString *)arg2;

@end
