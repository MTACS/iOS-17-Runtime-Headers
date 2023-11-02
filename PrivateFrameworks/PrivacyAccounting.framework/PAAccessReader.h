
@interface PAAccessReader : NSObject {
    NSXPCConnection * _connection;
    <PAAccessReaderDelegate> * _delegate;
    BOOL  _enabledState;
    int  _enablementChangedNotificationToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    PAAccessReaderSandboxExtension * _sandboxExtension;
    NSArray * _streams;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property <PAAccessReaderDelegate> *delegate;
@property bool loggingEnabled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (bool)exportFromPublisher:(id)arg1 toStream:(id)arg2 error:(id*)arg3;
+ (bool)exportFromPublisher:(id)arg1 toStream:(id)arg2 withCancellationToken:(id)arg3 error:(id*)arg4;
+ (id)fileNameForExport;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (void)exportToFileHandle:(id)arg1 completion:(id /* block */)arg2;
- (id)getOrCreateStreamsWithError:(id*)arg1;
- (void)handleEnabledChangeNotification;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 enablementChangedNotificationName:(id)arg3;
- (id)initWithQueue:(id)arg1;
- (void)lockedAssertValidEnabledState;
- (bool)lockedEnsureSandboxExtensionWithError:(id*)arg1;
- (void)lockedNotifyDidSetLoggingEnabled:(bool)arg1;
- (void)lockedSetEnabledStateForLoggingEnabled:(bool)arg1;
- (bool)loggingEnabled;
- (id)publisherForAll;
- (id)publisherForAllSince:(double)arg1 error:(id*)arg2;
- (id)publisherForAllSince:(id)arg1 until:(id)arg2 reversed:(bool)arg3 error:(id*)arg4;
- (id)publisherForReportWithError:(id*)arg1;
- (id)queue;
- (id)requestSandboxExtensionWithError:(id*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabledStateForLoggingEnabled:(bool)arg1;
- (void)setLoggingEnabled:(bool)arg1;

@end
