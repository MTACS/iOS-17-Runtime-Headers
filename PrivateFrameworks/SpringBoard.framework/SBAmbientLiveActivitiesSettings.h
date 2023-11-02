
@interface SBAmbientLiveActivitiesSettings : PTSettings {
    bool  _fullScreenDismissGestureEnabled;
    double  _fullScreenDragCornerRadiusDampingRatio;
    double  _fullScreenDragCornerRadiusResponse;
    double  _fullScreenDragPositionDampingRatio;
    double  _fullScreenDragPositionResponse;
    double  _fullScreenDragScaleDampingRatio;
    double  _fullScreenDragScaleResponse;
    double  _fullScreenTransitionToCompactDampingRatio;
    double  _fullScreenTransitionToCompactResponse;
}

@property (nonatomic) bool fullScreenDismissGestureEnabled;
@property (nonatomic) double fullScreenDragCornerRadiusDampingRatio;
@property (nonatomic) double fullScreenDragCornerRadiusResponse;
@property (nonatomic) double fullScreenDragPositionDampingRatio;
@property (nonatomic) double fullScreenDragPositionResponse;
@property (nonatomic) double fullScreenDragScaleDampingRatio;
@property (nonatomic) double fullScreenDragScaleResponse;
@property (nonatomic) double fullScreenTransitionToCompactDampingRatio;
@property (nonatomic) double fullScreenTransitionToCompactResponse;

+ (id)settingsControllerModule;

- (bool)fullScreenDismissGestureEnabled;
- (double)fullScreenDragCornerRadiusDampingRatio;
- (double)fullScreenDragCornerRadiusResponse;
- (double)fullScreenDragPositionDampingRatio;
- (double)fullScreenDragPositionResponse;
- (double)fullScreenDragScaleDampingRatio;
- (double)fullScreenDragScaleResponse;
- (double)fullScreenTransitionToCompactDampingRatio;
- (double)fullScreenTransitionToCompactResponse;
- (void)setDefaultValues;
- (void)setFullScreenDismissGestureEnabled:(bool)arg1;
- (void)setFullScreenDragCornerRadiusDampingRatio:(double)arg1;
- (void)setFullScreenDragCornerRadiusResponse:(double)arg1;
- (void)setFullScreenDragPositionDampingRatio:(double)arg1;
- (void)setFullScreenDragPositionResponse:(double)arg1;
- (void)setFullScreenDragScaleDampingRatio:(double)arg1;
- (void)setFullScreenDragScaleResponse:(double)arg1;
- (void)setFullScreenTransitionToCompactDampingRatio:(double)arg1;
- (void)setFullScreenTransitionToCompactResponse:(double)arg1;

@end
