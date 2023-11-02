
@interface DTTapConfig : NSObject <NSCopying> {
    <DTTapBulkDataReceiver> * _bulkDataReceiver;
    NSMutableDictionary * _dict;
    bool  _filePreservation;
    id /* block */  _recordingInfoHandler;
    id /* block */  _runningMetadataChangedHandler;
    NSString * _serviceName;
    long long  _serviceVersion;
    id /* block */  _statusHandler;
    NSString * _uuid;
}

@property (nonatomic) unsigned long long bufferMode;
@property (nonatomic) <DTTapBulkDataReceiver> *bulkDataReceiver;
@property (nonatomic) bool discardHeartbeatsWhenPossible;
@property (nonatomic) bool filePreservation;
@property (nonatomic, readonly) bool isDeferredDisplay;
@property (nonatomic) unsigned long long pollingInterval;
@property (nonatomic, copy) id /* block */ recordingInfoHandler;
@property (nonatomic, copy) id /* block */ runningMetadataChangedHandler;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic) long long serviceVersion;
@property (nonatomic, copy) id /* block */ statusHandler;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic) unsigned long long windowSize;

- (void).cxx_destruct;
- (void)_dispatchStatus:(unsigned int)arg1 timestamp:(unsigned long long)arg2 notice:(id)arg3 info:(id)arg4;
- (id)_getSerializableObjectForKey:(id)arg1;
- (void)_removeSerializableObjectForKey:(id)arg1;
- (void)_runningMetadataChanged:(id)arg1;
- (void)_setSerializableObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)bufferMode;
- (id)bulkDataReceiver;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)discardHeartbeatsWhenPossible;
- (bool)filePreservation;
- (id)init;
- (id)initWithPlist:(id)arg1;
- (bool)isDeferredDisplay;
- (id)plist;
- (unsigned long long)pollingInterval;
- (id /* block */)recordingInfoHandler;
- (void)refreshUUID;
- (id /* block */)runningMetadataChangedHandler;
- (id)serviceName;
- (long long)serviceVersion;
- (void)setBufferMode:(unsigned long long)arg1;
- (void)setBulkDataReceiver:(id)arg1;
- (void)setDiscardHeartbeatsWhenPossible:(bool)arg1;
- (void)setFilePreservation:(bool)arg1;
- (void)setIsDeferredDisplay:(bool)arg1;
- (void)setPollingInterval:(unsigned long long)arg1;
- (void)setRecordingInfoHandler:(id /* block */)arg1;
- (void)setRunningMetadataChangedHandler:(id /* block */)arg1;
- (void)setServiceName:(id)arg1;
- (void)setServiceVersion:(long long)arg1;
- (void)setSpoolToDiskWhenPossible:(bool)arg1;
- (void)setStatusHandler:(id /* block */)arg1;
- (void)setUuid:(id)arg1;
- (void)setWindowSize:(unsigned long long)arg1;
- (bool)spoolToDiskWhenPossible;
- (id /* block */)statusHandler;
- (id)uuid;
- (unsigned long long)windowSize;

@end
