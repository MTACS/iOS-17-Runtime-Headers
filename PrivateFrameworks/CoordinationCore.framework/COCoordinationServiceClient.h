
@interface COCoordinationServiceClient : NSObject <NSCopying> {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly, copy) NSString *clientBundleIdentifier;
@property (nonatomic, readonly) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (id)clientBundleIdentifier;
- (id)connection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithConnection:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
