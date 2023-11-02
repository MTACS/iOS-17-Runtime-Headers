
@interface CHDatabaseClientHandleManager : CHSynchronizedLoggable {
    CallHistoryDBClientHandle * _databaseClientHandle;
}

@property (nonatomic, readonly) CallHistoryDBClientHandle *databaseClientHandle;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)databaseClientHandle;
- (id)init;

@end
