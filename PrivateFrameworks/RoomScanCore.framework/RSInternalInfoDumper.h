
@interface RSInternalInfoDumper : NSObject {
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
    <RSFrame> * _lastARFrame;
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

- (void).cxx_destruct;
- (id)init;

@end
