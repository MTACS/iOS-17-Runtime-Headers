
@interface SPDataIntegrityCheck : NSObject <NSCopying, NSSecureCoding> {
    long long  _severity;
    NSString * _value;
}

@property (nonatomic) long long severity;
@property (nonatomic, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 severity:(long long)arg2;
- (void)setSeverity:(long long)arg1;
- (void)setValue:(id)arg1;
- (long long)severity;
- (id)value;

@end
