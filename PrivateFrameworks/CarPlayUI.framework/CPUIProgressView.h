
@interface CPUIProgressView : UIView {
    NSArray * _constraints;
    CADisplayLink * _displayLink;
    struct { 
        double snapshotTime; 
        double startTime; 
        double endTime; 
        double duration; 
        double elapsedDuration; 
        float rate; 
        float defaultRate; 
        bool isLiveContent; 
        bool isLoading; 
    }  _durationSnapshot;
    unsigned long long  _labelStyle;
    double  _lastTargetTimestamp;
    UILabel * _liveLabel;
    _CPUILiveTrackView * _liveTrackView;
    CPUIProgressBarView * _progressBarView;
    double  _progressBarViewHeight;
    double  _progressLabelHeight;
    bool  _showsProgressLabels;
    UILabel * _timeLabel;
    UILabel * _timeRemainingLabel;
}

@property (nonatomic, retain) UIColor *barColor;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; } durationSnapshot;
@property (nonatomic) bool showsProgressLabels;
@property (nonatomic, retain) UIColor *trackColor;

- (void).cxx_destruct;
- (void)_displayLinkTick:(id)arg1;
- (void)_updateLabelsForElapsedTime:(double)arg1 duration:(double)arg2;
- (void)_updateProgressForElapsedTime:(double)arg1 duration:(double)arg2;
- (id)barColor;
- (void)didMoveToWindow;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })durationSnapshot;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 progressBarHeight:(double)arg2 labelHeight:(double)arg3 labelStyle:(unsigned long long)arg4;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)pauseDisplayLinkIfNeeded;
- (void)runUntilNextDisplayLinkEvent;
- (void)setBarColor:(id)arg1;
- (void)setDurationSnapshot:(struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })arg1;
- (void)setShowsProgressLabels:(bool)arg1;
- (void)setTrackColor:(id)arg1;
- (void)setupConstraints;
- (bool)showsProgressLabels;
- (id)trackColor;
- (void)updateLocalizedDurationString:(id)arg1;

@end
