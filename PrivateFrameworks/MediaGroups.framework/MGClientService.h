
@interface MGClientService : NSObject <MGClientConnectionProviderDelegateProtocol, MGClientInterfaceProtocol, MGServiceInterfaceProtocol> {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <MGClientConnectionProviderProtocol> * _provider;
    NSDictionary * _queries;
    bool  _shouldAttemptReconnect;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MGClientConnectionProviderProtocol> *provider;
@property (nonatomic, copy) NSDictionary *queries;
@property (nonatomic) bool shouldAttemptReconnect;
@property (readonly) Class superclass;

+ (id)clientServiceWithConnectionProvider:(id)arg1;

- (void).cxx_destruct;
- (void)HomeKitAccessoryOfType:(id)arg1 accessoryIdentifier:(id)arg2 homeIdentifier:(id)arg3 categoryType:(id)arg4 name:(id)arg5 properties:(id)arg6 completion:(id /* block */)arg7;
- (void)addMember:(id)arg1 group:(id)arg2 completion:(id /* block */)arg3;
- (id)connection;
- (void)connectionProvider:(id)arg1 serviceLost:(id)arg2;
- (void)connectionProviderServiceAvailable:(id)arg1;
- (void)createGroupWithType:(id)arg1 name:(id)arg2 members:(id)arg3 completion:(id /* block */)arg4;
- (void)deleteGroup:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithConnectionProvider:(id)arg1;
- (id)provider;
- (id)queries;
- (void)query:(id)arg1 didUpdate:(id)arg2 completion:(id /* block */)arg3;
- (void)removeMember:(id)arg1 group:(id)arg2 completion:(id /* block */)arg3;
- (void)setConnection:(id)arg1;
- (void)setName:(id)arg1 group:(id)arg2 completion:(id /* block */)arg3;
- (void)setQueries:(id)arg1;
- (void)setShouldAttemptReconnect:(bool)arg1;
- (bool)shouldAttemptReconnect;
- (void)startQueryWithPredicate:(id)arg1 completion:(id /* block */)arg2;
- (void)stopQuery:(id)arg1 completion:(id /* block */)arg2;

@end
