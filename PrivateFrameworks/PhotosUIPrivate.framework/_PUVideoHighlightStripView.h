
@interface _PUVideoHighlightStripView : UIView {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentTime;
    long long  _currentTimeRangeIndex;
    UIColor * _highlightColor;
    NSArray * _highlightTimeRanges;
    NSArray * _highlightViews;
    bool  _isPlaying;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoDuration;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } currentTime;
@property (nonatomic) long long currentTimeRangeIndex;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) NSArray *highlightTimeRanges;
@property (nonatomic) bool isPlaying;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } videoDuration;

- (void).cxx_destruct;
- (void)_updateBarsExpanded;
- (void)_updateCurrentTimeRangeIndex;
- (void)_updateHighlightViews;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (long long)currentTimeRangeIndex;
- (id)highlightColor;
- (id)highlightTimeRanges;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOpaque;
- (bool)isPlaying;
- (void)layoutSubviews;
- (void)setCurrentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCurrentTimeRangeIndex:(long long)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightTimeRanges:(id)arg1;
- (void)setIsPlaying:(bool)arg1;
- (void)setVideoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoDuration;

@end
