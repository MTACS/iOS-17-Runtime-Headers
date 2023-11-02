
@interface AXAuditCaseResult : AXAuditTimedResult {
    NSMutableArray * __mutableIssues;
    NSString * _caseTitle;
    AXAuditCategoryResult * _result;
}

@property (nonatomic, retain) NSMutableArray *_mutableIssues;
@property (nonatomic, retain) NSArray *auditIssues;
@property (nonatomic, copy) NSString *caseTitle;
@property (nonatomic) AXAuditCategoryResult *result;

- (void).cxx_destruct;
- (id)_mutableIssues;
- (void)addAuditIssue:(id)arg1;
- (id)auditIssues;
- (id)caseTitle;
- (id)description;
- (id)init;
- (id)result;
- (void)setAuditIssues:(id)arg1;
- (void)setCaseTitle:(id)arg1;
- (void)setResult:(id)arg1;
- (void)set_mutableIssues:(id)arg1;

@end
