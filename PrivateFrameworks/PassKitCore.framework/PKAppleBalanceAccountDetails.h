
@interface PKAppleBalanceAccountDetails : NSObject <NSCopying, NSSecureCoding> {
    PKAppleBalanceAccountSummary * _accountSummary;
    NSString * _associatedPassSerialNumber;
    NSString * _associatedPassTypeIdentifier;
    long long  _cardType;
    NSString * _countryCode;
    NSDate * _createdDate;
    NSString * _currencyCode;
    NSString * _fpanIdentifier;
    NSDate * _lastUpdatedDate;
}

@property (nonatomic, retain) PKAppleBalanceAccountSummary *accountSummary;
@property (nonatomic, copy) NSString *associatedPassSerialNumber;
@property (nonatomic, copy) NSString *associatedPassTypeIdentifier;
@property (nonatomic) long long cardType;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSDate *createdDate;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, readonly) PKCurrencyAmount *currentBalance;
@property (nonatomic, copy) NSString *fpanIdentifier;
@property (nonatomic, copy) NSDate *lastUpdatedDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountSummary;
- (id)associatedPassSerialNumber;
- (id)associatedPassTypeIdentifier;
- (long long)cardType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)createdDate;
- (id)currencyCode;
- (id)currentBalance;
- (id)description;
- (void)encodeWithCloudRecord:(id)arg1 codingType:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)fpanIdentifier;
- (unsigned long long)hash;
- (id)initWithCloudRecord:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastUpdatedDate;
- (void)setAccountSummary:(id)arg1;
- (void)setAssociatedPassSerialNumber:(id)arg1;
- (void)setAssociatedPassTypeIdentifier:(id)arg1;
- (void)setCardType:(long long)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCreatedDate:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setFpanIdentifier:(id)arg1;
- (void)setLastUpdatedDate:(id)arg1;

@end
