
@protocol HMBMirrorProtocol <NSObject>

@required

- (NAFuture *)destroy;
- (NAFuture *)flush;
- (NAFuture *)shutdown;
- (NAFuture *)startUp;
- (void)startUpWithLocalZone:(HMBLocalZone *)arg1;
- (NAFuture *)triggerOutputForOutputRow:(unsigned long long)arg1 options:(HMBProcessingOptions *)arg2;
- (<HMBLocalZoneID> *)zoneID;

@end
