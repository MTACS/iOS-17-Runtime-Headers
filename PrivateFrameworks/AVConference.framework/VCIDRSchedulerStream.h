
@interface VCIDRSchedulerStream : NSObject {
    unsigned int  _framePosition;
    unsigned int  _framerate;
    unsigned int  _framesPerIdrPeriod;
    unsigned int  _keyFrameInterval;
    unsigned int  _weightFactor;
}

@property (nonatomic) unsigned int framePosition;
@property (nonatomic) unsigned int framerate;
@property (nonatomic) unsigned int framesPerIdrPeriod;
@property (nonatomic) unsigned int keyFrameInterval;
@property (nonatomic) unsigned int weightFactor;

+ (id)schedulerStreamWithKeyFrameInterval:(unsigned int)arg1 framerate:(unsigned int)arg2 weightFactor:(unsigned int)arg3;

- (long long)compareWeightFactor:(id)arg1;
- (id)description;
- (unsigned int)framePosition;
- (unsigned int)framerate;
- (unsigned int)framesPerIdrPeriod;
- (id)initWithKeyFrameInterval:(unsigned int)arg1 framerate:(unsigned int)arg2 weightFactor:(unsigned int)arg3;
- (unsigned int)keyFrameInterval;
- (void)setFramePosition:(unsigned int)arg1;
- (void)setFramerate:(unsigned int)arg1;
- (void)setFramesPerIdrPeriod:(unsigned int)arg1;
- (void)setKeyFrameInterval:(unsigned int)arg1;
- (void)setWeightFactor:(unsigned int)arg1;
- (unsigned int)weightFactor;

@end
