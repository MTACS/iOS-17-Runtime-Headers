
@interface WGWidgetPinningTeachingAnimationView : BSUICAPackageView {
    UILabel * _debugLabel;
    CALayer * _materialsLayer;
    CALayer * _page1Layer;
    CALayer * _pagesLayer;
    unsigned long long  _state;
    NSTimer * _timerToNextState;
}

@property (nonatomic, retain) UILabel *debugLabel;
@property (nonatomic, retain) CALayer *materialsLayer;
@property (nonatomic, retain) CALayer *page1Layer;
@property (nonatomic, retain) CALayer *pagesLayer;
@property (setter=_setState:, nonatomic) unsigned long long state;
@property (setter=_setTimerToNextState:, nonatomic, retain) NSTimer *timerToNextState;

- (void).cxx_destruct;
- (double)_durationForState:(unsigned long long)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_setState:(unsigned long long)arg1;
- (void)_setTimerToNextState:(id)arg1;
- (unsigned long long)_stateFollowingState:(unsigned long long)arg1;
- (void)_updateMaterials;
- (id)debugLabel;
- (id)init;
- (id)materialsLayer;
- (id)page1Layer;
- (id)pagesLayer;
- (void)setDebugLabel:(id)arg1;
- (void)setMaterialsLayer:(id)arg1;
- (void)setPage1Layer:(id)arg1;
- (void)setPagesLayer:(id)arg1;
- (void)startAnimating;
- (unsigned long long)state;
- (void)stopAnimating;
- (id)timerToNextState;

@end
