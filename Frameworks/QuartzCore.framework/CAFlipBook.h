
@interface CAFlipBook : NSObject {
    unsigned int  _contextId;
    unsigned int  _displayId;
    NSMutableArray * _frames;
    unsigned int  _generation;
    bool  _inverted;
    unsigned long long  _lastFrameId;
    unsigned long long  _maximumMemoryUsageForDiagnostics;
    unsigned long long  _maximumSize;
    bool  _powerSavingEnabled;
    unsigned int  _serverPort;
    bool  _wantsTransform;
}

@property (nonatomic) unsigned int contextId;
@property (getter=isInverted, nonatomic) bool inverted;
@property (nonatomic) unsigned long long maximumMemoryUsageForDiagnostics;
@property (nonatomic) bool powerSavingEnabled;
@property (nonatomic) bool wantsTransform;

- (void)_collectFlipBookFrames;
- (id)_frameById:(unsigned long long)arg1;
- (id)_initWithDisplayId:(unsigned int)arg1 options:(id)arg2;
- (id)activeFrames;
- (id)cancel;
- (void)collect;
- (unsigned int)contextId;
- (id)copyCurrentFrame;
- (void)dealloc;
- (id)description;
- (id)frameAtTime:(unsigned long long)arg1;
- (bool)isInverted;
- (unsigned long long)maximumMemoryUsageForDiagnostics;
- (unsigned long long)memoryUsage;
- (bool)powerSavingEnabled;
- (void)purge;
- (id)renderForTime:(unsigned long long)arg1 options:(id)arg2 userInfo:(id)arg3 error:(id*)arg4;
- (void)setContextId:(unsigned int)arg1;
- (void)setInverted:(bool)arg1;
- (void)setMaximumMemoryUsageForDiagnostics:(unsigned long long)arg1;
- (void)setPowerSavingEnabled:(bool)arg1;
- (void)setWantsTransform:(bool)arg1;
- (bool)wantsTransform;

@end
