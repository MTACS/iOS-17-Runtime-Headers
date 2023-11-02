
@interface BWDeferredCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    unsigned int  _commitDurationInMilliseconds;
    int  _error;
    bool  _fileBacked;
    unsigned int  _flushDurationInMilliseconds;
    int  _processingType;
}

@property (nonatomic) unsigned int commitDurationInMilliseconds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int error;
@property (nonatomic) bool fileBacked;
@property (nonatomic) unsigned int flushDurationInMilliseconds;
@property (readonly) unsigned long long hash;
@property (nonatomic) int processingType;
@property (readonly) Class superclass;

- (unsigned int)commitDurationInMilliseconds;
- (void)dealloc;
- (int)error;
- (id)eventDictionary;
- (id)eventName;
- (bool)fileBacked;
- (unsigned int)flushDurationInMilliseconds;
- (id)init;
- (int)processingType;
- (void)reset;
- (void)setCommitDurationInMilliseconds:(unsigned int)arg1;
- (void)setError:(int)arg1;
- (void)setFileBacked:(bool)arg1;
- (void)setFlushDurationInMilliseconds:(unsigned int)arg1;
- (void)setProcessingType:(int)arg1;

@end
