
@interface AMSFinanceVerifyPurchaseResponse : NSObject <AMSFinancePerformable> {
    AMSDialogRequest * _dialogRequest;
    NSDictionary * _responseDictionary;
    AMSURLTaskInfo * _taskInfo;
    long long  _verifyType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AMSDialogRequest *dialogRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *responseDictionary;
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSURLTaskInfo *taskInfo;
@property (nonatomic) long long verifyType;

+ (id)_dialogRequestForCVVFromPayload:(id)arg1 verifyType:(long long)arg2;
+ (id)_dialogRequestForCarrierFromPayload:(id)arg1 verifyType:(long long)arg2;
+ (long long)_verifyTypeFromPayload:(id)arg1;
+ (bool)isVerifyPurchasePayload:(id)arg1;

- (void).cxx_destruct;
- (id)_handleCVVDialogResult:(id)arg1 shouldReattempt:(bool*)arg2;
- (id)_handleCarrierDialogResult:(id)arg1 shouldReattempt:(bool*)arg2;
- (id)_runCVVRequestForCode:(id)arg1 error:(id*)arg2;
- (id)_runCarrierNewCodeWithError:(id*)arg1;
- (id)_runCarrierVerifyCode:(id)arg1 error:(id*)arg2;
- (id)dialogRequest;
- (id)initWithPayload:(id)arg1 taskInfo:(id)arg2;
- (id)performWithTaskInfo:(id)arg1;
- (id)responseDictionary;
- (void)setDialogRequest:(id)arg1;
- (void)setResponseDictionary:(id)arg1;
- (void)setTaskInfo:(id)arg1;
- (void)setVerifyType:(long long)arg1;
- (id)taskInfo;
- (long long)verifyType;

@end
