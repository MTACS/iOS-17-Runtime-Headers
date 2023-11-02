
@interface RCPScreenRecorder : NSObject {
    double  _maxDuration;
    bool  _recording;
    NSObject<OS_dispatch_queue> * _snapshotQueue;
    NSMutableArray * _snapshots;
}

@property (nonatomic) double maxDuration;
@property (getter=isRecording, nonatomic, readonly) bool recording;
@property (nonatomic, readonly) NSArray *snapshots;

+ (id)takeScreenshot;
+ (id)takeScreenshot:(double)arg1;

- (void).cxx_destruct;
- (bool)isRecording;
- (double)maxDuration;
- (void)setMaxDuration:(double)arg1;
- (void)snapshot;
- (id)snapshots;
- (void)startRecording;
- (void)stopRecording;

@end
