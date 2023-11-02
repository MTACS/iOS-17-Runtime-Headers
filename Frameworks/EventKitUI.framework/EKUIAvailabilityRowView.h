
@interface EKUIAvailabilityRowView : UIView {
    UIActivityIndicatorView * _activityIndicator;
    bool  _isLoading;
    EKParticipant * _participant;
    NSMutableArray * _spanViews;
    NSMutableArray * _spans;
    NSDate * _startOfDay;
}

@property (readonly) bool isLoading;
@property (readonly) EKParticipant *participant;
@property (readonly) NSArray *spans;

+ (double)cornerRadius;
+ (double)padInset;

- (void).cxx_destruct;
- (void)addToSpans:(id)arg1;
- (void)completedLoad;
- (double)convertDateIntoOffset:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSpanView:(id)arg1;
- (id)initWithParticipant:(id)arg1;
- (bool)isLoading;
- (id)participant;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)spans;
- (void)startLoadForDate:(id)arg1;
- (void)updateSpanViews;

@end
