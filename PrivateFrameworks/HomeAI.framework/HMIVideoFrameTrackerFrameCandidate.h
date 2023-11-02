
@interface HMIVideoFrameTrackerFrameCandidate : HMFObject {
    NSArray * _motionDetections;
    struct opaqueCMSampleBuffer { } * _sbuf;
    float  _score;
    NSSet * _tracks;
}

@property (readonly) NSArray *motionDetections;
@property (readonly) struct opaqueCMSampleBuffer { }*sbuf;
@property (readonly) float score;
@property (readonly) NSSet *tracks;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 score:(float)arg2 motionDetections:(id)arg3 tracks:(id)arg4;
- (id)motionDetections;
- (struct opaqueCMSampleBuffer { }*)sbuf;
- (float)score;
- (id)tracks;

@end
