
@interface PKAccountServicingEvent : NSObject <NSSecureCoding, PKRecordObject> {
    NSString * _activityIdentifier;
    unsigned long long  _activityType;
    PKCurrencyAmount * _amount;
    NSString * _claimIdentifier;
    NSString * _identifier;
    NSDate * _lastUpdatedDate;
    NSArray * _linkedCaseIdentifiers;
    NSDate * _openDate;
    NSString * _reasonCode;
    unsigned long long  _status;
    PKAccountServicingEventStatusDetails * _statusDetails;
}

@property (nonatomic, copy) NSString *activityIdentifier;
@property (nonatomic) unsigned long long activityType;
@property (nonatomic, copy) PKCurrencyAmount *amount;
@property (nonatomic, copy) NSString *claimIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *lastUpdatedDate;
@property (nonatomic, copy) NSArray *linkedCaseIdentifiers;
@property (nonatomic, copy) NSDate *openDate;
@property (nonatomic, copy) NSString *reasonCode;
@property (nonatomic) unsigned long long status;
@property (nonatomic, copy) PKAccountServicingEventStatusDetails *statusDetails;
@property (readonly) Class superclass;

+ (id)recordNamePrefix;
+ (id)recordType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityIdentifier;
- (unsigned long long)activityType;
- (id)amount;
- (id)claimIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastUpdatedDate;
- (id)linkedCaseIdentifiers;
- (id)openDate;
- (id)reasonCode;
- (void)setActivityIdentifier:(id)arg1;
- (void)setActivityType:(unsigned long long)arg1;
- (void)setAmount:(id)arg1;
- (void)setClaimIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastUpdatedDate:(id)arg1;
- (void)setLinkedCaseIdentifiers:(id)arg1;
- (void)setOpenDate:(id)arg1;
- (void)setReasonCode:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setStatusDetails:(id)arg1;
- (unsigned long long)status;
- (id)statusDetails;

@end
