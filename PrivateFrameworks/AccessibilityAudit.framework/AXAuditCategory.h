
@interface AXAuditCategory : NSObject {
    NSMutableArray * __currentTestingCaseSelectors;
    AXAuditCategoryResult * __result;
    NSArray * _caseSelectorsForAuditing;
    unsigned long long  _categoryType;
    NSSet * _currentAuditTypesToTestFor;
    AXAuditCaseResult * _currentCaseResult;
    <AXAuditCategoryDelegate> * _delegate;
    NSString * _lastCaseSelectorFinishedName;
    int  _targetPid;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *_currentTestingCaseSelectors;
@property (nonatomic, retain) AXAuditCategoryResult *_result;
@property (nonatomic, readonly) NSSet *allSupportedAuditTypes;
@property (nonatomic, retain) NSArray *caseSelectorsForAuditing;
@property (nonatomic) unsigned long long categoryType;
@property (nonatomic, retain) NSSet *currentAuditTypesToTestFor;
@property (nonatomic, retain) AXAuditCaseResult *currentCaseResult;
@property (nonatomic) <AXAuditCategoryDelegate> *delegate;
@property (nonatomic, retain) NSString *lastCaseSelectorFinishedName;
@property (nonatomic) int targetPid;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)_availableCasesDescription;
- (id)_currentTestingCaseSelectors;
- (bool)_isAppleInternalBuild;
- (id)_result;
- (void)addIssueWithClassification:(long long)arg1 auditElement:(id)arg2;
- (void)addIssueWithClassification:(long long)arg1 auditElement:(id)arg2 elementRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 elementDescription:(id)arg4;
- (void)addIssueWithClassification:(long long)arg1 auditElement:(id)arg2 elementRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 elementDescription:(id)arg4 mlGeneratedDescription:(id)arg5;
- (void)addIssueWithClassification:(long long)arg1 auditElement:(id)arg2 elementRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 elementDescription:(id)arg4 mlGeneratedDescription:(id)arg5 longDescExtraInfo:(id)arg6 elementText:(id)arg7;
- (id)allSupportedAuditTypes;
- (void)caseEndedForSelectorName:(id)arg1 result:(id)arg2;
- (id)caseSelectorsForAuditing;
- (id)caseStartedForSelectorName:(id)arg1;
- (unsigned long long)categoryType;
- (id)currentAuditTypesToTestFor;
- (id)currentCaseResult;
- (id)delegate;
- (id)description;
- (id)init;
- (id)lastCaseSelectorFinishedName;
- (bool)localIssueShouldRun:(id)arg1;
- (id)result;
- (void)run;
- (void)setCaseSelectorsForAuditing:(id)arg1;
- (void)setCategoryType:(unsigned long long)arg1;
- (void)setCurrentAuditTypesToTestFor:(id)arg1;
- (void)setCurrentCaseResult:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastCaseSelectorFinishedName:(id)arg1;
- (void)setTargetPid:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)set_currentTestingCaseSelectors:(id)arg1;
- (void)set_result:(id)arg1;
- (bool)shouldRunAuditTestType:(id)arg1;
- (void)start;
- (void)stop;
- (bool)supportAuditGroup:(unsigned long long)arg1;
- (bool)supportsAuditTestType:(id)arg1;
- (int)targetPid;
- (id)title;

@end
