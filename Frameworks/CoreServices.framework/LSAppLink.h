
@interface LSAppLink : NSObject <BCSApp, NSSecureCoding> {
    NSURL * _URL;
    LSApplicationProxy * _targetApplicationProxy;
    LSApplicationRecord * _targetApplicationRecord;
}

@property (copy) NSURL *URL;
@property (nonatomic, retain) NSDictionary *browserSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property long long openStrategy;
@property (readonly) Class superclass;
@property (readonly) LSApplicationProxy *targetApplicationProxy;
@property (retain) LSApplicationRecord *targetApplicationRecord;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (bool)URLComponentsAreValidForAppLinks:(id)arg1 error:(id*)arg2;
+ (bool)_URLIsValidForAppLinks:(id)arg1 error:(id*)arg2;
+ (id)_appLinkWithURL:(id)arg1 applicationRecord:(id)arg2 plugInClass:(Class)arg3;
+ (id)_appLinksWithState:(id)arg1 context:(struct LSContext { id x1; }*)arg2 limit:(unsigned long long)arg3 URLComponents:(id)arg4 error:(id*)arg5;
+ (id)_appLinksWithState:(id)arg1 context:(struct LSContext { id x1; }*)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
+ (id)_dispatchQueue;
+ (void)_openAppLink:(id)arg1 state:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)_openWithAppLink:(id)arg1 state:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)afterAppLinksBecomeAvailableForURL:(id)arg1 limit:(unsigned long long)arg2 performBlock:(id /* block */)arg3;
+ (id)appLinksWithURL:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3;
+ (id)appLinksWithURL:(id)arg1 limit:(unsigned long long)arg2 includeLinksForCurrentApplication:(bool)arg3 error:(id*)arg4;
+ (bool)areEnabledByDefault;
+ (bool)auditTokenHasReadAccess:(struct { unsigned int x1[8]; })arg1;
+ (bool)auditTokenHasWriteAccess:(struct { unsigned int x1[8]; })arg1;
+ (bool)currentProcessHasReadAccess;
+ (bool)currentProcessHasWriteAccess;
+ (void)getAppLinkWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getAppLinksWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)openWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)openWithURL:(id)arg1 configuration:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)removeAllSettingsReturningError:(id*)arg1;
+ (bool)setSettingsSwitchState:(long long)arg1 forApplicationIdentifier:(id)arg2 error:(id*)arg3;
+ (long long)settingsSwitchStateForApplicationIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_userActivityWithState:(id)arg1 error:(id*)arg2;
- (id)browserSettings;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isAlwaysEnabled;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (void)openInWebBrowser:(bool)arg1 setAppropriateOpenStrategyAndWebBrowserState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openInWebBrowser:(bool)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)openInWebBrowser:(bool)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 configuration:(id)arg4 completionHandler:(id /* block */)arg5;
- (long long)openStrategy;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)openWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)removeSettingsReturningError:(id*)arg1;
- (void)setBrowserSettings:(id)arg1;
- (bool)setBrowserSettings:(id)arg1 error:(id*)arg2;
- (void)setEnabled:(bool)arg1;
- (bool)setEnabled:(bool)arg1 error:(id*)arg2;
- (void)setOpenStrategy:(long long)arg1;
- (void)setTargetApplicationRecord:(id)arg1;
- (void)setURL:(id)arg1;
- (id)targetApplicationProxy;
- (id)targetApplicationRecord;

// Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport

- (id)bundleIdentifier;

@end
