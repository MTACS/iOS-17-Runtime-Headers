
@interface HVConsumerCoordinator : NSObject <HVQueueObserver> {
    _PASLock * _lock;
    NSString * _path;
    HVQueues * _queues;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSObject<OS_dispatch_group> * _waitingForLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultCoordinator;

- (void).cxx_destruct;
- (void)contentAvailableFromSources:(unsigned int)arg1;
- (bool)deleteContentWithRequest:(id)arg1 error:(id*)arg2;
- (void)disableConsumptionOfDataSources:(unsigned int)arg1;
- (void)enableConsumptionOfDataSources:(unsigned int)arg1;
- (bool)harvestContentWithMinimumLevelOfService:(unsigned char)arg1 ignoringDiscretionaryPowerBudget:(bool)arg2 error:(id*)arg3 shouldContinueBlock:(id /* block */)arg4;
- (id)init;
- (id)initWithQueues:(id)arg1 path:(id)arg2;
- (bool)registerInteractionConsumer:(id)arg1 levelOfService:(unsigned char)arg2;
- (bool)registerMailConsumer:(id)arg1 levelOfService:(unsigned char)arg2;
- (bool)registerMessagesConsumer:(id)arg1 levelOfService:(unsigned char)arg2;
- (bool)registerNewsConsumer:(id)arg1 levelOfService:(unsigned char)arg2;
- (bool)registerNotesConsumer:(id)arg1 levelOfService:(unsigned char)arg2;
- (bool)registerParsecConsumer:(id)arg1 levelOfService:(unsigned char)arg2;
- (bool)registerPhotosConsumer:(id)arg1 levelOfService:(unsigned char)arg2;
- (bool)registerRemindersConsumer:(id)arg1 levelOfService:(unsigned char)arg2;
- (bool)registerSafariConsumer:(id)arg1 levelOfService:(unsigned char)arg2;
- (bool)registerSiriConsumer:(id)arg1 levelOfService:(unsigned char)arg2;
- (bool)registerThirdPartyAppConsumer:(id)arg1 levelOfService:(unsigned char)arg2;
- (bool)registerUserActivityConsumer:(id)arg1 levelOfService:(unsigned char)arg2;
- (void)restoreConsumptionOfDataSources:(unsigned int)arg1;
- (id)statsWithError:(id*)arg1;

@end
