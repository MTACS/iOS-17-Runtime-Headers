
@interface SCLSchoolModeXPCClient : NSObject <SCLSchoolModeXPCClient> {
    long long  _clientState;
    SCLSchoolModeConfiguration * _configuration;
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    long long  _connectionState;
    <SCLSchoolModeXPCClientDelegate> * _delegate;
    unsigned long long  _lastServerRestartTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    int  _restartNotificationToken;
    SCLSchoolModeServerSettings * _serverSettings;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _timebase;
}

@property (nonatomic) long long clientState;
@property (nonatomic, retain) SCLSchoolModeConfiguration *configuration;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) long long connectionState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SCLSchoolModeXPCClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastServerRestartTime;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, readonly) SCLScheduleSettings *scheduleSettings;
@property (nonatomic, readonly) SCLState *state;
@property (readonly) Class superclass;
@property (nonatomic) struct mach_timebase_info { unsigned int x1; unsigned int x2; } timebase;

- (void).cxx_destruct;
- (void)_connectionDidInterrupt;
- (void)_connectionDidInvalidate;
- (bool)_makeConnection:(id)arg1;
- (void)_reconnectToServer;
- (void)addUnlockHistoryItem:(id)arg1 completion:(id /* block */)arg2;
- (void)applyScheduleSettings:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)applyServerSettings:(id)arg1;
- (long long)clientState;
- (id)configuration;
- (id)connection;
- (long long)connectionState;
- (void)dealloc;
- (id)delegate;
- (void)deleteHistoryWithCompletion:(id /* block */)arg1;
- (oneway void)didChangeUnlockHistory;
- (void)dumpState;
- (void)fetchRecentUnlockHistoryItemsWithCompletion:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (void)invalidate;
- (bool)isLoaded;
- (unsigned long long)lastServerRestartTime;
- (void)noteSignificantUserInteraction;
- (void)resume;
- (id)scheduleSettings;
- (id)serverWithErrorHandler:(id /* block */)arg1;
- (void)setActive:(bool)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)setClientState:(long long)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastServerRestartTime:(unsigned long long)arg1;
- (void)setTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg1;
- (id)state;
- (struct mach_timebase_info { unsigned int x1; unsigned int x2; })timebase;
- (void)triggerRemoteSync;

@end
