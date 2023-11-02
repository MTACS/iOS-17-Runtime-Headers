
@interface CPUIPlaybackProgressView : UIView {
    UIView * _currentProgressView;
    bool  _highlighted;
    UIView * _overallProgressView;
    double  _playbackProgress;
    bool  _shouldResizeCurrentProgress;
}

@property (nonatomic, retain) UIView *currentProgressView;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) UIView *overallProgressView;
@property (nonatomic) double playbackProgress;
@property (nonatomic) bool shouldResizeCurrentProgress;

- (void).cxx_destruct;
- (id)currentProgressView;
- (bool)highlighted;
- (id)init;
- (void)layoutSubviews;
- (id)overallProgressView;
- (double)playbackProgress;
- (void)setCurrentProgressView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOverallProgressView:(id)arg1;
- (void)setPlaybackProgress:(double)arg1;
- (void)setProgressViewHighlighted:(bool)arg1;
- (void)setShouldResizeCurrentProgress:(bool)arg1;
- (bool)shouldResizeCurrentProgress;

@end
