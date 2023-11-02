
@interface PKPaymentTransactionForeignExchangeInformation : NSObject <NSSecureCoding, PKCloudStoreCoding> {
    PKCurrencyAmount * _destinationCurrencyAmount;
    NSDecimalNumber * _exchangeRate;
}

@property (nonatomic, copy) PKCurrencyAmount *destinationCurrencyAmount;
@property (nonatomic, copy) NSDecimalNumber *exchangeRate;

+ (id)recordNamePrefix;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_encodeServerDataWithCloudStoreCoder:(id)arg1;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;
- (id)destinationCurrencyAmount;
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)exchangeRate;
- (id)fkForeignAmount;
- (unsigned long long)hash;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToForeignExchangeInformation:(id)arg1;
- (bool)isValid;
- (unsigned long long)itemType;
- (id)jsonDictionaryRepresentation;
- (id)jsonString;
- (id)primaryIdentifier;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1;
- (void)setDestinationCurrencyAmount:(id)arg1;
- (void)setExchangeRate:(id)arg1;

@end
