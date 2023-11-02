
@interface MOEffectiveInteger : NSObject {
    long long  _defaultValue;
    long long  _value;
}

@property (readonly) long long defaultValue;
@property (readonly) long long value;

- (long long)defaultValue;
- (id)initWithValue:(long long)arg1 defaultValue:(long long)arg2;
- (long long)value;

@end
