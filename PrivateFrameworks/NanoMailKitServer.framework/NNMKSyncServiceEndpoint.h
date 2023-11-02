
@interface NNMKSyncServiceEndpoint : NSObject {
    NSString * _idsServiceName;
    NSObject<OS_dispatch_source> * _repeatPreventionCleanupTimer;
    NSMutableDictionary * _repeatPreventionRecords;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    <NNMKSyncServiceTransport> * _serviceTransport;
}

@property (nonatomic, readonly) unsigned long long connectivityState;
@property (nonatomic, retain) NSString *idsServiceName;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *repeatPreventionCleanupTimer;
@property (nonatomic, retain) NSMutableDictionary *repeatPreventionRecords;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serviceQueue;
@property (nonatomic, retain) <NNMKSyncServiceTransport> *serviceTransport;

- (void).cxx_destruct;
- (void)_initializeServiceTransport;
- (void)_removeExpiredRepeatPreventionRecords;
- (void)_storeRepeatPreventionId:(id)arg1 priority:(unsigned long long)arg2;
- (bool)_willIdRepeat:(id)arg1;
- (void)connectivityChanged;
- (unsigned long long)connectivityState;
- (void)dealloc;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (id)idsServiceName;
- (id)initWithIDSServiceName:(id)arg1 queue:(id)arg2;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)readResourceAtURL:(id)arg1 metadata:(id)arg2;
- (id)repeatPreventionCleanupTimer;
- (id)repeatPreventionRecords;
- (void)resetRepeatPreventionHistory;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 repeatPreventionId:(id)arg4 timeoutCategory:(unsigned long long)arg5 allowCloudDelivery:(bool)arg6;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 allowCloudDelivery:(bool)arg5;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeoutCategory:(unsigned long long)arg4 allowCloudDelivery:(bool)arg5;
- (id)sendResourceAtURL:(id)arg1 metadata:(id)arg2 priority:(unsigned long long)arg3 timeoutCategory:(unsigned long long)arg4;
- (id)serviceQueue;
- (id)serviceTransport;
- (void)setIdsServiceName:(id)arg1;
- (void)setRepeatPreventionCleanupTimer:(id)arg1;
- (void)setRepeatPreventionRecords:(id)arg1;
- (void)setServiceQueue:(id)arg1;
- (void)setServiceTransport:(id)arg1;
- (void)spaceBecameAvailable;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (void)syncServiceTransport:(id)arg1 didFailSendingProtobufWithIdentifier:(id)arg2 errorCode:(long long)arg3;
- (void)syncServiceTransport:(id)arg1 didReadProtobufData:(id)arg2 type:(unsigned long long)arg3;
- (void)syncServiceTransport:(id)arg1 didRecieveDataAtURL:(id)arg2 metadata:(id)arg3;
- (void)syncServiceTransport:(id)arg1 didSendProtobufSuccessfullyWithIdentifier:(id)arg2;
- (void)syncServiceTransportDidChangeConnectivity:(id)arg1;
- (void)syncServiceTransportDidReportSpaceBecameAvailable:(id)arg1;

@end
