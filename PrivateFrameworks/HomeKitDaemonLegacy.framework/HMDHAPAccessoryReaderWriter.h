
@interface HMDHAPAccessoryReaderWriter : NSObject <HMDHAPAccessoryReader, HMDHAPAccessoryWriter, HMFLogging> {
    <HMDHAPAccessoryReaderWriterDataSource> * _dataSource;
    HMDHome * _home;
    HMDHAPAccessoryTaskTracker * _tracker;
}

@property (readonly) <HMDHAPAccessoryReaderWriterDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) Class superclass;
@property (readonly) HMDHAPAccessoryTaskTracker *tracker;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_cannotForwardMessage:(id)arg1;
- (id /* block */)_completionHandlerWithContext:(id)arg1;
- (id)_defaultTaskForCurrentDeviceWithContext:(id)arg1 requests:(id)arg2;
- (bool)_isNotResidentDevice;
- (bool)_isPrimaryResidentDevice;
- (bool)_isSecondaryResidentDevice;
- (id)dataSource;
- (void)handleRemotelyUpdatedCharacteristicsMessage:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 dataSource:(id)arg2;
- (id)logIdentifier;
- (void)submitReadRequests:(id)arg1 sourceType:(unsigned long long)arg2 requestMessage:(id)arg3;
- (void)submitWriteRequests:(id)arg1 sourceType:(unsigned long long)arg2 requestMessage:(id)arg3;
- (id)tracker;

@end
