
@interface EKDayViewContentItem : NSObject <CUIKSingleDayTimelineViewItem> {
    double  _bottomPinningProximity;
    long long  _currentRequestId;
    CUIKOROccurrenceState * _currentState;
    EKCalendarDate * _endDate;
    EKEvent * _event;
    unsigned long long  _eventIndex;
    bool  _hasPrecedingDuration;
    bool  _hasTrailingDuration;
    bool  _isLoadingAsync;
    bool  _isProposedTime;
    long long  _sizeClass;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _stagedFrame;
    CUIKORContentPayload * _stagedPayload;
    EKCalendarDate * _startDate;
    double  _topPinningProximity;
    double  _travelTime;
    double  _travelTimeHeight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unPinnedViewFrame;
    bool  _usesSmallText;
    EKDayOccurrenceView * _view;
    double  _visibleHeight;
    bool  _visibleHeightLocked;
}

@property (nonatomic) double bottomPinningProximity;
@property (nonatomic, readonly) CUIKOROccurrenceState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *end;
@property (nonatomic, copy) EKCalendarDate *endDate;
@property (nonatomic, readonly) double enoughHeightForOneLine;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (nonatomic, readonly) unsigned long long eventIndex;
@property (nonatomic) bool hasPrecedingDuration;
@property (nonatomic) bool hasTrailingDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideTravelTime;
@property (nonatomic) bool isLoadingAsync;
@property (nonatomic) bool isProposedTime;
@property (nonatomic, readonly) NSDate *start;
@property (nonatomic, copy) EKCalendarDate *startDate;
@property (nonatomic, readonly, copy) EKCalendarDate *startDateIncludingTravelTime;
@property (nonatomic, readonly) NSDate *startWithTravelTime;
@property (readonly) Class superclass;
@property (nonatomic) double topPinningProximity;
@property (nonatomic) double travelTime;
@property (nonatomic) double travelTimeHeight;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unPinnedViewFrame;
@property (nonatomic) bool usesSmallText;
@property (nonatomic, retain) EKDayOccurrenceView *view;
@property (nonatomic, readonly) double viewMaxNaturalTextHeight;
@property (nonatomic) double visibleHeight;
@property (readonly) bool visibleHeightLocked;

+ (double)barToBarHorizontalDistanceIncludingBarWidth;

- (void).cxx_destruct;
- (void)_requestPayloadAnimated:(bool)arg1 drawSynchronously:(bool)arg2;
- (void)_updateWithPayload:(id)arg1;
- (double)bottomPinningProximity;
- (id)currentState;
- (id)description;
- (id)end;
- (id)endDate;
- (double)enoughHeightForOneLine;
- (id)event;
- (id)eventIdentifier;
- (unsigned long long)eventIndex;
- (bool)hasPrecedingDuration;
- (bool)hasTrailingDuration;
- (bool)hideTravelTime;
- (id)initWithEventIndex:(unsigned long long)arg1 sizeClass:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isLoadingAsync;
- (bool)isPinned;
- (bool)isProposedTime;
- (void)resetVisibleHeight;
- (void)setBottomPinningProximity:(double)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setHasPrecedingDuration:(bool)arg1;
- (void)setHasTrailingDuration:(bool)arg1;
- (void)setIsLoadingAsync:(bool)arg1;
- (void)setIsProposedTime:(bool)arg1;
- (void)setStagedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStartDate:(id)arg1;
- (void)setTopPinningProximity:(double)arg1;
- (void)setTravelTime:(double)arg1;
- (void)setTravelTimeHeight:(double)arg1;
- (void)setUnPinnedViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUsesSmallText:(bool)arg1;
- (void)setView:(id)arg1;
- (void)setVisibleHeight:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stagedFrame;
- (id)start;
- (id)startDate;
- (id)startDateIncludingTravelTime;
- (id)startWithTravelTime;
- (double)topPinningProximity;
- (double)travelTime;
- (double)travelTimeHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unPinnedViewFrame;
- (bool)usesSmallText;
- (id)view;
- (double)viewMaxNaturalTextHeight;
- (double)visibleHeight;
- (bool)visibleHeightLocked;

@end
