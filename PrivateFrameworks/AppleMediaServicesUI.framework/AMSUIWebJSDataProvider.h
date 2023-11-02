
@interface AMSUIWebJSDataProvider : NSObject <AMSUIWebJSAppQueryManagerDelegate, AMSUIWebJSPropertiesDelegate, AMSUIWebJSTelephonyDelegate> {
    AMSUIWebJSAppQueryManager * _appQueryManager;
    AMSUIWebClientContext * _context;
    NSString * _otpIdentifier;
    AMSUIWebJSProperties * _properties;
    AMSUIWebJSTelephony * _telephony;
    AMSUIWebView * _webView;
}

@property (nonatomic, readonly) AMSUIWebJSAppQueryManager *appQueryManager;
@property (nonatomic) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *otpIdentifier;
@property (nonatomic, retain) AMSUIWebJSProperties *properties;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <AMSUIWebJSTelephonyProtocol> *telephony;
@property (nonatomic) AMSUIWebView *webView;

- (void).cxx_destruct;
- (bool)_canInteractWithJS;
- (void)_observeNotifications;
- (void)_postMediaQueryResultsChangeEventWithApps:(id)arg1;
- (void)_postSubscriptionChangedWithType:(long long)arg1;
- (void)_postTelephonyDidChangeEvent;
- (void)_purchaseDidSucceed:(id)arg1;
- (void)_safariDataUpdate:(id)arg1;
- (void)_subscriptionStatusChangeActivity:(id)arg1;
- (void)_subscriptionStatusChangeAppStore:(id)arg1;
- (void)_subscriptionStatusChangeHWBundle:(id)arg1;
- (void)_subscriptionStatusChangeMusic:(id)arg1;
- (void)_subscriptionStatusChangeNews:(id)arg1;
- (void)_subscriptionStatusChangeTV:(id)arg1;
- (void)_subscriptionStatusChangeiCloud:(id)arg1;
- (id)_syncPropertiesScriptWithProperties:(id)arg1;
- (id)appQueryManager;
- (void)appQueryManager:(id)arg1 didReceiveApps:(id)arg2;
- (id)context;
- (id)createWebView;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)loadPageModelWithInfo:(id)arg1;
- (id)otpIdentifier;
- (id)postEvent:(id)arg1 options:(id)arg2;
- (id)properties;
- (void)propertiesDidChange:(id)arg1;
- (id)runJSRequest:(id)arg1;
- (id)runSafariCallback:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setOtpIdentifier:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setWebView:(id)arg1;
- (bool)startOTPListener;
- (bool)stopOTPListener;
- (id)syncProperties;
- (id)telephony;
- (void)telephonyDidChange:(id)arg1;
- (id)webView;

@end
