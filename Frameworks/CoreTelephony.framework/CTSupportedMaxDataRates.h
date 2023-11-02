
@interface CTSupportedMaxDataRates : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _rates;
}

@property (nonatomic, retain) NSArray *rates;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRates:(id)arg1;
- (id)rates;
- (void)setRates:(id)arg1;

@end
