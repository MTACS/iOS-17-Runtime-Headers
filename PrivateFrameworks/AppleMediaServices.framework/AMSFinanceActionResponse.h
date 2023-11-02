
@interface AMSFinanceActionResponse : NSObject <AMSFinancePerformable> {
    NSURL * _URL;
    ACAccount * _account;
    NSString * _creditString;
    long long  _kind;
    bool  _shouldRetry;
    AMSURLTaskInfo * _taskInfo;
    bool  _tidContinue;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSString *creditString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long kind;
@property (nonatomic) bool shouldRetry;
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSURLTaskInfo *taskInfo;
@property (nonatomic) bool tidContinue;

+ (id)_URLForCommerceUIFromURL:(id)arg1 taskInfo:(id)arg2 tidContinue:(bool)arg3;
+ (id)_bodyObjectFromRequest:(id)arg1;
+ (id)_deepLinkForURL:(id)arg1 taskInfo:(id)arg2 gotoType:(long long)arg3 isAccountURL:(bool)arg4 tidContinue:(bool)arg5;
+ (bool)_isModernURL:(id)arg1 taskInfo:(id)arg2;
+ (id)_presentEngagementForURL:(id)arg1 taskInfo:(id)arg2;
+ (bool)_stashTIDContinueHeadersForTaskInfo:(id)arg1;
+ (id)actionWithActionDictionary:(id)arg1 taskInfo:(id)arg2;
+ (id)actionWithUpdatedCreditString:(id)arg1 account:(id)arg2 taskInfo:(id)arg3;
+ (void)handleExternalGotoURL:(id)arg1;
+ (void)handleExternalGotoURL:(id)arg1 taskInfo:(id)arg2;
+ (id)handleGotoURL:(id)arg1 taskInfo:(id)arg2 gotoType:(long long)arg3 accountURL:(bool)arg4 tidContinue:(bool)arg5 retryOnSuccess:(bool)arg6;

- (void).cxx_destruct;
- (id)URL;
- (id)_handleGotoAction;
- (id)_performCreditDisplayUpdate;
- (id)_performGotoURL;
- (id)_performOpenStandardURL;
- (id)account;
- (id)creditString;
- (id)initWithTaskInfo:(id)arg1;
- (long long)kind;
- (id)performWithTaskInfo:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setCreditString:(id)arg1;
- (void)setKind:(long long)arg1;
- (void)setShouldRetry:(bool)arg1;
- (void)setTaskInfo:(id)arg1;
- (void)setTidContinue:(bool)arg1;
- (void)setURL:(id)arg1;
- (bool)shouldRetry;
- (id)taskInfo;
- (bool)tidContinue;

@end
