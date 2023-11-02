
@interface GEOPlaceDailyHours : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _dayOfWeekRange;
    NSArray * _openIntervals;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } dayOfWeekRange;
@property (nonatomic, readonly) NSArray *openIntervals;

+ (id)dailyHours:(id)arg1 forDays:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)getPlaceDailyHoursForWeekday:(long long)arg1 placeDailyHours:(id)arg2;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })dayOfWeekRange;
- (id)description;
- (id)openIntervals;

@end
