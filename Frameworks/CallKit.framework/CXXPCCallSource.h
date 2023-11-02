
@interface CXXPCCallSource : CXCallSource {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    NSSet * _capabilities;
    NSXPCConnection * _connection;
    bool  _hasVoIPBackgroundMode;
    NSString * _localizedName;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic, readonly, copy) NSSet *capabilities;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, readonly) bool hasVoIPBackgroundMode;

- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (struct { unsigned int x1[8]; })auditToken;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)capabilities;
- (id)connection;
- (void)dealloc;
- (bool)hasVoIPBackgroundMode;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (bool)isConnected;
- (bool)isPermittedToUseBluetoothAccessories;
- (bool)isPermittedToUsePrivateAPI;
- (bool)isPermittedToUsePublicAPI;
- (id)localizedName;
- (int)processIdentifier;
- (void)setConnection:(id)arg1;
- (id)vendorProtocolDelegate;

@end
