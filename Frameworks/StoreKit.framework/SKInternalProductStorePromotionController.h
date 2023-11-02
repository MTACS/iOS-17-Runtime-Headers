
@interface SKInternalProductStorePromotionController : NSObject

+ (id)defaultController;

- (void)_handleReply:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchOverridesForVisibilityAndOrderForApplicationBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

@end
