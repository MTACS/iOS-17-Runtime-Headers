
@interface CLKDate : NSDate

+ (id)complicationDate;
+ (id)complicationDateWithTimeIntervalSinceNow:(double)arg1;
+ (id)date;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (double)timeIntervalSinceReferenceDate;
+ (id)unmodifiedDate;
+ (id)unmodifiedDateWithTimeIntervalSinceNow:(double)arg1;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (double)timeIntervalSinceNow;

@end
