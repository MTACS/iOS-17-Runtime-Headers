
@interface ICExtensionSafeAPIShims : NSObject

+ (long long)applicationState;
+ (bool)canOpenURL:(id)arg1;
+ (void)openURL:(id)arg1 originatingView:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id /* block */)openURLHandler;
+ (void)setOpenURLHandler:(id /* block */)arg1;

@end
