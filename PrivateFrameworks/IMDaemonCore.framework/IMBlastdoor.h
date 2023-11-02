
@interface IMBlastdoor : NSObject

+ (void)_askToTapToRadarForGUID:(id)arg1 messageTypeString:(id)arg2 sender:(id)arg3 errorString:(id)arg4 payloadAttachmentURL:(id)arg5;
+ (bool)_commandReadyForBlastdoor:(long long)arg1;
+ (long long)_convertErrorToBlastdoorError:(id)arg1;
+ (bool)_messageBlastdoorMetricsEnabled;
+ (id)blastdoorInterfaceForSenderContext:(id)arg1;
+ (id)logger;
+ (void)sendBlastDoorError:(id)arg1 guid:(id)arg2 messageTypeString:(id)arg3 senderURI:(id)arg4 senderToken:(id)arg5 messageContext:(id)arg6 payloadAttachmentURL:(id)arg7;
+ (void)sendClearNoticeData:(id)arg1 senderContext:(id)arg2 withCompletionBlock:(id /* block */)arg3;
+ (void)sendCollaborationNoticeActionDictionary:(id)arg1 senderContext:(id)arg2 withCompletionBlock:(id /* block */)arg3;
+ (void)sendCollaborationNoticeData:(id)arg1 senderContext:(id)arg2 withCompletionBlock:(id /* block */)arg3;
+ (void)sendDictionary:(id)arg1 senderContext:(id)arg2 withCompletionBlock:(id /* block */)arg3;
+ (void)sendSMSDictionary:(id)arg1 withCompletionBlock:(id /* block */)arg2;
+ (bool)supportsFeature:(id)arg1;

@end
