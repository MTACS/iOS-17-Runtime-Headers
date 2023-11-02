
@interface NSConstantDate : NSDate {
    double  _ti;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)new;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (double)timeIntervalSinceReferenceDate;

@end
