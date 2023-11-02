
@interface _BSTransactionDefaults : BSAbstractDefaultDomain

@property (getter=isAuditHistoryEnabled, nonatomic) bool auditHistoryEnabled;

- (void)_bindAndRegisterDefaults;

@end
