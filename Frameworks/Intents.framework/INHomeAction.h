
@interface INHomeAction : NSObject <NSCopying, NSSecureCoding> {
    bool  _boolValue;
    double  _doubleValue;
    long long  _integerValue;
    NSString * _stringValue;
    long long  _type;
    long long  _valueType;
}

@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) long long integerValue;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long valueType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)boolValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 boolValue:(bool)arg2;
- (id)initWithType:(long long)arg1 doubleValue:(double)arg2;
- (id)initWithType:(long long)arg1 integerValue:(long long)arg2;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2;
- (id)initWithType:(long long)arg1 valueType:(long long)arg2 boolValue:(bool)arg3 doubleValue:(double)arg4 integerValue:(long long)arg5 stringValue:(id)arg6;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (id)stringValue;
- (long long)type;
- (long long)valueType;

@end
