
@interface _RWIApplicationInfo : NSObject {
    long long  _automationAvailability;
    NSString * _bundleId;
    _RWIRelayConnectionToApplication * _connection;
    unsigned long long  _debuggerAvailability;
    NSString * _debuggerConnectionIdentifier;
    bool  _hasRemoteDebugSession;
    bool  _hasUpdatedFromListing;
    int  _hostApplicationPID;
    NSString * _name;
    int  _pid;
    bool  _proxy;
}

@property (nonatomic, readonly) long long automationAvailability;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic) _RWIRelayConnectionToApplication *connection;
@property (nonatomic) unsigned long long debuggerAvailability;
@property (nonatomic, copy) NSString *debuggerConnectionIdentifier;
@property (nonatomic, readonly) bool hasRemoteDebugSession;
@property (nonatomic, readonly) bool hasUpdatedFromListing;
@property (nonatomic) int hostApplicationPID;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) int pid;
@property (getter=isProxy, nonatomic) bool proxy;

+ (id)identifierForPID:(int)arg1;

- (void).cxx_destruct;
- (long long)automationAvailability;
- (id)bundleId;
- (id)connection;
- (unsigned long long)debuggerAvailability;
- (id)debuggerConnectionIdentifier;
- (id)dictionaryRepresentation;
- (bool)hasRemoteDebugSession;
- (bool)hasUpdatedFromListing;
- (int)hostApplicationPID;
- (id)identifier;
- (id)initWithPID:(int)arg1 bundleId:(id)arg2 name:(id)arg3 isProxy:(bool)arg4 connection:(id)arg5 debuggerAvailability:(unsigned long long)arg6;
- (bool)isProxy;
- (id)name;
- (int)pid;
- (void)setBundleId:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDebuggerAvailability:(unsigned long long)arg1;
- (void)setDebuggerConnectionIdentifier:(id)arg1;
- (void)setHostApplicationPID:(int)arg1;
- (void)setName:(id)arg1;
- (void)setProxy:(bool)arg1;
- (bool)updateFromListing:(id)arg1;

@end
