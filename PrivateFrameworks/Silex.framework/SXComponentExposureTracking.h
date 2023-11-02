
@interface SXComponentExposureTracking : NSObject {
    SXComponentView * _componentView;
    id /* block */  _conditionBlock;
    id /* block */  _exposureStateChangeBlock;
    long long  _lastObservedVisibilityState;
    NSDate * _lastStateChange;
    double  _maximumVisibleY;
    double  _minimumVisibleY;
    unsigned long long  _traits;
    double  _visibilityFactor;
}

@property (nonatomic, readonly) SXComponentView *componentView;
@property (nonatomic, readonly, copy) id /* block */ conditionBlock;
@property (nonatomic, readonly, copy) id /* block */ exposureStateChangeBlock;
@property (nonatomic) long long lastObservedVisibilityState;
@property (nonatomic, readonly) NSDate *lastStateChange;
@property (nonatomic) double maximumVisibleY;
@property (nonatomic) double minimumVisibleY;
@property (nonatomic, readonly) unsigned long long traits;
@property (nonatomic, readonly) double visibilityFactor;

+ (id)exposureTrackingWithComponent:(id)arg1 traits:(unsigned long long)arg2 exposureStateChangeBlock:(id /* block */)arg3 conditionBlock:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)calculateVisibilityFactor;
- (id)componentView;
- (id /* block */)conditionBlock;
- (id /* block */)exposureStateChangeBlock;
- (id)initWithComponent:(id)arg1 traits:(unsigned long long)arg2 exposureStateChangeBlock:(id /* block */)arg3 conditionBlock:(id /* block */)arg4;
- (long long)lastObservedVisibilityState;
- (id)lastStateChange;
- (double)maximumVisibleY;
- (double)minimumVisibleY;
- (void)setLastObservedVisibilityState:(long long)arg1;
- (void)setMaximumVisibleY:(double)arg1;
- (void)setMinimumVisibleY:(double)arg1;
- (unsigned long long)traits;
- (double)visibilityFactor;

@end
