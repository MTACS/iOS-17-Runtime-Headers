
@interface XRStringPair : NSObject <NSSecureCoding> {
    NSString * _first;
    NSString * _second;
}

@property (nonatomic, readonly) NSString *first;
@property (nonatomic, readonly) NSString *second;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)first;
- (unsigned long long)hashValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)second;

@end
