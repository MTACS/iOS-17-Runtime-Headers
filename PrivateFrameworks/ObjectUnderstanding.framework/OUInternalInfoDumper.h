
@interface OUInternalInfoDumper : NSObject {
    NSMutableArray * _coachingDebug;
    NSMutableArray * _driftDebug;
    bool  _enableARFrameDepth;
    bool  _enableARFrameDump;
    bool  _enableARFrameRGB;
    bool  _enableLiveDump;
    double  _firstARFrameTime;
    NSMutableArray * _floorPlanDebug;
    NSMutableDictionary * _keyframeMeta;
    NSMutableArray * _keyframesDebug;
    <OUFrame> * _lastARFrame;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _lastCameraPose;
    NSDate * _lastKeyframeTime;
    NSString * _loggingDirectory;
    double  _maxKeyframeFPS;
    NSObject<OS_dispatch_group> * _save_group;
    NSObject<OS_dispatch_queue> * _save_queue;
    NSMutableArray * _sysDebug;
}

@property (nonatomic) bool enableARFrameDepth;
@property (nonatomic) bool enableARFrameDump;
@property (nonatomic) bool enableARFrameRGB;
@property (nonatomic) bool enableLiveDump;

+ (id)serailizeARFrameMeta:(id)arg1;

- (void).cxx_destruct;
- (void)createDirectory:(id)arg1;
- (void)dumpARFrame:(id)arg1 withKeyFrames:(id)arg2 withCameraPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (void)dumpLastARFrameImage;
- (void)dumpObjects:(id)arg1;
- (bool)enableARFrameDepth;
- (bool)enableARFrameDump;
- (bool)enableARFrameRGB;
- (bool)enableLiveDump;
- (id)encodeDepthPng:(struct __CVBuffer { }*)arg1;
- (id)encodePng:(struct __CVBuffer { }*)arg1;
- (id)encodeRGBPng:(struct __CVBuffer { }*)arg1 withWidth:(unsigned long long)arg2 Height:(unsigned long long)arg3;
- (id)getDebugInfoWithConfig:(id)arg1 OnlineDebug:(id)arg2;
- (id)init;
- (void)logKeyFrame:(id)arg1 WithSkip:(bool)arg2;
- (void)logMemory:(unsigned long long)arg1;
- (void)reset;
- (void)setEnableARFrameDepth:(bool)arg1;
- (void)setEnableARFrameDump:(bool)arg1;
- (void)setEnableARFrameRGB:(bool)arg1;
- (void)setEnableLiveDump:(bool)arg1;
- (void)setFirstARFrame:(id)arg1;
- (void)setLastARFrame:(id)arg1 withCameraPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (void)setUpInternalDumpWithLogDir:(id)arg1 enable:(bool)arg2;

@end
