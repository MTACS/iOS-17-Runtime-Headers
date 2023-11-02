
@interface VCVideoQualityInfo : VCObject {
    double  _firstDegradedMeasure;
    bool  _isVideoQualityDegraded;
    double  _lastBadVideoQualityTime;
    double  _lastGoodVideoQualityTime;
    double  _lastVideoQualityDegradedSwitchTime;
    bool  _shouldUseExitHysteresis;
    double  _videoDegradedThreshold;
    double  _videoImprovedThreshold;
    bool  _videoIsExpected;
    double  _videoMinFrameRate;
}

@property (nonatomic, readonly) bool isVideoQualityDegraded;
@property (nonatomic) bool videoIsExpected;

- (void)dealloc;
- (id)init;
- (bool)isVideoQualityDegraded;
- (void)resetLastGoodVideoQualityTime:(double)arg1;
- (void)setVideoIsExpected:(bool)arg1;
- (bool)updateWithCurrentFramerate:(double)arg1 bitrate:(double)arg2 time:(double)arg3;
- (bool)videoIsExpected;

@end
