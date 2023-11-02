
@interface BMComputeXPCSubscription : NSObject <NSSecureCoding> {
    id /* block */  _block;
    NSString * _client;
    NSXPCConnection * _connection;
    NSDate * _createdAt;
    BMDSL * _graph;
    NSString * _identifier;
    NSDate * _initialBookmarkTimestamp;
    bool  _pendingDemand;
    NSSet * _postMigrationStreamIdentifiers;
    NSSet * _streamIdentifiers;
    BMDSLSubscriber * _subscriber;
    unsigned long long  _token;
    NSString * _useCase;
    bool  _waking;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, copy) NSString *client;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic, readonly) BMDSL *graph;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) NSDate *initialBookmarkTimestamp;
@property (nonatomic) bool pendingDemand;
@property (nonatomic, readonly) NSSet *postMigrationStreamIdentifiers;
@property (nonatomic, readonly) NSSet *streamIdentifiers;
@property (nonatomic, readonly) BMDSLSubscriber *subscriber;
@property (nonatomic, readonly) unsigned long long token;
@property (getter=isUnclaimed, nonatomic, readonly) bool unclaimed;
@property (nonatomic, readonly, copy) NSString *useCase;
@property (nonatomic, readonly) bool waking;

+ (id)new;
+ (id)storageForIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)XPCEvent;
- (id /* block */)block;
- (id)client;
- (id)connection;
- (id)createdAt;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchBookmarkFromStorage:(id)arg1 error:(id*)arg2;
- (id)graph;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 client:(id)arg2 createdAt:(id)arg3 waking:(bool)arg4 DSLGraph:(id)arg5 subscriber:(id)arg6 block:(id /* block */)arg7;
- (id)initWithIdentifier:(id)arg1 client:(id)arg2 waking:(bool)arg3 DSLGraph:(id)arg4 block:(id /* block */)arg5;
- (id)initWithToken:(unsigned long long)arg1 descriptor:(id)arg2;
- (id)initialBookmarkTimestamp;
- (bool)isUnclaimed;
- (bool)pendingDemand;
- (id)postMigrationStreamIdentifiers;
- (void)setClient:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setInitialBookmarkTimestamp:(id)arg1;
- (void)setPendingDemand:(bool)arg1;
- (id)streamIdentifiers;
- (id)subscriber;
- (unsigned long long)token;
- (id)useCase;
- (bool)waking;

@end
