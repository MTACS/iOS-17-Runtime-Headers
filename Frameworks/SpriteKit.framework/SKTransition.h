
@interface SKTransition : NSObject <NSCopying> {
    void * _skcTransitionNode;
}

@property (nonatomic) bool pausesIncomingScene;
@property (nonatomic) bool pausesOutgoingScene;

+ (id)crossFadeWithDuration:(double)arg1;
+ (id)doorsCloseHorizontalWithDuration:(double)arg1;
+ (id)doorsCloseVerticalWithDuration:(double)arg1;
+ (id)doorsOpenHorizontalWithDuration:(double)arg1;
+ (id)doorsOpenVerticalWithDuration:(double)arg1;
+ (id)doorwayWithDuration:(double)arg1;
+ (id)fadeWithColor:(id)arg1 duration:(double)arg2;
+ (id)fadeWithDuration:(double)arg1;
+ (id)flipHorizontalWithDuration:(double)arg1;
+ (id)flipVerticalWithDuration:(double)arg1;
+ (id)moveInDownWithDuration:(double)arg1;
+ (id)moveInLeftWithDuration:(double)arg1;
+ (id)moveInRightWithDuration:(double)arg1;
+ (id)moveInUpWithDuration:(double)arg1;
+ (id)moveInWithDirection:(long long)arg1 duration:(double)arg2;
+ (id)pushDownWithDuration:(double)arg1;
+ (id)pushLeftWithDuration:(double)arg1;
+ (id)pushRightWithDuration:(double)arg1;
+ (id)pushUpWithDuration:(double)arg1;
+ (id)pushWithDirection:(long long)arg1 duration:(double)arg2;
+ (id)revealDownWithDuration:(double)arg1;
+ (id)revealLeftWithDuration:(double)arg1;
+ (id)revealRightWithDuration:(double)arg1;
+ (id)revealUpWithDuration:(double)arg1;
+ (id)revealWithDirection:(long long)arg1 duration:(double)arg2;
+ (id)transitionWithCIFilter:(id)arg1 duration:(double)arg2;

- (void*)_backingNode;
- (double)_duration;
- (id)_filter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (bool)pausesIncomingScene;
- (bool)pausesOutgoingScene;
- (void)setPausesIncomingScene:(bool)arg1;
- (void)setPausesOutgoingScene:(bool)arg1;

@end
