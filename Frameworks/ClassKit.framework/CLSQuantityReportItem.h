
@interface CLSQuantityReportItem : CLSActivityReportItem <NSCopying, NSSecureCoding> {
    double  _quantity;
}

@property (nonatomic) double quantity;

+ (bool)supportsSecureCoding;

- (void)add:(id)arg1;
- (long long)compare:(id)arg1;
- (id)convertToItemCompatibleWithItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)quantity;
- (void)scalarMultiply:(double)arg1;
- (void)setQuantity:(double)arg1;

@end
