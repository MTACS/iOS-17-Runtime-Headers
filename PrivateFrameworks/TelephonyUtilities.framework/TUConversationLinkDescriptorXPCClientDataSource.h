
@interface TUConversationLinkDescriptorXPCClientDataSource : NSObject <TUConversationLinkDescriptorDataSource, TUConversationLinkDescriptorXPCClient, TUConversationLinkKeyValueDataSource> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessorLock;
    <TUConversationLinkDescriptorDataSourceDelegate> * _conversationLinkDescriptorDataSourceDelegate;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessorLock;
@property (nonatomic, retain) <TUConversationLinkDescriptorDataSourceDelegate> *conversationLinkDescriptorDataSourceDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)asynchronousServer;
+ (id)clientXPCInterface;
+ (id)serverXPCInterface;
+ (void)setAsynchronousServer:(id)arg1;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;

- (void).cxx_destruct;
- (struct os_unfair_lock_s { unsigned int x1; })accessorLock;
- (void)addConversationLinkDescriptors:(id)arg1 completion:(id /* block */)arg2;
- (bool)addConversationLinkDescriptors:(id)arg1 error:(id*)arg2;
- (void)addOrUpdateConversationLinkDescriptors:(id)arg1 completion:(id /* block */)arg2;
- (bool)addOrUpdateConversationLinkDescriptors:(id)arg1 error:(id*)arg2;
- (id)asynchronousServerWithErrorHandler:(id /* block */)arg1;
- (void)conversationLinkDescriptorCountWithPredicate:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)conversationLinkDescriptorCountWithPredicate:(id)arg1 error:(id*)arg2;
- (id)conversationLinkDescriptorDataSourceDelegate;
- (void)conversationLinkDescriptorsDidChange;
- (void)conversationLinkDescriptorsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)conversationLinkDescriptorsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)init;
- (void)integerForKey:(id)arg1 completion:(id /* block */)arg2;
- (long long)integerForKey:(id)arg1 error:(id*)arg2;
- (void)removeConversationLinkDescriptorsWithPredicate:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)removeConversationLinkDescriptorsWithPredicate:(id)arg1 error:(id*)arg2;
- (void)setActivated:(bool)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)setActivated:(bool)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 error:(id*)arg4;
- (void)setConversationLinkDescriptorDataSourceDelegate:(id)arg1;
- (void)setExpirationDate:(id)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)setExpirationDate:(id)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 error:(id*)arg4;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (bool)setInteger:(long long)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setInvitedHandles:(id)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)setInvitedHandles:(id)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 error:(id*)arg4;
- (void)setName:(id)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)setName:(id)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(id)arg3 error:(id*)arg4;
- (void)setString:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (bool)setString:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setXpcConnection:(id)arg1;
- (void)stringForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)stringForKey:(id)arg1 error:(id*)arg2;
- (id)synchronousServerWithErrorHandler:(id /* block */)arg1;
- (id)xpcConnection;

@end
