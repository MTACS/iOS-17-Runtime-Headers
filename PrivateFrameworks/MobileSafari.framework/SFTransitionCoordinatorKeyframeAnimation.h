
@interface SFTransitionCoordinatorKeyframeAnimation : NSObject <SFTransitionCoordinatorAnimation> {
    id /* block */  _animations;
    double  _duration;
    double  _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)invokeInContext:(id)arg1;

@end
