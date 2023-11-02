
@interface PPSTimeIntervalCoalescePolicy : NSObject <NSCopying, NSSecureCoding> {
    short  _numberPolicy;
    short  _stringPolicy;
}

@property (readonly) short numberPolicy;
@property (readonly) short stringPolicy;

+ (id)legacyPolicy;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumberCoalescePolicy:(short)arg1 stringCoalescePolicy:(short)arg2;
- (short)numberPolicy;
- (short)stringPolicy;

@end
