
@interface BWMotionDataTimeMachine : NSObject {
    NSMutableArray * _cache;
    bool  _cacheEntireMetadataDictionary;
    unsigned long long  _capacity;
    unsigned long long  _earliestAvailableMotionDataSerialNumber;
    unsigned long long  _latestAvailableMotionDataSerialNumber;
    NSArray * _motionMetadataKeys;
    struct OpaqueFigSimpleMutex { } * _propertyMutex;
    NSArray * _sampleBufferAttachmentKeys;
    bool  _synchronizedSlaveMotionDataCachingEnabled;
}

@property (readonly) unsigned long long earliestAvailableMotionDataSerialNumber;
@property (readonly) unsigned long long latestAvailableMotionDataSerialNumber;
@property (readonly) bool synchronizedSlaveMotionDataCachingEnabled;

+ (void)initialize;

- (unsigned long long)addMotionDataToCacheForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)copyMotionDataForSerialNumber:(unsigned long long)arg1;
- (id)copyMotionDataForStartingSerialNumber:(unsigned long long)arg1 endingSerialNumber:(unsigned long long)arg2;
- (void)dealloc;
- (unsigned long long)earliestAvailableMotionDataSerialNumber;
- (id)initWithCapacity:(unsigned long long)arg1 synchronizedSlaveMotionDataCachingEnabled:(bool)arg2 cacheEntireMetadataDictionary:(bool)arg3;
- (unsigned long long)latestAvailableMotionDataSerialNumber;
- (bool)synchronizedSlaveMotionDataCachingEnabled;

@end
