
@interface RKCurrencyAmount : NSObject <NSSecureCoding> {
    NSString * _currency;
    NSString * _string;
    double  _value;
}

@property (readonly) NSString *currency;
@property (readonly) NSString *string;
@property (readonly) double value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currency;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 currency:(id)arg2 value:(double)arg3;
- (id)string;
- (double)value;

@end
