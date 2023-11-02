
@interface HKOutsideViewTapDetector : NSObject <UIGestureRecognizerDelegate> {
    NSMutableArray * _windowCallbacks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *windowCallbacks;

+ (id)_detectorSingleton;
+ (void)addOutsideTouchCallbackForView:(id)arg1 outsideTapBlock:(id /* block */)arg2;
+ (void)removeOutsideTouchCallbackForView:(id)arg1;

- (void).cxx_destruct;
- (id)_callbacksForWindow:(id)arg1;
- (void)_removeCallbacksForView:(id)arg1;
- (id)init;
- (void)setWindowCallbacks:(id)arg1;
- (id)windowCallbacks;

@end
