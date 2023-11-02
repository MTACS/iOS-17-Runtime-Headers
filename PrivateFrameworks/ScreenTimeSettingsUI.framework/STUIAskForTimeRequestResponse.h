
@interface STUIAskForTimeRequestResponse : NSObject <NSCopying> {
    NSString * _budgetedIdentifier;
    NSString * _identifier;
    NSNumber * _requestingUserDSID;
    unsigned long long  _usageType;
}

@property (nonatomic, copy) NSString *budgetedIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSNumber *requestingUserDSID;
@property (nonatomic) unsigned long long usageType;

- (void).cxx_destruct;
- (id)budgetedIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)init;
- (id)initWithRequestResponse:(id)arg1;
- (id)requestingUserDSID;
- (void)setBudgetedIdentifier:(id)arg1;
- (void)setRequestingUserDSID:(id)arg1;
- (void)setUsageType:(unsigned long long)arg1;
- (unsigned long long)usageType;

@end
