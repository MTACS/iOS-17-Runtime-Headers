
@protocol AMSUIPurchaseDelegate <AMSPurchaseDelegate>

@optional

- (void)purchase:(void *)arg1 handleSceneBundleIdentifierRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSPurchase *, AMSUISceneBundleIdentifierRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)purchase:(void *)arg1 handleSceneIdentifierRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSPurchase *, AMSUISceneIdentifierRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)purchase:(void *)arg1 handleWindowRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSPurchase *, AMSUIWindowRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIWindow *, NSError *, void*

@end
