
@interface AMSAgeVerificationTask : AMSTask <AMSBagConsumer> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    NSDictionary * _options;
    NSString * _pincode;
    <AMSRequestPresentationDelegate> * _presentationDelegate;
    AMSQRCodeDialogTask * _task;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic, retain) NSString *pincode;
@property (nonatomic, readonly) <AMSRequestPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSQRCodeDialogTask *task;

+ (id)_errorCheckWithAccount:(id)arg1 bag:(id)arg2;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1 at:(id)arg2;
- (id)_performTaskForAccount:(id)arg1 withBag:(id)arg2;
- (void)_startObservingAccountStoreChanges;
- (void)_stopObservingAccountStoreChanges;
- (id)account;
- (id)bag;
- (id)initWithAccount:(id)arg1 bag:(id)arg2 options:(id)arg3 presentationDelegate:(id)arg4;
- (id)isVerificationNeeded;
- (id)options;
- (id)performTask;
- (id)pincode;
- (id)presentationDelegate;
- (void)setOptions:(id)arg1;
- (void)setPincode:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
