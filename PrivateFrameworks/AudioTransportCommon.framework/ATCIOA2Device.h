
@interface ATCIOA2Device : NSObject {
    NSArray * _availableSampleRates;
    IOKConnection * _connection;
    struct IOAudio2EngineStatus { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } * _engineStatus;
    NSArray * _inputStreams;
    NSString * _name;
    IOKNotificationPort * _notificationPort;
    NSObject<OS_dispatch_source> * _notificationSource;
    NSArray * _outputStreams;
    NSObject<OS_dispatch_queue> * _queue;
    IOKService * _service;
    NSString * _uid;
}

@property (nonatomic, copy) NSArray *availableSampleRates;
@property (nonatomic, readonly) unsigned int clockDomain;
@property (nonatomic, readonly) unsigned int inputLatency;
@property (nonatomic, readonly) unsigned int inputSafetyOffset;
@property (nonatomic, copy) NSArray *inputStreams;
@property (nonatomic, readonly) unsigned int ioBufferSize;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned int outputLatency;
@property (nonatomic, readonly) unsigned int outputSafetyOffset;
@property (nonatomic, copy) NSArray *outputStreams;
@property (nonatomic, readonly) double sampleRate;
@property (nonatomic, readonly, copy) NSString *uid;

+ (id)iokitMatchingDictionary;

- (void).cxx_destruct;
- (id)_buildInputStreams;
- (id)_buildOutputStreams;
- (id)availableSampleRates;
- (bool)changeToSampleRate:(double)arg1 error:(id*)arg2;
- (unsigned int)clockDomain;
- (void)dealloc;
- (void)handleNotification:(struct IOAudio2Notification { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; }*)arg1;
- (id)initWithService:(id)arg1;
- (unsigned int)inputLatency;
- (unsigned int)inputSafetyOffset;
- (id)inputStreams;
- (unsigned int)ioBufferSize;
- (id)name;
- (unsigned int)outputLatency;
- (unsigned int)outputSafetyOffset;
- (id)outputStreams;
- (bool)performConfiigChangeForNotification:(struct IOAudio2Notification { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; }*)arg1 error:(id*)arg2;
- (double)sampleRate;
- (void)setAvailableSampleRates:(id)arg1;
- (void)setInputStreams:(id)arg1;
- (void)setOutputStreams:(id)arg1;
- (bool)startIOError:(id*)arg1;
- (bool)stopIOError:(id*)arg1;
- (id)uid;

@end
