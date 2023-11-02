
@interface NSSymbolEffectOptions : NSObject <NSCopying, NSSecureCoding> {
    long long  _repeatBehavior;
    long long  _repeatCount;
    double  _speed;
}

@property (nonatomic) long long _repeatBehavior;
@property (nonatomic) long long _repeatCount;
@property (nonatomic) double _speed;

+ (id)options;
+ (id)optionsWithNonRepeating;
+ (id)optionsWithRepeatCount:(long long)arg1;
+ (id)optionsWithRepeating;
+ (id)optionsWithSpeed:(double)arg1;
+ (bool)supportsSecureCoding;

- (long long)_repeatBehavior;
- (long long)_repeatCount;
- (double)_speed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)optionsWithNonRepeating;
- (id)optionsWithRepeatCount:(long long)arg1;
- (id)optionsWithRepeating;
- (id)optionsWithSpeed:(double)arg1;
- (void)set_repeatBehavior:(long long)arg1;
- (void)set_repeatCount:(long long)arg1;
- (void)set_speed:(double)arg1;

@end
