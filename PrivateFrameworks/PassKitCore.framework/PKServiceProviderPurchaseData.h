
@interface PKServiceProviderPurchaseData : NSObject <NSSecureCoding> {
    NSDictionary * _dictionaryRepresentation;
}

@property (nonatomic, copy) NSDictionary *dictionaryRepresentation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPKServiceProviderPurchaseData:(id)arg1;
- (void)setDictionaryRepresentation:(id)arg1;

@end
