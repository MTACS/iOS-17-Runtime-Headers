
@interface _UIViewWeakCAAnimationDelegate : NSObject <CAAnimationDelegate> {
    <CAAnimationDelegate> * _animationDelegate;
    struct { 
        unsigned int delegateAnimationDidStart : 1; 
        unsigned int delegateAnimationDidStopFinished : 1; 
    }  _flags;
}

@property (nonatomic, readonly) <CAAnimationDelegate> *animationDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)weakAnimationDelegate:(id)arg1;

- (void).cxx_destruct;
- (id)animationDelegate;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)initWithAnimationDelegate:(id)arg1;

@end
