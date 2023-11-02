
@interface CalendarWidget.SpatialEventViewModel : NSObject <CUIKSingleDayTimelineViewItem> {
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  event;
    void frame;
    void hideTravelTime;
    void id;
    void lineHeight;
    void travelTimeHeight;
    void unPinnedViewFrame;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  viewEndDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  viewStartDate;
    void visibleHeight;
    void visibleHeightLocked;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSDate *end;
@property (nonatomic, readonly) double enoughHeightForOneLine;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (nonatomic) bool hideTravelTime;
@property (nonatomic, readonly) NSDate *start;
@property (nonatomic, readonly) NSDate *startWithTravelTime;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unPinnedViewFrame;
@property (nonatomic, readonly) double viewMaxNaturalTextHeight;
@property (nonatomic) bool visibleHeightLocked;

+ (double)barToBarHorizontalDistanceIncludingBarWidth;

- (void).cxx_destruct;
- (id)description;
- (id)end;
- (double)enoughHeightForOneLine;
- (id)eventIdentifier;
- (bool)hideTravelTime;
- (id)init;
- (void)setHideTravelTime:(bool)arg1;
- (void)setStagedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTravelTimeHeight:(double)arg1;
- (void)setUnPinnedViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisibleHeight:(double)arg1;
- (void)setVisibleHeightLocked:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stagedFrame;
- (id)start;
- (id)startWithTravelTime;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unPinnedViewFrame;
- (double)viewMaxNaturalTextHeight;
- (bool)visibleHeightLocked;

@end
