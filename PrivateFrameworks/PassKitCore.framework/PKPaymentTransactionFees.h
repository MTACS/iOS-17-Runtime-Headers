
@interface PKPaymentTransactionFees : NSObject <NSSecureCoding, PKCloudStoreCoding> {
    NSSet * _fees;
}

@property (nonatomic, retain) NSSet *fees;

+ (id)_feesSetFromJsonString:(id)arg1;
+ (id)recordNamePrefix;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_encodeServerDataWithCloudStoreCoder:(id)arg1;
- (id)_feeItemsFromRecord:(id)arg1;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;
- (id)description;
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)fees;
- (unsigned long long)hash;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeeItems:(id)arg1;
- (id)initWithJsonString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFees:(id)arg1;
- (unsigned long long)itemType;
- (id)jsonArrayRepresentation;
- (id)jsonString;
- (id)primaryIdentifier;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1;
- (void)setFees:(id)arg1;

@end
