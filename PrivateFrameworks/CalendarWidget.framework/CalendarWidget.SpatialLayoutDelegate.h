
@interface CalendarWidget.SpatialLayoutDelegate : NSObject <CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  calendar;
    void displayedRect;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  endDate;
    void endHourToShow;
    void hoursInDay;
    void originIsUpperLeft;
    void scale;
    void secondsInDay;
    void secondsInHour;
    void secondsInMinute;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  startDate;
    void startHourToShow;
    void topPadding;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } displayedRect;
@property (nonatomic, readonly) double hourHeight;
@property (nonatomic) bool originIsUpperLeft;
@property (nonatomic, readonly) double timeWidth;
@property (nonatomic) double topPadding;

- (void).cxx_destruct;
- (double)RoundToScreenScale:(double)arg1;
- (double)dateForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })displayedRect;
- (double)hourHeight;
- (id)init;
- (bool)originIsUpperLeft;
- (struct CGPoint { double x1; double x2; })pointForDate:(double)arg1;
- (void)setOriginIsUpperLeft:(bool)arg1;
- (void)setTopPadding:(double)arg1;
- (double)timeWidth;
- (double)topPadding;

@end
