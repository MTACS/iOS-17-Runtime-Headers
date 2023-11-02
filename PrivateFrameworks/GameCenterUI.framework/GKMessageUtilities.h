
@interface GKMessageUtilities : NSObject

+ (id)contactFromEmailOrPhoneNumber:(id)arg1 fromContactStore:(id)arg2;
+ (void)linkMetadataWithPlayerRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 shareURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)messagesRecipientHandleForContact:(id)arg1;
+ (id)playerWithPhoneNumberOrEmail:(id)arg1;
+ (id)playerWithPhoneNumberOrEmail:(id)arg1 givenName:(id)arg2;
+ (id)predicateWithPhoneNumberOrEmail:(id)arg1;

@end
