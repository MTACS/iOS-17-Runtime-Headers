
@protocol AXAuditCategoryDelegate <NSObject>

@required

- (void)auditCategory:(AXAuditCategory *)arg1 didEncounterIssue:(AXAuditIssue *)arg2;
- (void)didCompleteCategory:(AXAuditCategory *)arg1;

@end
