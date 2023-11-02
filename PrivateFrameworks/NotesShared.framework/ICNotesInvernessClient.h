
@interface ICNotesInvernessClient : NSObject {
    ICNotesInvernessClientObjc * _objcClient;
}

@property (nonatomic, retain) ICNotesInvernessClientObjc *objcClient;

- (void).cxx_destruct;
- (void)didCompleteInstallOrUpdateWithPreviousBuildNumber:(id)arg1 previousVersion:(id)arg2 currentBuildNumber:(id)arg3 currentVersion:(id)arg4 platformName:(id)arg5 continuationToken:(id)arg6 callback:(id /* block */)arg7;
- (id)initWithContainer:(id)arg1;
- (id)objcClient;
- (void)runGarbageCollectorWithProgress:(id)arg1 callback:(id /* block */)arg2;
- (void)sendMentionNotificationWithRecipientUserId:(id)arg1 senderName:(id)arg2 noteTitle:(id)arg3 mentionSnippet:(id)arg4 shareRecordName:(id)arg5 shareOwnerUserId:(id)arg6 noteRecordName:(id)arg7 inlineAttachmentRecordName:(id)arg8 callback:(id /* block */)arg9;
- (void)setObjcClient:(id)arg1;

@end
