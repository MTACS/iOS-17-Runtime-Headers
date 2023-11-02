
@interface IMDPersistenceServiceClient : NSObject {
    void queue;
    void unlockedConnection;
}

@property (nonatomic, readonly) <IMDRemoteDatabaseProtocol> *remoteProxy;
@property (nonatomic, readonly) <IMDRemoteDatabaseProtocol> *synchronousRemoteProxy;

+ (void)setSharedClient:(id)arg1;
+ (id)sharedClient;

- (void).cxx_destruct;
- (id)init;
- (id)remoteProxy;
- (id)synchronousRemoteProxy;

@end
