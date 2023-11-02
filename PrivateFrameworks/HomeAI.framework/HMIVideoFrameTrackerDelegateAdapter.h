
@interface HMIVideoFrameTrackerDelegateAdapter : HMFObject <HMIVideoFrameTrackerDelegate> {
    id /* block */  _frameTrackerDidTrackFrame;
}

@property (copy) id /* block */ frameTrackerDidTrackFrame;

- (void).cxx_destruct;
- (void)frameTracker:(id)arg1 didTrackFrame:(struct opaqueCMSampleBuffer { }*)arg2 background:(struct opaqueCMSampleBuffer { }*)arg3 motionDetections:(id)arg4 tracks:(id)arg5;
- (id /* block */)frameTrackerDidTrackFrame;
- (void)setFrameTrackerDidTrackFrame:(id /* block */)arg1;

@end
