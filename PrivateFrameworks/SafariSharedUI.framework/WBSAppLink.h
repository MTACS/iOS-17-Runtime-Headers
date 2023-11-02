
@interface WBSAppLink : NSObject {
    LSAppLink * _cachedAppLink;
    bool  _didResolveAppLink;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _ivarLock;
    NSURL * _url;
}

@property (getter=isAppleNewsLink, nonatomic, readonly) bool isAppleNewsLink;
@property (nonatomic, readonly) LSApplicationProxy *synchronousTargetApplicationProxy;
@property (nonatomic, readonly) NSURL *url;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (void)clearSavedSettings;

- (void).cxx_destruct;
- (void)_appLink:(id)arg1 getAppLinkLabel:(id*)arg2 name:(id*)arg3 bundleIdentifier:(id*)arg4 icon:(id*)arg5;
- (void)_getAppLinkWithCompletionHandler:(id /* block */)arg1;
- (bool)_isApplicationProxyAppleNews:(id)arg1;
- (long long)_openStrategyForAppLink:(id)arg1;
- (id)_synchronouslyFetchAppLinkWithError:(id*)arg1;
- (void)decideOpenStrategyWithCompletionHandler:(id /* block */)arg1;
- (void)disable;
- (void)disableWithCompletionHandler:(id /* block */)arg1;
- (void)getAppLinkAttributesWithCompletionHandler:(id /* block */)arg1;
- (void)getAppLinkLabel:(id*)arg1 name:(id*)arg2 bundleIdentifier:(id*)arg3 icon:(id*)arg4;
- (void)getAppLinkTargetApplicationBundleIdentifierWithCompletionHandler:(id /* block */)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isAppleNewsLink;
- (void)openExternally;
- (void)openExternallyWithWebBrowserState:(id)arg1 referrerURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)synchronousTargetApplicationProxy;
- (long long)synchronouslyDecideOpenStrategy;
- (id)url;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void)_sf_decideOpenStrategyAndCallCompletionHandlerOnMainThread:(id /* block */)arg1;

@end
