
@interface FBWatchdogTransitionContext : NSObject <NSCopying, NSMutableCopying> {
    bool  _runIndependently;
    long long  _watchdogBehavior;
    <FBProcessWatchdogProviding> * _watchdogProvider;
}

@property (nonatomic) bool runIndependently;
@property (nonatomic) long long watchdogBehavior;
@property (nonatomic, retain) <FBProcessWatchdogProviding> *watchdogProvider;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)runIndependently;
- (void)setRunIndependently:(bool)arg1;
- (void)setWatchdogBehavior:(long long)arg1;
- (void)setWatchdogProvider:(id)arg1;
- (long long)watchdogBehavior;
- (id)watchdogProvider;

@end
