
@interface BSMonotonicReferenceTime : NSObject {
    double  _startTimeStamp;
}

@property (nonatomic, readonly) double timeIntervalSinceNow;
@property (nonatomic, readonly) double timeIntervalToNow;

+ (id)distantFuture;
+ (id)distantPast;
+ (id)now;
+ (id)referenceTimeForDate:(id)arg1;
+ (id)referenceTimeWithTimeIntervalSinceNow:(double)arg1;

- (id)date;
- (double)timeIntervalSinceNow;
- (double)timeIntervalSinceReferenceTime:(id)arg1;
- (double)timeIntervalToNow;

@end
