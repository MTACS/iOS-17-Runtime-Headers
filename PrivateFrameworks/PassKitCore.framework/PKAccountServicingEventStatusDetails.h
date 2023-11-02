
@interface PKAccountServicingEventStatusDetails : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _customerResponseByDate;
    NSArray * _evidenceDocumentTypes;
    NSDate * _merchantResponseByDate;
    PKCurrencyAmount * _partiallyApprovedAmount;
    NSDate * _resolutionDate;
    NSString * _resolutionReason;
    NSArray * _statusReasons;
}

@property (nonatomic, copy) NSDate *customerResponseByDate;
@property (nonatomic, copy) NSArray *evidenceDocumentTypes;
@property (nonatomic, copy) NSDate *merchantResponseByDate;
@property (nonatomic, copy) PKCurrencyAmount *partiallyApprovedAmount;
@property (nonatomic, copy) NSDate *resolutionDate;
@property (nonatomic, copy) NSString *resolutionReason;
@property (nonatomic, copy) NSArray *statusReasons;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customerResponseByDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)evidenceDocumentTypes;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 currencyCode:(id)arg2;
- (id)initWithRecord:(id)arg1 currencyCode:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)merchantResponseByDate;
- (id)partiallyApprovedAmount;
- (id)resolutionDate;
- (id)resolutionReason;
- (void)setCustomerResponseByDate:(id)arg1;
- (void)setEvidenceDocumentTypes:(id)arg1;
- (void)setMerchantResponseByDate:(id)arg1;
- (void)setPartiallyApprovedAmount:(id)arg1;
- (void)setResolutionDate:(id)arg1;
- (void)setResolutionReason:(id)arg1;
- (void)setStatusReasons:(id)arg1;
- (id)statusReasons;

@end
