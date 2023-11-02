
@interface SAAppSizerResults : NSObject <NSSecureCoding> {
    NSMutableDictionary * _FSPurgeableData;
    NSMutableDictionary * _appData;
    NSMutableDictionary * _attributionTags;
    unsigned long long  _diskCapacity;
    unsigned long long  _diskUsed;
    NSMutableDictionary * _hiddenAppsData;
    NSMutableDictionary * _pathsList;
    NSDictionary * _reportedTelemetry;
    long long  _status;
    NSDictionary * _systemDataDetails;
    long long  _time;
}

@property (retain) NSMutableDictionary *FSPurgeableData;
@property (retain) NSDictionary *appData;
@property (retain) NSMutableDictionary *attributionTags;
@property unsigned long long diskCapacity;
@property unsigned long long diskUsed;
@property (retain) NSMutableDictionary *hiddenAppsData;
@property (retain) NSMutableDictionary *pathsList;
@property (retain) NSDictionary *reportedTelemetry;
@property long long status;
@property (retain) NSDictionary *systemDataDetails;
@property long long time;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)FSPurgeableData;
- (void)addSystemVolumeWithCapacity:(unsigned long long)arg1 used:(unsigned long long)arg2 withReplyBlock:(id /* block */)arg3;
- (id)appData;
- (id)attributionTags;
- (unsigned long long)diskCapacity;
- (unsigned long long)diskUsed;
- (void)encodeWithCoder:(id)arg1;
- (id)hiddenAppsData;
- (id)init;
- (unsigned char)initDiskUsedAndCapacity;
- (id)initWithCoder:(id)arg1;
- (id)mergeAppSet:(id)arg1 withAppSet:(id)arg2;
- (id)pathsList;
- (unsigned long long)postProcessFilteringWithAppPathList:(id)arg1;
- (void)postProcessMerging;
- (void)print;
- (void)removeBundleSet:(id)arg1;
- (id)reportedTelemetry;
- (void)setAppData:(id)arg1;
- (void)setAppSet:(id)arg1 withAppSize:(id)arg2;
- (void)setAttributionTags:(id)arg1;
- (void)setDiskCapacity:(unsigned long long)arg1;
- (void)setDiskUsed:(unsigned long long)arg1;
- (void)setDiskUsed:(unsigned long long)arg1 andCapacity:(unsigned long long)arg2;
- (void)setFSPurgeableData:(id)arg1;
- (void)setHiddenAppsData:(id)arg1;
- (void)setPathsList:(id)arg1;
- (void)setReportedTelemetry:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setSystemDataDetails:(id)arg1;
- (void)setTime:(long long)arg1;
- (long long)status;
- (id)systemDataDetails;
- (long long)time;
- (void)updateAppSet:(id)arg1 fixedSize:(unsigned long long)arg2 dataSize:(unsigned long long)arg3 cloneSize:(unsigned long long)arg4 purgeableSize:(unsigned long long)arg5 FSPurgeableSize:(unsigned long long)arg6 physicalSize:(unsigned long long)arg7 appCacheSize:(unsigned long long)arg8 CDPluginSize:(unsigned long long)arg9;
- (void)updateAppSet:(id)arg1 withAppSize:(id)arg2;
- (void)updateBundleID:(id)arg1 WithCloneSize:(unsigned long long)arg2;
- (void)updateBundleID:(id)arg1 withDataSize:(unsigned long long)arg2;
- (void)updateSystemDataDetailsWith:(id)arg1 andSize:(unsigned long long)arg2;
- (void)updateTimestamp;

@end
