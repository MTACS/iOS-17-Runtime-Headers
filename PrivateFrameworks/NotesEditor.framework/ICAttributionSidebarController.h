
@interface ICAttributionSidebarController : NSObject {
    double  _attributionSidebarGestureAcceptedDistanceX;
    NSNumber * _attributionSidebarGestureBaselineContentOffsetY;
    double  _attributionSidebarGestureBaselineX;
    bool  _attributionSidebarGestureHasBegunToOpen;
    double  _attributionSidebarGestureIgnoredDistanceX;
    NSDate * _attributionSidebarGestureStartTime;
    bool  _enabled;
    UIPanGestureRecognizer * _panGestureRecognizer;
    id /* block */  _sidebarWidthDidChangeHandler;
    ICTextView * _textView;
    ICTextViewController * _textViewController;
}

@property (nonatomic) double attributionSidebarGestureAcceptedDistanceX;
@property (nonatomic, retain) NSNumber *attributionSidebarGestureBaselineContentOffsetY;
@property (nonatomic) double attributionSidebarGestureBaselineX;
@property (nonatomic) bool attributionSidebarGestureHasBegunToOpen;
@property (nonatomic) double attributionSidebarGestureIgnoredDistanceX;
@property (nonatomic, retain) NSDate *attributionSidebarGestureStartTime;
@property (nonatomic, readonly) ICAttributionSidebarView *attributionSidebarView;
@property (nonatomic, readonly) long long attributionSidebarVisibility;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) ICNAEventReporter *eventReporter;
@property (nonatomic, copy) ICTTTextEditFilter *filter;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, copy) id /* block */ sidebarWidthDidChangeHandler;
@property (nonatomic, readonly) ICTextView *textView;
@property (nonatomic, retain) ICTextViewController *textViewController;

+ (id)keyPathsForValuesAffectingAttributionSidebarVisibility;

- (void).cxx_destruct;
- (double)attributionSidebarGestureAcceptedDistanceX;
- (id)attributionSidebarGestureBaselineContentOffsetY;
- (double)attributionSidebarGestureBaselineX;
- (bool)attributionSidebarGestureHasBegunToOpen;
- (double)attributionSidebarGestureIgnoredDistanceX;
- (id)attributionSidebarGestureStartTime;
- (id)attributionSidebarView;
- (long long)attributionSidebarVisibility;
- (void)cancelActiveGestures;
- (void)dealloc;
- (id)eventReporter;
- (id)filter;
- (void)handlePanGesture:(id)arg1;
- (void)hideSidebarAnimated:(bool)arg1;
- (void)hideSidebarAnimated:(bool)arg1 contextPath:(long long)arg2;
- (id)init;
- (id)initWithTextView:(id)arg1;
- (bool)isEnabled;
- (void)noteDidUpdateShare:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)panGestureRecognizer;
- (void)setAttributionSidebarGestureAcceptedDistanceX:(double)arg1;
- (void)setAttributionSidebarGestureBaselineContentOffsetY:(id)arg1;
- (void)setAttributionSidebarGestureBaselineX:(double)arg1;
- (void)setAttributionSidebarGestureHasBegunToOpen:(bool)arg1;
- (void)setAttributionSidebarGestureIgnoredDistanceX:(double)arg1;
- (void)setAttributionSidebarGestureStartTime:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFilter:(id)arg1;
- (void)setFilter:(id)arg1 animated:(bool)arg2;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setSidebarWidthDidChangeHandler:(id /* block */)arg1;
- (void)setTextViewController:(id)arg1;
- (void)showSidebarAnimated:(bool)arg1;
- (id /* block */)sidebarWidthDidChangeHandler;
- (id)textView;
- (id)textViewController;

@end
