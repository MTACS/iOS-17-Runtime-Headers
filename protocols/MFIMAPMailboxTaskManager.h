
@protocol MFIMAPMailboxTaskManager

@required

- (bool)canFetchMessageIDs;
- (void)close;
- (void)compact;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(bool)arg2;
- (bool)downloadMimePartNumber:(void *)arg1 message:(void *)arg2 withProgressBlock:(void *)arg3; // needs 3 arg types, found 10: NSString *, MFMailMessage<MFIMAPMessage> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, unsigned long long, void*
- (NSData *)fetchDataForMessage:(MFMailMessage<MFIMAPMessage> *)arg1 didDownload:(bool*)arg2;
- (NSData *)fetchDataForMessage:(MFLibraryMessage *)arg1 partial:(bool*)arg2;
- (bool)fetchDataForMimePart:(MFMimePart *)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 isComplete:(bool*)arg3 consumer:(MFProgressFilterDataConsumer *)arg4;
- (NSData *)fetchHeadersForMessage:(MFLibraryMessage *)arg1;
- (long long)fetchMessagesWithMessageIDs:(NSSet *)arg1 andSetFlags:(unsigned long long)arg2;
- (long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(NSString *)arg2 options:(unsigned long long)arg3;
- (void)growFetchWindow;
- (void)handleFlagsChangedForMessages:(NSArray *)arg1 flags:(NSDictionary *)arg2 oldFlagsByMessage:(NSDictionary *)arg3;
- (MFMailMessageLibrary *)library;
- (NSSet *)messageIdRollCall:(NSSet *)arg1;
- (ECLocalMessageActionResults *)replayAction:(ECLocalMessageAction *)arg1;
- (void)reselectMailbox;
- (void)setLibrary:(MFMailMessageLibrary *)arg1;
- (MFMailMessageStoreSearchResult *)storeSearchResultMatchingCriterion:(MFMessageCriterion *)arg1 limit:(unsigned int)arg2 offset:(NSDate *)arg3 error:(id*)arg4;
- (void)updateServerUnreadCountClosingConnection:(bool)arg1;

@end
