
@interface CLSQuantityItem : CLSActivityItem {
    double  _quantity;
}

@property (nonatomic) double quantity;

+ (bool)supportsSecureCoding;

- (id)_init;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (double)quantity;
- (void)setQuantity:(double)arg1;

@end
