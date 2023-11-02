
@interface PXFocusTimelineView : UIView {
    NSMutableArray * _animatableFocusEvents;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentTrackingTime;
    <PXFocusTimelineViewDelegate> * _delegate;
    bool  _dimmed;
    NSMutableArray * _focusEvents;
    UIView * _focusEventsView;
    PXFocusTimelineEvent * _objectTrackingEvent;
    UIView * _progressView;
    bool  _skipLayoutUpdates;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
    UIImageView * _trackImageView;
    bool  _viewCanBeEnabled;
    double  _zoomMaxValue;
    double  _zoomMinValue;
    bool  _zoomed;
}

@property (nonatomic, readonly) UIImage *autoFocusEventMarkerImage;
@property (nonatomic) <PXFocusTimelineViewDelegate> *delegate;
@property (nonatomic) bool dimmed;
@property (nonatomic) bool skipLayoutUpdates;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (nonatomic, readonly) UIImage *userInitiatedFocusEventMarkerImage;
@property (nonatomic) bool viewCanBeEnabled;

- (void).cxx_destruct;
- (void)_addEventToTimeline:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_animateFocusChangeFrom:(id)arg1 to:(id)arg2 completion:(id /* block */)arg3;
- (id)_axDescriptionForFocusEvent:(id)arg1;
- (struct CGPoint { double x1; double x2; })_closestTickPointToPointOnTrack:(struct CGPoint { double x1; double x2; })arg1;
- (id)_eventAtLocation:(struct CGPoint { double x1; double x2; })arg1 threshold:(double)arg2;
- (id)_imageViewForFocusEvent:(id)arg1;
- (bool)_isEventWithinZoomRange:(id)arg1;
- (bool)_isTickWithinActiveTrackRange:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_trackFrame;
- (struct CGPoint { double x1; double x2; })_trackPointFromTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_updateTrack;
- (void)_updateTrackingProgress;
- (double)_zoomAdjustedTickGap;
- (void)addFocusEvent:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 userInitiated:(bool)arg2 shouldAnimate:(bool)arg3;
- (id)autoFocusEventMarkerImage;
- (id)delegate;
- (bool)dimmed;
- (void)enableUIForCinematographyScriptLoad:(bool)arg1;
- (void)handleEventSelectedAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)objectTrackingFinishedWithSuccess:(bool)arg1;
- (void)objectTrackingStartedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)resetTimeline;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setSkipLayoutUpdates:(bool)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setViewCanBeEnabled:(bool)arg1;
- (void)setZoomMinValue:(double)arg1 maxValue:(double)arg2;
- (bool)skipLayoutUpdates;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (void)unzoom;
- (void)updateObjectTrackingProgressAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 shouldStop:(bool*)arg2;
- (void)updateTimeline;
- (id)userInitiatedFocusEventMarkerImage;
- (bool)viewCanBeEnabled;

@end
