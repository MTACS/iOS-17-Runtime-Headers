
@protocol AXAuditerDelegate <NSObject>

@required

- (void)auditer:(AXAuditer *)arg1 didAppendLogWithMessage:(NSString *)arg2;
- (void)auditer:(AXAuditer *)arg1 didCompleteWithResults:(NSArray *)arg2;
- (void)auditer:(AXAuditer *)arg1 didEncounterIssue:(AXAuditIssue *)arg2;
- (NSDictionary *)fetchScreenshot;

@end
