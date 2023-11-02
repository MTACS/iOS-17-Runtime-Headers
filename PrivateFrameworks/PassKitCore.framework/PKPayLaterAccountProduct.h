
@interface PKPayLaterAccountProduct : NSObject <NSCopying, NSSecureCoding> {
    PKPayLaterAccountProductEligibleSpend * _eligibleSpend;
    PKPayLaterAccountProductDetails * _productDetails;
    unsigned long long  _productType;
}

@property (nonatomic, retain) PKPayLaterAccountProductEligibleSpend *eligibleSpend;
@property (nonatomic, retain) PKPayLaterAccountProductDetails *productDetails;
@property (nonatomic) unsigned long long productType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)eligibleSpend;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)productDetails;
- (unsigned long long)productType;
- (void)setEligibleSpend:(id)arg1;
- (void)setProductDetails:(id)arg1;
- (void)setProductType:(unsigned long long)arg1;

@end
