
@interface _VUICoreApplication : NSObject <VUIApplication> {
    NSDictionary * _javaScriptLaunchOptions;
    <UITraitEnvironment> * _keyTraitEnvironment;
    UIWindow * _keyWindow;
    VUITVApplicationControllerContext * _launchContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *javaScriptLaunchOptions;
@property (nonatomic) <UITraitEnvironment> *keyTraitEnvironment;
@property (nonatomic) UIWindow *keyWindow;
@property (nonatomic, readonly) VUITVApplicationControllerContext *launchContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appIdentifier;
- (id)appJSURL;
- (id)appLaunchParams;
- (id)appTraitCollection;
- (id)initWithLaunchContext:(id)arg1;
- (id)javaScriptLaunchOptions;
- (id)keyTraitEnvironment;
- (id)keyWindow;
- (id)launchContext;
- (void)setJavaScriptLaunchOptions:(id)arg1;
- (void)setKeyTraitEnvironment:(id)arg1;
- (void)setKeyWindow:(id)arg1;
- (bool)shouldIgnoreJSValidation;
- (id)userDefaultsStorage;

@end
