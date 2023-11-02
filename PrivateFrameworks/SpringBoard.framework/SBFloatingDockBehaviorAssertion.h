
@interface SBFloatingDockBehaviorAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {
    bool  _animated;
    SBFloatingDockController * _floatingDockController;
    bool  _gesturePossible;
    unsigned long long  _level;
    double  _progress;
    NSString * _reason;
    NSDate * _timestamp;
}

@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBFloatingDockController *floatingDockController;
@property (nonatomic, readonly) bool gesturePossible;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long level;
@property (getter=isPinned, nonatomic, readonly) bool pinned;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDate *timestamp;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)floatingDockController;
- (bool)gesturePossible;
- (id)initWithFloatingDockController:(id)arg1 visibleProgress:(double)arg2 animated:(bool)arg3 gesturePossible:(bool)arg4 atLevel:(unsigned long long)arg5 reason:(id)arg6 withCompletion:(id /* block */)arg7;
- (void)invalidate;
- (void)invalidateWithCompletion:(id /* block */)arg1;
- (bool)isAnimated;
- (bool)isPinned;
- (unsigned long long)level;
- (void)modifyProgress:(double)arg1 interactive:(bool)arg2 completion:(id /* block */)arg3;
- (double)progress;
- (id)reason;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)timestamp;

@end
