
@interface ICNotesInvernessClientObjc : NSObject {
    void container;
    void environment;
    void localURLString;
}

@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) long long environment;
@property (nonatomic, readonly) NSString *localURLString;

- (void).cxx_destruct;
- (id)container;
- (void)didCompleteInstallOrUpdateWithPreviousBuildNumber:(id)arg1 previousVersion:(id)arg2 currentBuildNumber:(id)arg3 currentVersion:(id)arg4 platformName:(id)arg5 continuationToken:(id)arg6 callback:(id /* block */)arg7;
- (long long)environment;
- (id)init;
- (id)initWithContainer:(id)arg1 environment:(long long)arg2 localURLString:(id)arg3;
- (id)localURLString;
- (void)runGarbageCollectorWithProgress:(id)arg1 callback:(id /* block */)arg2;
- (void)sendMentionNotificationWithRecipientUserId:(id)arg1 senderName:(id)arg2 noteTitle:(id)arg3 mentionSnippet:(id)arg4 shareRecordName:(id)arg5 shareOwnerUserId:(id)arg6 noteRecordName:(id)arg7 inlineAttachmentRecordName:(id)arg8 callback:(id /* block */)arg9;

@end
