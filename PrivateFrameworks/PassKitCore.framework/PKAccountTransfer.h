
@interface PKAccountTransfer : NSObject <NSSecureCoding, PKRecordObject> {
    bool  _cancellable;
    NSDate * _cancellationExpiryDate;
    NSString * _clientReferenceIdentifier;
    PKCurrencyAmount * _currencyAmount;
    NSDate * _expectedCompletionDate;
    PKAccountTransferExternalAccount * _externalAccount;
    PKCurrencyAmount * _holdAmount;
    NSString * _identifier;
    NSString * _referenceIdentifier;
    PKAccountTransferScheduleDetails * _scheduleDetails;
    unsigned long long  _state;
    long long  _statusCode;
    NSDate * _transferDate;
    NSDate * _transferStatusDate;
    unsigned long long  _type;
}

@property (nonatomic) bool cancellable;
@property (nonatomic, copy) NSDate *cancellationExpiryDate;
@property (nonatomic, copy) NSString *clientReferenceIdentifier;
@property (nonatomic, retain) PKCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expectedCompletionDate;
@property (nonatomic, retain) PKAccountTransferExternalAccount *externalAccount;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKCurrencyAmount *holdAmount;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *referenceIdentifier;
@property (nonatomic, retain) PKAccountTransferScheduleDetails *scheduleDetails;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long statusCode;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *transferDate;
@property (nonatomic, copy) NSDate *transferStatusDate;
@property (nonatomic) unsigned long long type;

+ (id)recordNamePrefix;
+ (id)recordType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)cancellable;
- (id)cancellationExpiryDate;
- (id)clientReferenceIdentifier;
- (id)currencyAmount;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)expectedCompletionDate;
- (id)externalAccount;
- (bool)fundsAreAvailable;
- (unsigned long long)hash;
- (id)holdAmount;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 productTimeZone:(id)arg2;
- (id)initWithRecord:(id)arg1;
- (bool)isCurrentlyCancellable;
- (bool)isEqual:(id)arg1;
- (id)referenceIdentifier;
- (id)scheduleDetails;
- (void)setCancellable:(bool)arg1;
- (void)setCancellationExpiryDate:(id)arg1;
- (void)setClientReferenceIdentifier:(id)arg1;
- (void)setCurrencyAmount:(id)arg1;
- (void)setExpectedCompletionDate:(id)arg1;
- (void)setExternalAccount:(id)arg1;
- (void)setHoldAmount:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setReferenceIdentifier:(id)arg1;
- (void)setScheduleDetails:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setStatusCode:(long long)arg1;
- (void)setTransferDate:(id)arg1;
- (void)setTransferStatusDate:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)state;
- (long long)statusCode;
- (id)transferDate;
- (id)transferStatusDate;
- (unsigned long long)type;

@end
