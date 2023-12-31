
@interface CLKWorldClockTimeFormatter : NSObject

+ (id)dayForOffset:(double)arg1;
+ (id)differenceForOffset:(double)arg1 caps:(bool)arg2;
+ (id)differenceForOffset:(double)arg1 caps:(bool)arg2 suppressZero:(bool)arg3;
+ (id)differenceForOffset:(double)arg1 caps:(bool)arg2 suppressZero:(bool)arg3 size:(long long)arg4;
+ (void)initialize;
+ (void)invalidateTimeZone:(id)arg1;

@end
