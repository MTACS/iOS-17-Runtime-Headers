
@interface MSPSharedTripCapabilityLevelFetcher : NSObject <IDSBatchIDQueryControllerDelegate> {
    NSMutableDictionary * _identifierToMapsStatus;
    NSMutableDictionary * _identifierToMessagesStatus;
    IDSBatchIDQueryController * _mapsBatchController;
    IDSIDQueryController * _mapsInfoQueryController;
    NSMutableSet * _mapsStatusFetchQueue;
    IDSBatchIDQueryController * _messagesBatchController;
    NSMutableSet * _messagesStatusFetchQueue;
    GEOObserverHashTable * _observers;
    NSTimer * _retryAfterBackoffTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedFetcher;

- (void).cxx_destruct;
- (bool)_processResult:(id)arg1 forContainer:(id)arg2 fetchQueue:(id)arg3;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)cancelCapabilityLevelRequestForContact:(id)arg1;
- (unsigned long long)capabilityLevelForContact:(id)arg1;
- (void)fetchCapabilityLevelForContact:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchQueuesDidUpdate;
- (id)init;
- (void)notifyObservers;
- (bool)processMapsDictionary:(id)arg1;
- (bool)processMessagesDictionary:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)requestCapabilityLevelsForContacts:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
