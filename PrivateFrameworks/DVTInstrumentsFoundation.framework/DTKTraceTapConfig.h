
@interface DTKTraceTapConfig : DTTapConfig {
    unsigned int  _kdebugTriggerIndex;
    id /* block */  _sessionHandler;
    id /* block */  _stackshotHandler;
}

@property (nonatomic) unsigned long long bufferSizeOverride;
@property (nonatomic) bool bufferSizeOverrideClamping;
@property (nonatomic) bool canUseRawKtraceFile;
@property (nonatomic) unsigned int kdebugTriggerIndex;
@property (nonatomic) unsigned char recordingPriority;
@property (nonatomic, copy) id /* block */ sessionHandler;
@property (nonatomic, copy) id /* block */ stackshotHandler;

+ (void)initialize;
+ (bool)localMachineSupportsPMC;
+ (bool)localMachineSupportsPMI;

- (void).cxx_destruct;
- (int)_addTriggerConfig:(id)arg1;
- (int)addTriggerConfig:(id)arg1;
- (unsigned long long)bufferSizeOverride;
- (bool)bufferSizeOverrideClamping;
- (bool)canUseRawKtraceFile;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)enumerateTriggerConfigs:(id /* block */)arg1;
- (id)init;
- (unsigned int)kdebugTriggerIndex;
- (unsigned char)recordingPriority;
- (id /* block */)sessionHandler;
- (void)setBufferSizeOverride:(unsigned long long)arg1;
- (void)setBufferSizeOverrideClamping:(bool)arg1;
- (void)setCanUseRawKtraceFile:(bool)arg1;
- (void)setKdebugTriggerIndex:(unsigned int)arg1;
- (void)setRecordingPriority:(unsigned char)arg1;
- (void)setSessionHandler:(id /* block */)arg1;
- (void)setStackshotHandler:(id /* block */)arg1;
- (id /* block */)stackshotHandler;
- (unsigned long long)triggerConfigCount;

@end
