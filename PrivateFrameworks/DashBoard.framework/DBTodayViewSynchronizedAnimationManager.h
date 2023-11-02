
@interface DBTodayViewSynchronizedAnimationManager : NSObject <BSInvalidatable> {
    NSMutableDictionary * _animationsByIdentifier;
}

@property (nonatomic, retain) NSMutableDictionary *animationsByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animationsByIdentifier;
- (id)init;
- (void)invalidate;
- (void)registerAnimation:(id)arg1 client:(id)arg2 animation:(id /* block */)arg3;
- (void)runAnimationIfPossible:(id)arg1 client:(id)arg2;
- (void)setAnimationsByIdentifier:(id)arg1;

@end
