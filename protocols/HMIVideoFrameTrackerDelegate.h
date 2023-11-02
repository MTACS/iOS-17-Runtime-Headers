
@protocol HMIVideoFrameTrackerDelegate

@required

- (void)frameTracker:(HMIVideoFrameTracker *)arg1 didTrackFrame:(struct opaqueCMSampleBuffer { }*)arg2 background:(struct opaqueCMSampleBuffer { }*)arg3 motionDetections:(NSArray *)arg4 tracks:(NSSet *)arg5;

@end
