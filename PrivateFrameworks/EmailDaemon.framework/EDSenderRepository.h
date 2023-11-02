
@interface EDSenderRepository : NSObject {
    <EFScheduler> * _persistenceScheduler;
    EDSenderPersistence * _senderPersistence;
}

@property (nonatomic, readonly) <EFScheduler> *persistenceScheduler;
@property (nonatomic, readonly) EDSenderPersistence *senderPersistence;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithSenderPersistence:(id)arg1;
- (id)persistenceScheduler;
- (id)senderPersistence;
- (void)simpleAddressesForRelevantSendersForSearchWithCompletionHandler:(id /* block */)arg1;

@end
