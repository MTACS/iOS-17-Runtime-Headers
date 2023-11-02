
@interface JFXCapturePreviewFrameStats : NSObject {
    bool  _dropped;
    double  _frameTimes;
}

@property (nonatomic) bool dropped;
@property (nonatomic, readonly) double*times;

- (bool)dropped;
- (void)printLabels;
- (void)printStats;
- (void)setDropped:(bool)arg1;
- (double*)times;

@end
