
@interface _GCIPCRemoteProcess : NSObject <_GCIPCProcess> {
    int  _auditSessionIdentifier;
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSString * _bundleIdentifier;
    NSMutableSet * _connectionInvalidationRegistrations;
    NSArray * _connections;
    unsigned int  _effectiveGroupIdentifier;
    unsigned int  _effectiveUserIdentifier;
    int  _processIdentifier;
}

@property (readonly) int auditSessionIdentifier;
@property (readonly) struct { unsigned int x1[8]; } auditToken;
@property (readonly) NSString *bundleIdentifier;
@property (nonatomic, retain) NSMutableSet *connectionInvalidationRegistrations;
@property (copy) NSArray *connections;
@property (readonly) unsigned int effectiveGroupIdentifier;
@property (readonly) unsigned int effectiveUserIdentifier;
@property (readonly) int processIdentifier;

- (void).cxx_destruct;
- (void)addConnection:(id)arg1;
- (int)auditSessionIdentifier;
- (struct { unsigned int x1[8]; })auditToken;
- (id)bundleIdentifier;
- (id)connectionInvalidationRegistrations;
- (id)connections;
- (id)debugDescription;
- (id)description;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToProcess:(id)arg1;
- (void)populateBundleIdentifierForConnection:(id)arg1;
- (int)processIdentifier;
- (id)redactedDescription;
- (void)setConnectionInvalidationRegistrations:(id)arg1;
- (void)setConnections:(id)arg1;

@end
