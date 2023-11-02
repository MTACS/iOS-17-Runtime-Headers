
@interface _UIActivityRecipientManager : NSObject

+ (id)createRemoteDataProxyWithErrorHandler:(id /* block */)arg1;
+ (void)requestMailRecipientsForSessionID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)requestMessagesRecipientInfoForSessionID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)requestRecipientsForSessionID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)requestRecipientsV2ForSessionID:(id)arg1 completionHandler:(id /* block */)arg2;

@end
