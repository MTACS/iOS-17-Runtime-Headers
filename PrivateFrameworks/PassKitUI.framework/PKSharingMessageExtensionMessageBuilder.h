
@interface PKSharingMessageExtensionMessageBuilder : NSObject

+ (void)messageFromConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)messageFromInvitation:(id)arg1 analyticsSessionToken:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)messageFromInvitation:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)messageFromSharingRequest:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)messageURLFromSharingRequest:(id)arg1 completionHandler:(id /* block */)arg2;

@end
