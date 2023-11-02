
@interface SignpostStreamEvent : SignpostEvent {
    unsigned long long  _serialNumber;
    NSObject<OS_dispatch_source> * _timeoutSource;
    unsigned long long  _totalFrameCount;
}

@property (nonatomic) unsigned long long _totalFrameCount;
@property (nonatomic) unsigned long long serialNumber;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutSource;

// Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (id)_dictionaryRepresentationWithIsHumanReadable:(bool)arg1 shouldRedact:(bool)arg2;
- (bool)_hasTotalSkyLightCompositeCount;
- (unsigned long long)_totalFrameCount;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)serialNumber;
- (void)setSerialNumber:(unsigned long long)arg1;
- (void)setTimeoutSource:(id)arg1;
- (void)set_totalFrameCount:(unsigned long long)arg1;
- (id)timeoutSource;

// Image: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection

- (id)initWithOSLogEventProxy:(id)arg1 shouldCompose:(bool)arg2 serialNumber:(unsigned long long)arg3 shouldCollectFrameInfo:(bool)arg4 timeoutInSec:(unsigned long long)arg5 timeoutHandlingQueue:(id)arg6 timeoutHandlingBlock:(id /* block */)arg7;

@end
