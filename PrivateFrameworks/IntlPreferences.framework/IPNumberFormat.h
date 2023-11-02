
@interface IPNumberFormat : NSObject {
    NSString * _decimalSeparator;
    NSString * _formattedNumber;
    NSString * _groupingSeparator;
}

@property (nonatomic, readonly) NSString *decimalSeparator;
@property (nonatomic, readonly) NSString *formattedNumber;
@property (nonatomic, readonly) NSString *groupingSeparator;

+ (id)availableFormats;
+ (id)currentFormat;
+ (void)setFormat:(id)arg1;

- (void).cxx_destruct;
- (id)decimalSeparator;
- (id)formattedNumber;
- (id)groupingSeparator;
- (unsigned long long)hash;
- (id)initWithDecimalSeparator:(id)arg1 groupingSeparator:(id)arg2;
- (id)initWithLocale:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
