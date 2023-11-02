
@interface IMCommSafetySummary : NSObject

+ (id)primaryiCloudAccountIdentifier;
+ (id)recipientStrings:(id)arg1;
+ (void)registerEvent:(unsigned long long)arg1 eventType:(unsigned long long)arg2 messageGUID:(id)arg3 chat:(id)arg4 forImages:(id)arg5;
+ (void)registerEvent:(unsigned long long)arg1 eventType:(unsigned long long)arg2 messageGUID:(id)arg3 chat:(id)arg4 forImages:(id)arg5 childID:(id)arg6 deviceID:(id)arg7 senderID:(id)arg8 eventSender:(id /* block */)arg9;

@end
