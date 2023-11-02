
@interface AMSFinanceDialogResponse : NSObject <AMSFinancePerformable> {
    bool  _containsCommerceUIURL;
    NSDictionary * _dialogDictionary;
    AMSDialogRequest * _dialogRequest;
    long long  _kind;
    NSDictionary * _responseDictionary;
    AMSURLTaskInfo * _taskInfo;
}

@property (nonatomic, readonly) bool containsCommerceUIURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dialogDictionary;
@property (nonatomic, readonly) AMSDialogRequest *dialogRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long kind;
@property (nonatomic, readonly, copy) NSDictionary *responseDictionary;
@property (readonly) Class superclass;
@property (nonatomic, copy) AMSURLTaskInfo *taskInfo;

+ (bool)_credentialSource:(unsigned long long)arg1 satisfiesAuthenticationType:(unsigned long long)arg2;
+ (id)_handleAskPermissionRequestWithURL:(id)arg1 account:(id)arg2;
+ (id)_presentDialog:(id)arg1 taskInfo:(id)arg2;
+ (id)_presentIDSDialog:(id)arg1 taskInfo:(id)arg2;
+ (id)_serviceActionFromButton:(id)arg1 taskInfo:(id)arg2;
+ (bool)_shouldSendOverIDS:(id)arg1 taskInfo:(id)arg2;
+ (long long)dialogKindForTaskInfo:(id)arg1 withResponseDictionary:(id)arg2;
+ (id)handleDialogResult:(id)arg1 taskInfo:(id)arg2;
+ (id)performFinanceDialog:(id)arg1 taskInfo:(id)arg2;

- (void).cxx_destruct;
- (long long)_actionTypeFromButtonDictionary:(id)arg1;
- (id)_createActionFromButtonDictionary:(id)arg1 title:(id)arg2;
- (id)_createDialogRequest;
- (id)_createRequestButtonsFromDialogDictionary:(id)arg1;
- (id)_enrichedMetricsDictionaryWithFinanceDictionary:(id)arg1;
- (bool)_isCommerceUIURL:(id)arg1 actionType:(long long)arg2 URLType:(long long)arg3;
- (bool)containsCommerceUIURL;
- (id)dialogDictionary;
- (id)dialogRequest;
- (id)initWithResponseDictionary:(id)arg1 kind:(long long)arg2 taskInfo:(id)arg3;
- (long long)kind;
- (id)performWithTaskInfo:(id)arg1;
- (id)responseDictionary;
- (void)setKind:(long long)arg1;
- (void)setTaskInfo:(id)arg1;
- (id)taskInfo;

@end
