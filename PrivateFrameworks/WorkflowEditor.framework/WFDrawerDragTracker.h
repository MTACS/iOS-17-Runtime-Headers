
@interface WFDrawerDragTracker : NSObject <WFDrawerDragTracking> {
    WFDrawerGestureCoordinator * _gestureCoordinator;
    double  _initialHeight;
    double  _maxTranslationY;
    double  _minTranslationY;
    bool  _tracking;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFDrawerGestureCoordinator *gestureCoordinator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double initialHeight;
@property (readonly) double maxTranslationY;
@property (readonly) double minTranslationY;
@property (readonly) Class superclass;
@property (nonatomic) bool tracking;

- (void).cxx_destruct;
- (void)beginDragging;
- (double)currentHeight;
- (void)endDragging;
- (void)endDraggingWithAnimation:(id)arg1;
- (id)gestureCoordinator;
- (id)initWithGestureCoordinator:(id)arg1;
- (double)initialHeight;
- (double)maxTranslationY;
- (double)minTranslationY;
- (void)setTracking:(bool)arg1;
- (bool)tracking;
- (void)updateDragForVerticalTranslation:(double)arg1;

@end
