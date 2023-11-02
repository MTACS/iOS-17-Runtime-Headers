
@interface _HKOutsideTapWindowCallbacks : NSObject <UIGestureRecognizerDelegate> {
    NSMutableArray * _callbacks;
    UITapGestureRecognizer * _recognizer;
    UIWindow * _window;
}

@property (nonatomic, retain) NSMutableArray *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITapGestureRecognizer *recognizer;
@property (readonly) Class superclass;
@property (nonatomic) UIWindow *window;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)_installTapGestureRecognizerIfNeeded;
- (void)_removeTapGestureRecognizerIfNeeded;
- (void)addCallbackForView:(id)arg1 outsideTapBlock:(id /* block */)arg2;
- (id)callbacks;
- (id)initWithWindow:(id)arg1;
- (bool)matchesWindow:(id)arg1;
- (id)recognizer;
- (void)removeCallbackForView:(id)arg1;
- (void)setCallbacks:(id)arg1;
- (void)setRecognizer:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)window;

@end
