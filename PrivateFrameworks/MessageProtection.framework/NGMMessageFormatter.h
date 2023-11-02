
@interface NGMMessageFormatter : NSObject

+ (id)formatOutgoingInnerMessageWithPayload:(id)arg1 attributes:(id)arg2 destinationIdentity:(id)arg3 sendingIdentity:(id)arg4 error:(id*)arg5;
+ (id)formatOutgoingMessageWithEncryptedPayload:(id)arg1 ephemeral:(id)arg2 signature:(id)arg3 keyValidator:(id)arg4;

@end
