
@interface ProximityReader.TransactionInternal : NSObject <NSSecureCoding> {
    void amount;
    void countryCode;
    void currencyCode;
    void customerPreferredLocaleIdentifier;
    void dataType;
    void id;
    void preferredAIDList;
    void terminalPreferredLocaleIdentifier;
    void transactionType;
    void vasMerchants;
    void vasMode;
    void vasRequestName;
    void verificationReason;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
