
@interface MFSwiftIMAPTaskManager : NSObject <MFTaskManager> {
    void _engineAndAdaptor;
    void bodyFetchContext;
    void callbackQueue;
    void identifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void makeEngineAndAdaptor;
    void queue;
    void workloop;
    void workloopKey;
}

- (void).cxx_destruct;
- (void)accountDidChange:(id)arg1;
- (void)addLocalAction:(id)arg1;
- (void)checkForNewLocalActions;
- (void)closeAllConnections;
- (bool)createMailbox:(id)arg1;
- (void)dealloc;
- (bool)deleteMailbox:(id)arg1;
- (void)fetchNow:(int)arg1;
- (void)fetchNow:(int)arg1 withMailboxes:(id)arg2 completion:(id /* block */)arg3;
- (id)fetchSeparatorChar;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (void)localMailboxesDidChange;
- (bool)renameMailbox:(id)arg1 toMailbox:(id)arg2;
- (void)startBackFillingMessageBodyDownloadWithRequest:(id)arg1;
- (void)stopBackFillingMessageBodyDownload;
- (void)test_tearDown;

@end
