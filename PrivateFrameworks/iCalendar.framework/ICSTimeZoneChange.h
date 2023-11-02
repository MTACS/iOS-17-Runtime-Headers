
@interface ICSTimeZoneChange : NSObject {
    double  _interval;
    long long  _tzOffsetTo;
}

- (long long)compare:(id)arg1;
- (id)description;
- (id)initWithTimeInterval:(double)arg1 tzOffsetTo:(long long)arg2;
- (double)interval;
- (bool)isCloseTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)tzOffsetTo;

@end
