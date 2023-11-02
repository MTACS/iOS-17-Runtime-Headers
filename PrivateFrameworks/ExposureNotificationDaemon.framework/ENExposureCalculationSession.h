
@interface ENExposureCalculationSession : NSObject {
    NSNumber * _advertisementSampleCountThreshold;
    bool  _allowRecursiveReportType;
    NSNumber * _allowedRPIBroadcastDuration;
    unsigned char  _attenuationDurationThresholds;
    bool  _cacheExposureInfo;
    bool  _cacheExposureWindows;
    unsigned long long  _cachedExposureWindowCount;
    unsigned int  _cachedExposureWindowMetadataCount;
    unsigned int  _cachedScanInstanceCount;
    unsigned int  _droppedScanInstanceCount;
    ENExposureConfiguration * _exposureConfiguration;
    struct { unsigned int x1; long long x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; } * _exposureWindowMetadataBuffer;
    struct { unsigned int x1; double x2; unsigned char x3; unsigned char x4; unsigned short x5; } * _scanInstanceBuffer;
    unsigned int  _scanInstanceBufferSize;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, copy) NSNumber *advertisementSampleCountThreshold;
@property (nonatomic) bool allowRecursiveReportType;
@property (nonatomic, copy) NSNumber *allowedRPIBroadcastDuration;
@property (nonatomic) bool cacheExposureInfo;
@property (nonatomic) bool cacheExposureWindows;
@property (nonatomic, readonly) unsigned long long cachedExposureInfoCount;
@property (nonatomic, readonly) unsigned long long cachedExposureWindowCount;
@property (nonatomic, readonly) unsigned int droppedScanInstanceCount;
@property (nonatomic, copy) ENExposureConfiguration *exposureConfiguration;

- (void).cxx_destruct;
- (bool)_shouldMatchKey:(id)arg1;
- (id)advertisementSampleCountThreshold;
- (bool)allowRecursiveReportType;
- (id)allowedRPIBroadcastDuration;
- (id)attenuationDurationMapDataForExposureWindows:(id)arg1;
- (bool)cacheExposureInfo;
- (bool)cacheExposureWindows;
- (unsigned long long)cachedExposureInfoCount;
- (unsigned long long)cachedExposureWindowCount;
- (id)cachedExposuresDifferentialPrivacyRiskParameters;
- (void)dealloc;
- (unsigned int)droppedScanInstanceCount;
- (void)enumerateCachedExposureInfo:(id /* block */)arg1;
- (void)enumerateCachedExposureInfo:(id /* block */)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withBatchSize:(unsigned int)arg3;
- (void)enumerateCachedExposureInfo:(id /* block */)arg1 withBatchSize:(unsigned int)arg2;
- (void)enumerateCachedExposureWindows:(id /* block */)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withBatchSize:(unsigned int)arg3;
- (void)enumerateCachedExposureWindows:(id /* block */)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withBatchSize:(unsigned int)arg3 options:(long long)arg4;
- (id)exposureConfiguration;
- (id)exposureInfoForExposureWindows:(id)arg1 key:(id)arg2;
- (id)exposureInfoForMatchedAdvertisements:(id)arg1 key:(id)arg2;
- (id)exposureInfosForEachExposureWindow:(id)arg1 key:(id)arg2;
- (id)exposureWindowsForMatchedAdvertisements:(id)arg1 key:(id)arg2;
- (id)exposureWindowsForMatchedAdvertisements:(id)arg1 key:(id)arg2 options:(long long)arg3;
- (id)filterAdvertisements:(id)arg1 fromKey:(id)arg2;
- (id)groupExposureWindowsByDay:(id)arg1;
- (id)groupExposureWindowsByInfectiousness:(id)arg1;
- (id)initWithAttenuationThreshold:(unsigned char)arg1 capacity:(unsigned int)arg2;
- (struct { unsigned int x1; double x2; unsigned char x3; unsigned char x4; unsigned short x5; })scanInstanceFromAdvertisement:(id)arg1 key:(id)arg2;
- (void)setAdvertisementSampleCountThreshold:(id)arg1;
- (void)setAllowRecursiveReportType:(bool)arg1;
- (void)setAllowedRPIBroadcastDuration:(id)arg1;
- (void)setCacheExposureInfo:(bool)arg1;
- (void)setCacheExposureWindows:(bool)arg1;
- (void)setExposureConfiguration:(id)arg1;
- (unsigned char)weightedAttenuationValueForDurations:(unsigned int*)arg1;

@end
