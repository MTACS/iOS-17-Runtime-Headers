
@interface AMSSyncPasswordSettingsTask : AMSTask <AMSBagConsumer, AMSURLProtocolDelegate> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    AMSProcessInfo * _clientInfo;
    <NSURLSessionDelegate><AMSURLProtocolDelegate> * _delegate;
    unsigned long long  _freeSetting;
    unsigned long long  _paidSetting;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <NSURLSessionDelegate><AMSURLProtocolDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long freeSetting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long paidSetting;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (unsigned long long)freePasswordSettingFromServerValue:(unsigned long long)arg1;
+ (unsigned long long)paidPasswordSettingFromServerValue:(unsigned long long)arg1;
+ (id)serverValueForFreePasswordSetting:(unsigned long long)arg1;
+ (id)serverValueForPaidPasswordSetting:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)account;
- (id)bag;
- (id)clientInfo;
- (id)delegate;
- (unsigned long long)freeSetting;
- (id)initWithAccount:(id)arg1 freeSetting:(unsigned long long)arg2 paidSetting:(unsigned long long)arg3 delegate:(id)arg4 bag:(id)arg5;
- (unsigned long long)paidSetting;
- (id)performSync;
- (void)setClientInfo:(id)arg1;

@end
