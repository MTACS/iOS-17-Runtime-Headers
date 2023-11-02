
@interface UISpringLoadedInteractionContextImpl : NSObject <UISpringLoadedInteractionContext_Internal> {
    UISpringLoadedGestureRecognizer * _currentRecognizer;
    long long  _state;
    id  overrideTargetItem;
    UIView * overrideTargetView;
    id  targetItem;
    UIView * targetView;
}

@property (nonatomic) UISpringLoadedGestureRecognizer *currentRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <UIDropSession> *dropSession;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id overrideTargetItem;
@property (nonatomic, retain) UIView *overrideTargetView;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) id targetItem;
@property (nonatomic, retain) UIView *targetView;

- (void).cxx_destruct;
- (id)currentRecognizer;
- (id)dropSession;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (id)overrideTargetItem;
- (id)overrideTargetView;
- (void)setCurrentRecognizer:(id)arg1;
- (void)setOverrideTargetItem:(id)arg1;
- (void)setOverrideTargetView:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTargetItem:(id)arg1;
- (void)setTargetView:(id)arg1;
- (long long)state;
- (id)targetItem;
- (id)targetView;

@end