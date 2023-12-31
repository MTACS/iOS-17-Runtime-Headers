
@interface PXBarAnimationOptions : NSObject <NSCopying> {
    double  _duration;
    long long  _type;
}

@property (nonatomic) double duration;
@property (nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (id)init;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 duration:(double)arg2;
- (void)setDuration:(double)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
