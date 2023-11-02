
@interface MFSwiftIMAPMailboxTaskManager : NSObject <MFIMAPMailboxTaskManager> {
    void library;
    void mailbox;
    void taskManager;
}

@property (nonatomic, readonly) bool canFetchMessageIDs;
@property (nonatomic, retain) MFMailMessageLibrary *library;

- (void).cxx_destruct;
- (bool)canFetchMessageIDs;
- (void)close;
- (void)compact;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(bool)arg2;
- (bool)downloadMimePartNumber:(id)arg1 message:(id)arg2 withProgressBlock:(id /* block */)arg3;
- (id)fetchDataForMessage:(id)arg1 didDownload:(bool*)arg2;
- (id)fetchDataForMessage:(id)arg1 partial:(bool*)arg2;
- (bool)fetchDataForMimePart:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 isComplete:(bool*)arg3 consumer:(id)arg4;
- (id)fetchHeadersForMessage:(id)arg1;
- (long long)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (long long)fetchNumMessages:(long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;
- (void)growFetchWindow;
- (void)handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (id)init;
- (id)initWithMailbox:(id)arg1 taskManager:(id)arg2;
- (id)library;
- (id)messageIdRollCall:(id)arg1;
- (id)replayAction:(id)arg1;
- (void)reselectMailbox;
- (void)setLibrary:(id)arg1;
- (id)storeSearchResultMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 offset:(id)arg3 error:(id*)arg4;
- (void)updateServerUnreadCountClosingConnection:(bool)arg1;

@end
