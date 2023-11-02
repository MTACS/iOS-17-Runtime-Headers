
@interface GDKnosisArgInfo : NSObject <NSSecureCoding> {
    NSString * _arg;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSString *arg;
@property (nonatomic, readonly, copy) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arg;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 arg:(id)arg2;
- (id)value;

@end
