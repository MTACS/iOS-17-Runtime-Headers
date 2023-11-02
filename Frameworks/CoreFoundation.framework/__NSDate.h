
@interface __NSDate : NSDate {
    double  _time;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)dealloc;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (double)timeIntervalSinceReferenceDate;

@end
