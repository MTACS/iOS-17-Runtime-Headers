
@interface AMSUIWebOpenSafariAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    NSURL * _URL;
    NSString * _callbackScheme;
    NSDictionary * _data;
    UIViewController * _presentedViewController;
    AMSUIWebSafariViewController * _safariViewController;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) NSString *callbackScheme;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (nonatomic, retain) NSDictionary *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presentedViewController;
@property (nonatomic) AMSUIWebSafariViewController *safariViewController;
@property (readonly) Class superclass;

+ (id)resultFromURL:(id)arg1 error:(id)arg2;

- (void).cxx_destruct;
- (id)URL;
- (bool)_presentViewContoller:(id)arg1;
- (void)_safariDataUpdate:(id)arg1;
- (id)callbackScheme;
- (id)data;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)presentedViewController;
- (id)runAction;
- (id)safariViewController;
- (void)setCallbackScheme:(id)arg1;
- (void)setData:(id)arg1;
- (void)setPresentedViewController:(id)arg1;
- (void)setSafariViewController:(id)arg1;
- (void)setURL:(id)arg1;

@end
