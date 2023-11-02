
@interface PKPayLaterFinancingPlanDispute : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _appliedPayments;
    NSDate * _deadlineDate;
    NSString * _emailAddress;
    NSString * _identifier;
    NSDate * _lastUpdated;
    NSDate * _openDate;
    unsigned long long  _requiredDocuments;
    unsigned long long  _state;
}

@property (nonatomic, copy) NSArray *appliedPayments;
@property (nonatomic, copy) NSDate *deadlineDate;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *lastUpdated;
@property (nonatomic, copy) NSDate *openDate;
@property (nonatomic) unsigned long long requiredDocuments;
@property (nonatomic) unsigned long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appliedPayments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deadlineDate;
- (id)description;
- (id)dictionaryRepresentation;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPayLaterFinancingPlanDispute:(id)arg1;
- (bool)isTerminal;
- (id)lastUpdated;
- (id)openDate;
- (unsigned long long)requiredDocuments;
- (void)setAppliedPayments:(id)arg1;
- (void)setDeadlineDate:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setOpenDate:(id)arg1;
- (void)setRequiredDocuments:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
