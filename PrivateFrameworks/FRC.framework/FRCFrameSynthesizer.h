
@interface FRCFrameSynthesizer : NSObject {
    bool  _featureCreated;
    unsigned long long  _height;
    long long  _inputRotation;
    NSObject<OS_os_log> * _logger;
    FRCImageProcessor * _processor;
    bool  _resourcePreAllocated;
    <FRCSynthesis> * _synthesis;
    long long  _usage;
    unsigned long long  _width;
}

- (void).cxx_destruct;
- (void)allocateResources;
- (bool)checkForwardFlow:(struct __CVBuffer { }*)arg1 backwardFlow:(struct __CVBuffer { }*)arg2;
- (bool)configureSynthesisWithMode:(long long)arg1;
- (void)dealloc;
- (id)errorWithErrorCode:(long long)arg1;
- (id)initWithUsage:(long long)arg1;
- (id)initWithUsage:(long long)arg1 qualityMode:(long long)arg2;
- (void)releaseResources;
- (void)setFirstFrame:(struct __CVBuffer { }*)arg1 secondFrame:(struct __CVBuffer { }*)arg2 forwardFlow:(struct __CVBuffer { }*)arg3 backwardFlow:(struct __CVBuffer { }*)arg4;
- (void)synthesizeFrameForTimeScale:(float)arg1 destination:(struct __CVBuffer { }*)arg2;
- (void)synthesizeFrameFromFirstFrame:(struct __CVBuffer { }*)arg1 secondFrame:(struct __CVBuffer { }*)arg2 forwardFlow:(struct __CVBuffer { }*)arg3 backwardFlow:(struct __CVBuffer { }*)arg4 timeScale:(float)arg5 destination:(struct __CVBuffer { }*)arg6;
- (id)synthesizeFramesFromFirstFrame:(struct __CVBuffer { }*)arg1 secondFrame:(struct __CVBuffer { }*)arg2 forwardFlow:(struct __CVBuffer { }*)arg3 backwardFlow:(struct __CVBuffer { }*)arg4 numberOfFrames:(unsigned long long)arg5 withError:(id*)arg6;
- (id)synthesizeFramesFromFirstFrame:(struct __CVBuffer { }*)arg1 secondFrame:(struct __CVBuffer { }*)arg2 forwardFlow:(struct __CVBuffer { }*)arg3 backwardFlow:(struct __CVBuffer { }*)arg4 timeScales:(id)arg5 withError:(id*)arg6;

@end
