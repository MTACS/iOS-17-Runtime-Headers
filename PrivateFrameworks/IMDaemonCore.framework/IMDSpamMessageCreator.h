
@interface IMDSpamMessageCreator : NSObject

- (bool)_isMessageMMS:(id)arg1 forChat:(id)arg2;
- (void)_reportToIDSTextMessageSpam:(id)arg1;
- (void)_reportToIDSiMessageSpam:(id)arg1;
- (bool)_textMessageReportToIDSAllowedForMessageItem:(id)arg1 chat:(id)arg2 notifyInternalSecurity:(bool)arg3;
- (void)addTextMessageJunkKeysToReportMessageDictionary:(id)arg1 forMessage:(id)arg2 chat:(id)arg3 receiverURI:(id)arg4;
- (void)addiMessageJunkKeysToReportMessageDictionary:(id)arg1 forMessage:(id)arg2 withGUID:(id)arg3 contentLength:(unsigned long long)arg4 chat:(id)arg5;
- (bool)hasDataDetectedInformalPayment:(id)arg1;
- (bool)isSurfPayment:(id)arg1;
- (id)metaDataForSurfURL:(id)arg1;
- (void)reportMessageDictionariesForMessages:(id)arg1 withLastAddressedHandle:(id)arg2 maxMessageLength:(unsigned long long)arg3 isAutoReport:(bool)arg4 withChat:(id)arg5 maxMessagesToReport:(unsigned long long)arg6 totalMessageCount:(unsigned long long*)arg7 notifyInternalSecurity:(bool)arg8 isJunkReportedToCarrier:(bool)arg9 iMessageReportSpamDictionaries:(id)arg10 textMessageReportSpamDictionaries:(id)arg11;
- (void)reportUnknownToIDS:(id)arg1 messageID:(id)arg2 isBlackholed:(bool)arg3 isiMessageJunk:(bool)arg4 messageServerTimestamp:(id)arg5 toURI:(id)arg6;
- (id)surfURLForIMMessageItem:(id)arg1;
- (id)transferForGuid:(id)arg1;

@end
