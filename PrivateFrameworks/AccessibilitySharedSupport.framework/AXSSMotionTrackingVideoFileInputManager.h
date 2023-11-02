
@interface AXSSMotionTrackingVideoFileInputManager : NSObject {
    bool  __monitoring;
    NSMutableArray * __videoFileInputNames;
    <AXSSMotionTrackingVideoFileInputManagerDelegate> * _delegate;
}

@property (nonatomic) bool _monitoring;
@property (nonatomic, retain) NSMutableArray *_videoFileInputNames;
@property (nonatomic) <AXSSMotionTrackingVideoFileInputManagerDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *videoFileInputNames;

+ (bool)allowVideoFileInput;

- (void).cxx_destruct;
- (bool)_monitoring;
- (void)_update;
- (id)_videoFileInputNames;
- (void)_videoFileInputNamesChanged:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)set_monitoring:(bool)arg1;
- (void)set_videoFileInputNames:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)videoFileInputNames;

@end
