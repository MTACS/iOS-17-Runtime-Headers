
@interface MOShieldLabel : NSObject <NSSecureCoding> {
    NSData * _colorData;
    NSString * _text;
}

@property (readonly, copy) NSData *colorData;
@property (readonly, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)colorData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 colorData:(id)arg2;
- (id)text;

@end
