
@interface AMDDataSync : NSObject {
    NSNumber * _deviceForgetThresholdDays;
    NSNumber * _eventLifetimeDays;
    NSNumber * _eventsDeltaSize;
    NSNumber * _fullSyncDeviceResetThresholdDays;
    NSNumber * _fullSyncEventsDeltaSize;
    NSString * _localDeviceId;
    NSArray * _streamsToSync;
}

@property (nonatomic, retain) NSNumber *deviceForgetThresholdDays;
@property (nonatomic, retain) NSNumber *eventLifetimeDays;
@property (nonatomic, retain) NSNumber *eventsDeltaSize;
@property (nonatomic, retain) NSNumber *fullSyncDeviceResetThresholdDays;
@property (nonatomic, retain) NSNumber *fullSyncEventsDeltaSize;
@property (nonatomic, retain) NSString *localDeviceId;
@property (nonatomic, retain) NSArray *streamsToSync;

+ (id)fetchDeviceID:(id*)arg1;
+ (id)generateDeviceIDFileAtLocation:(id)arg1 error:(id*)arg2;
+ (id)processDataReplicationPayload:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)clearUserDataForDevice:(id)arg1 fromTimestamp:(id)arg2;
- (id)createDeviceEntryWithDevicesData:(id)arg1 error:(id*)arg2;
- (id)deviceForgetThresholdDays;
- (id)eventLifetimeDays;
- (id)eventsDeltaSize;
- (id)fetch:(id)arg1 SortedEventListFromTimestamp:(id)arg2 forCurrentDevice:(bool)arg3 error:(id*)arg4;
- (id)fetch:(id)arg1 SortedEventListFromTimestamp:(id)arg2 onlyForCurrentDevice:(bool)arg3 forStream:(id)arg4 error:(id*)arg5;
- (id)fetchEventsForStream:(id)arg1 withPredicates:(id)arg2 error:(id*)arg3;
- (id)fetchLastReadTimestampFromPayload:(id)arg1;
- (id)fetchLastReadTimestampFromPayload:(id)arg1 forStream:(id)arg2;
- (id)filterEventsList:(id)arg1 withLastReadTimestamp:(id)arg2;
- (id)findAvailableDeviceForFullSyncIn:(id)arg1;
- (id)fullSyncDeviceResetThresholdDays;
- (id)fullSyncEventsDeltaSize;
- (id)generateFullSyncPayloadWithDevicesData:(id)arg1 error:(id*)arg2;
- (id)ingestDataFromDevice:(id)arg1 withDevicePayload:(id)arg2 forStream:(id)arg3 fromTimestamp:(id)arg4 error:(id*)arg5;
- (id)ingestEventsIntoCoreData:(id)arg1 withPreviousCheckpoint:(id*)arg2 andStreamCheckpointDict:(id)arg3 error:(id*)arg4;
- (id)ingestEventsIntoSQLite:(id)arg1 forStream:(id)arg2 withPreviousCheckpoint:(id*)arg3 andStreamCheckpointDict:(id)arg4 error:(id*)arg5;
- (void)ingestFullSyncEventsFor:(id)arg1 withDeviceData:(id)arg2 error:(id*)arg3;
- (id)initWithDataReplicationConfig:(id)arg1 error:(id*)arg2;
- (id)localDeviceId;
- (id)performDataReplicationPayloadUpdates:(id)arg1 withDeviceRegistry:(id)arg2 error:(id*)arg3;
- (void)performEventDeltaUpdateFor:(id)arg1 withDeviceData:(id)arg2 error:(id*)arg3;
- (id)pruneInactiveDevicesFrom:(id)arg1;
- (void)pushFullSyncDataFrom:(id)arg1 withDeviceData:(id)arg2 error:(id*)arg3;
- (void)setDeviceForgetThresholdDays:(id)arg1;
- (void)setEventLifetimeDays:(id)arg1;
- (void)setEventsDeltaSize:(id)arg1;
- (void)setFullSyncDeviceResetThresholdDays:(id)arg1;
- (void)setFullSyncEventsDeltaSize:(id)arg1;
- (void)setLocalDeviceId:(id)arg1;
- (void)setStreamsToSync:(id)arg1;
- (id)streamsToSync;
- (id)updateDataDeletionDict:(id)arg1 withDevicesData:(id)arg2 error:(id*)arg3;

@end
