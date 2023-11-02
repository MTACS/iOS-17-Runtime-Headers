
@interface _UIImageSymbolEffectRepeatBehavior : NSObject <NSCopying, NSSecureCoding> {
    double  _numberOfRepeats;
}

@property (nonatomic, readonly) bool _hasCustomRepeatBehavior;
@property (nonatomic, readonly) double _numberOfRepeats;

+ (id)_repeatBehaviorWithRepeats:(double)arg1;
+ (id)defaultRepeatBehavior;
+ (id)fixedRepeatBehavior:(unsigned long long)arg1;
+ (id)indefiniteRepeatBehavior;
+ (bool)supportsSecureCoding;

- (bool)_hasCustomRepeatBehavior;
- (double)_numberOfRepeats;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
