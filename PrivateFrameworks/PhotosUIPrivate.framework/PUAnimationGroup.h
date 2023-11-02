
@interface PUAnimationGroup : NSObject {
    id /* block */  _completionHandler;
    bool  _paused;
    NSMutableArray * _subAnimationGroups;
    PUAnimationGroup * _superAnimationGroup;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) double elapsedTime;
@property (getter=isPaused, nonatomic) bool paused;
@property (getter=isReadyToComplete, nonatomic, readonly) bool readyToComplete;
@property (nonatomic, readonly) NSMutableArray *subAnimationGroups;
@property (nonatomic) PUAnimationGroup *superAnimationGroup;

+ (id)animationGroupWithAnimations:(id /* block */)arg1;
+ (void)popAnimationGroup:(id)arg1;
+ (void)pushAnimationGroup:(id)arg1;

- (void).cxx_destruct;
- (void)addSubAnimationGroup:(id)arg1;
- (void)complete;
- (void)completeIfNeeded;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)description;
- (double)elapsedTime;
- (void)finishImmediately;
- (bool)isPaused;
- (bool)isReadyToComplete;
- (void)pauseAnimations;
- (void)resumeAnimations;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setPaused:(bool)arg1;
- (void)setSuperAnimationGroup:(id)arg1;
- (id)subAnimationGroups;
- (id)superAnimationGroup;

@end