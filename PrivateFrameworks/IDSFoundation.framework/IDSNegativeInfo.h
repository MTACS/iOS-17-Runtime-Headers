
@interface IDSNegativeInfo : NSObject <NSCopying> {
    long long  _count;
    double  _time;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) double time;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (id)initWithTime:(double)arg1 count:(long long)arg2;
- (double)time;

@end
