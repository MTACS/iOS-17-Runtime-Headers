
@interface CHSDictionaryBox : NSObject <NSSecureCoding> {
    NSDictionary * _value;
}

@property (nonatomic, retain) NSDictionary *value;

+ (id)boxedValue:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
