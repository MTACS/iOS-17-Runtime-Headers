
@interface SKAStatusReceivingManager : NSObject <SKAStatusReceivingManaging> {
    NSObject<OS_dispatch_queue> * _backgroundCleanupQueue;
    <SKADatabaseManaging> * _databaseManager;
    <SKAStatusReceivingManagingDelegate> * _delegate;
    <SKAStatusEncryptionManaging> * _encryptionManager;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *backgroundCleanupQueue;
@property (nonatomic, retain) <SKADatabaseManaging> *databaseManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKAStatusReceivingManagingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <SKAStatusEncryptionManaging> *encryptionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logger;

- (void).cxx_destruct;
- (id)backgroundCleanupQueue;
- (id)databaseManager;
- (id)delegate;
- (id)encryptionManager;
- (void)handleIncomingStatusData:(id)arg1 onChannelIdentifier:(id)arg2 dateReceived:(id)arg3 dateExpired:(id)arg4 serverTime:(id)arg5;
- (id)initWithDatabaseManager:(id)arg1 encryptionManager:(id)arg2 delegate:(id)arg3;
- (void)setBackgroundCleanupQueue:(id)arg1;
- (void)setDatabaseManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEncryptionManager:(id)arg1;

@end
