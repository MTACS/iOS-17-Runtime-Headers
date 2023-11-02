
@interface SIRINLURRAnnotation : NSObject <NSSecureCoding> {
    NSString * _key;
    NSString * _value;
}

@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
