
@interface AXAuditCategoryResult : AXAuditTimedResult {
    NSMutableArray * __mutableCases;
    NSMutableString * __mutableLog;
    <AXAuditCategoryResultDelegate> * _delegate;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *_mutableCases;
@property (nonatomic, retain) NSMutableString *_mutableLog;
@property (nonatomic, readonly) NSArray *caseResults;
@property (nonatomic) <AXAuditCategoryResultDelegate> *delegate;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)_mutableCases;
- (id)_mutableLog;
- (void)addCaseResult:(id)arg1;
- (id)allIssues;
- (void)appendLog:(id)arg1;
- (id)caseResults;
- (id)delegate;
- (id)description;
- (id)init;
- (long long)issueCount;
- (id)issueSummaryStrings;
- (id)log;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)set_mutableCases:(id)arg1;
- (void)set_mutableLog:(id)arg1;
- (id)title;

@end
