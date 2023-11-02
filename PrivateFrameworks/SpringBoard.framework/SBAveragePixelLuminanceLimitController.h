
@interface SBAveragePixelLuminanceLimitController : NSObject <CAAnimationDelegate> {
    bool  _aplLimitsEnabled;
    bool  _globalFilter;
    UIView * _targetView;
}

@property (getter=areAplLimitsEnabled, nonatomic) bool aplLimitsEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isGlobalFilter, nonatomic) bool globalFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UIView *targetView;

- (void).cxx_destruct;
- (void)_addFilter;
- (void)_removeFilter;
- (id)_targetLayer;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (bool)areAplLimitsEnabled;
- (bool)isGlobalFilter;
- (void)setAplLimitsEnabled:(bool)arg1;
- (void)setGlobalFilter:(bool)arg1;
- (void)setTargetView:(id)arg1;
- (id)targetView;

@end
