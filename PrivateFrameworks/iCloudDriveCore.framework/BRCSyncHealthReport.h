
@interface BRCSyncHealthReport : NSObject {
    unsigned long long  _blockedZonesCount;
    unsigned long long  _clientTruthDirFaultCount;
    unsigned long long  _clientTruthTotalItemsCount;
    NSMutableSet * _downloadFailures;
    BRDSIDString * _dsid;
    NSString * _rampNumber;
    unsigned long long  _serverTruthDirCount;
    unsigned long long  _serverTruthDirFaultCount;
    unsigned long long  _serverTruthTotalItemsCount;
    NSMutableDictionary * _syncDownErrorsByMangledID;
    NSMutableDictionary * _syncUpErrorsByMangledID;
    NSMutableSet * _syncUpFailures;
    unsigned long long  _timeSinceLogin;
    unsigned long long  _totalZoneCount;
    NSMutableSet * _uploadFailures;
    unsigned long long  _zonesNeverFullSync;
}

@property (nonatomic, readonly) unsigned long long blockedZonesCount;
@property (nonatomic, readonly) unsigned long long clientTruthDirFaultCount;
@property (nonatomic, readonly) unsigned long long clientTruthTotalItemsCount;
@property (nonatomic, readonly) NSSet *downloadFailures;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSString *rampNumber;
@property (nonatomic, readonly) unsigned long long serverTruthDirCount;
@property (nonatomic, readonly) unsigned long long serverTruthDirFaultCount;
@property (nonatomic, readonly) unsigned long long serverTruthTotalItemsCount;
@property (nonatomic, readonly) NSDictionary *syncDownErrorsByMangledID;
@property (nonatomic, readonly) NSDictionary *syncUpErrorsByMangledID;
@property (nonatomic, readonly) NSSet *syncUpFailures;
@property (nonatomic, readonly) NSArray *telemetryErrorEvents;
@property (nonatomic, readonly) NSArray *telemetryOtherEvents;
@property (nonatomic, readonly) unsigned long long timeSinceLogin;
@property (nonatomic, readonly) unsigned long long totalZoneCount;
@property (nonatomic, readonly) NSSet *uploadFailures;
@property (nonatomic, readonly) unsigned long long zonesNeverFullSync;

- (void).cxx_destruct;
- (void)_fillTransferFailure:(id)arg1 withRowID:(unsigned long long)arg2 atDate:(id)arg3 session:(id)arg4;
- (id)_injectionForAnalyticsServiceCode:(int)arg1;
- (unsigned long long)blockedZonesCount;
- (unsigned long long)clientTruthDirFaultCount;
- (unsigned long long)clientTruthTotalItemsCount;
- (id)downloadFailures;
- (id)dsid;
- (void)generateReportWithSession:(id)arg1;
- (id)getRampNumberForSession:(id)arg1;
- (id)init;
- (id)rampNumber;
- (unsigned long long)serverTruthDirCount;
- (unsigned long long)serverTruthDirFaultCount;
- (unsigned long long)serverTruthTotalItemsCount;
- (id)syncDownErrorsByMangledID;
- (void)syncErrors:(id /* block */)arg1;
- (id)syncUpErrorsByMangledID;
- (id)syncUpFailures;
- (id)telemetryErrorEvents;
- (id)telemetryOtherEvents;
- (unsigned long long)timeSinceLogin;
- (unsigned long long)totalZoneCount;
- (id)uploadFailures;
- (unsigned long long)zonesNeverFullSync;

@end
