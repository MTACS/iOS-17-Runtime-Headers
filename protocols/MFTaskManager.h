
@protocol MFTaskManager

@required

- (void)addLocalAction:(ECLocalMessageAction *)arg1;
- (void)checkForNewLocalActions;
- (void)closeAllConnections;
- (bool)createMailbox:(NSString *)arg1;
- (bool)deleteMailbox:(NSString *)arg1;
- (void)fetchNow:(int)arg1;
- (void)fetchNow:(void *)arg1 withMailboxes:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: int, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (NSString *)fetchSeparatorChar;
- (void)localMailboxesDidChange;
- (bool)renameMailbox:(NSString *)arg1 toMailbox:(NSString *)arg2;
- (void)startBackFillingMessageBodyDownloadWithRequest:(id <MFBackFillingMessageBodyDownloadRequest>)arg1;
- (void)stopBackFillingMessageBodyDownload;
- (void)test_tearDown;

@end
