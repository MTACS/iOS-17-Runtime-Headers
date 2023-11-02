
@interface SBIndirectTouchLifecycleMonitor : NSObject <UIGestureRecognizerDelegate> {
    UIHoverGestureRecognizer * _hoverGestureRecognizer;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIHoverGestureRecognizer *hoverGestureRecognizer;
@property (nonatomic, retain) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)handleHoverEvent:(id)arg1;
- (id)hoverGestureRecognizer;
- (id)initWithSystemGestureManager:(id)arg1;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setHoverGestureRecognizer:(id)arg1;
- (void)setObservers:(id)arg1;
- (struct CGPoint { double x1; double x2; })systemGestureHoverLocationInView:(id)arg1;

@end
