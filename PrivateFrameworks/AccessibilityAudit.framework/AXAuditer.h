
@interface AXAuditer : NSObject <AXAuditCategoryDelegate, AXAuditCategoryResultDelegate> {
    NSArray * __auditCategories;
    NSArray * __currentTypesToAuditFor;
    NSMutableArray * __results;
    NSObject<OS_dispatch_queue> * _auditQueue;
    unsigned long long  _categoryType;
    NSMutableArray * _currentRunningCategories;
    <AXAuditerDelegate> * _delegate;
    int  _targetPid;
}

@property (nonatomic, retain) NSArray *_auditCategories;
@property (nonatomic, retain) NSArray *_currentTypesToAuditFor;
@property (nonatomic, retain) NSMutableArray *_results;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *auditQueue;
@property (nonatomic) unsigned long long categoryType;
@property (nonatomic, retain) NSMutableArray *currentRunningCategories;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXAuditerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) int targetPid;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_allCategoriesDescription;
- (id)_auditCategories;
- (id)_auditCategoryForClass:(Class)arg1;
- (void)_clearCurrentRunningCategories;
- (id)_currentTime;
- (id)_currentTypesToAuditFor;
- (void)_initializeAuditCategories;
- (id)_results;
- (void)_runCategories:(id)arg1;
- (id)allSupportedAuditTypes;
- (void)auditCategory:(id)arg1 didEncounterIssue:(id)arg2;
- (void)auditCategoryResult:(id)arg1 didAppendLogWithMessage:(id)arg2;
- (id)auditQueue;
- (unsigned long long)categoryType;
- (id)currentRunningCategories;
- (id)delegate;
- (id)description;
- (id)detectionResultsFromImageData:(id)arg1;
- (void)didCompleteCategory:(id)arg1;
- (id)init;
- (void)runCategories:(id)arg1;
- (void)setAuditQueue:(id)arg1;
- (void)setCategoryType:(unsigned long long)arg1;
- (void)setCurrentRunningCategories:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTargetPid:(int)arg1;
- (void)set_auditCategories:(id)arg1;
- (void)set_currentTypesToAuditFor:(id)arg1;
- (void)set_results:(id)arg1;
- (void)startWithAuditTypes:(id)arg1;
- (int)targetPid;

@end
