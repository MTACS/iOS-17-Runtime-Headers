
@interface CSAudioStreamRequest : NSObject <NSCopying> {
    long long  _audioFormat;
    unsigned long long  _clientIdentity;
    unsigned int  _encoderBitRate;
    unsigned int  _lpcmBitDepth;
    bool  _lpcmIsFloat;
    unsigned int  _numberOfChannels;
    CSAudioRecordContext * _recordContext;
    bool  _requestListeningMicIndicatorLock;
    bool  _requestRecordModeLock;
    bool  _requestSkipClientMonitorUpdate;
    bool  _requiresHistoricalBuffer;
    double  _sampleRate;
    bool  _useCustomizedRecordSettings;
}

@property (nonatomic) long long audioFormat;
@property (nonatomic) unsigned long long clientIdentity;
@property (nonatomic) unsigned int encoderBitRate;
@property (nonatomic) unsigned int lpcmBitDepth;
@property (nonatomic) bool lpcmIsFloat;
@property (nonatomic) unsigned int numberOfChannels;
@property (nonatomic, retain) CSAudioRecordContext *recordContext;
@property (nonatomic) bool requestListeningMicIndicatorLock;
@property (nonatomic) bool requestRecordModeLock;
@property (nonatomic) bool requestSkipClientMonitorUpdate;
@property (nonatomic) bool requiresHistoricalBuffer;
@property (nonatomic) double sampleRate;
@property (nonatomic) bool useCustomizedRecordSettings;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpcObject;

+ (id)defaultRequestWithContext:(id)arg1;
+ (id)requestForLpcmRecordSettingsWithContext:(id)arg1;
+ (id)requestForOpusRecordSettingsWithContext:(id)arg1;
+ (id)requestForSpeexRecordSettingsWithContext:(id)arg1;

- (void).cxx_destruct;
- (long long)audioFormat;
- (unsigned long long)clientIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)encoderBitRate;
- (id)initTandemWithRequest:(id)arg1;
- (id)initWithXPCObject:(id)arg1;
- (unsigned int)lpcmBitDepth;
- (bool)lpcmIsFloat;
- (unsigned int)numberOfChannels;
- (id)recordContext;
- (bool)requestListeningMicIndicatorLock;
- (bool)requestRecordModeLock;
- (bool)requestSkipClientMonitorUpdate;
- (bool)requiresHistoricalBuffer;
- (double)sampleRate;
- (void)setAudioFormat:(long long)arg1;
- (void)setClientIdentity:(unsigned long long)arg1;
- (void)setEncoderBitRate:(unsigned int)arg1;
- (void)setLpcmBitDepth:(unsigned int)arg1;
- (void)setLpcmIsFloat:(bool)arg1;
- (void)setNumberOfChannels:(unsigned int)arg1;
- (void)setRecordContext:(id)arg1;
- (void)setRequestListeningMicIndicatorLock:(bool)arg1;
- (void)setRequestRecordModeLock:(bool)arg1;
- (void)setRequestSkipClientMonitorUpdate:(bool)arg1;
- (void)setRequiresHistoricalBuffer:(bool)arg1;
- (void)setSampleRate:(double)arg1;
- (void)setUseCustomizedRecordSettings:(bool)arg1;
- (bool)useCustomizedRecordSettings;
- (id)xpcObject;

@end
