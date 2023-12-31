
@interface TSUDuration : NSObject <NSCopying> {
    double  mTimeInterval;
}

+ (id)durationWithTimeInterval:(double)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithTimeInterval:(double)arg1;
- (bool)isEqual:(id)arg1;
- (double)timeInterval;

@end
