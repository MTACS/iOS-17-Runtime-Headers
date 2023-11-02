
@protocol AXAuditCategoryResultDelegate <NSObject>

@required

- (void)auditCategoryResult:(AXAuditCategoryResult *)arg1 didAppendLogWithMessage:(NSString *)arg2;

@end
