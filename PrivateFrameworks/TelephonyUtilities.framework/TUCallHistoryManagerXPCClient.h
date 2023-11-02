
@interface TUCallHistoryManagerXPCClient : NSObject <TUCallHistoryManagerDataSource, TUCallHistoryManagerXPCClient> {
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)asynchronousServer;
+ (id)callHistoryManagerAllowedClasses;
+ (id)callHistoryManagerClientXPCInterface;
+ (id)callHistoryManagerServerXPCInterface;
+ (void)setAsynchronousServer:(id)arg1;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleServerDisconnect;
- (id)init;
- (void)invalidate;
- (id)queue;
- (void)reportRecentCallForConversation:(id)arg1 withStartDate:(id)arg2;
- (id)serverWithErrorHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)synchronousServerWithErrorHandler:(id /* block */)arg1;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2;
- (id)xpcConnection;

@end
