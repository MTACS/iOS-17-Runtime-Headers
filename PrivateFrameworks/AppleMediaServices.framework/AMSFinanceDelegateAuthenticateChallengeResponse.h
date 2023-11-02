
@interface AMSFinanceDelegateAuthenticateChallengeResponse : NSObject <AMSFinancePerformable> {
    NSDictionary * _responseDictionary;
    AMSURLTaskInfo * _taskInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *responseDictionary;
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSURLTaskInfo *taskInfo;

+ (bool)isDelegateAuthChallengeForTaskInfo:(id)arg1;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)arg1 taskInfo:(id)arg2;
- (id)performWithTaskInfo:(id)arg1;
- (id)responseDictionary;
- (void)setResponseDictionary:(id)arg1;
- (void)setTaskInfo:(id)arg1;
- (id)taskInfo;

@end
