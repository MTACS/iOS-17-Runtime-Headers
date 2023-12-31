
@interface ICSPredefinedValue : NSNumber {
    long long  _value;
}

+ (id)numberWithLong:(long long)arg1;
+ (bool)supportsSecureCoding;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (void)getValue:(void*)arg1;
- (id)initWithBytes:(const void*)arg1 objCType:(const char *)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithLong:(long long)arg1;
- (long long)longValue;
- (const char *)objCType;

@end
