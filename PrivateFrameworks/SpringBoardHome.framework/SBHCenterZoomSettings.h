
@interface SBHCenterZoomSettings : SBHIconZoomSettings {
    double  _centerRowCoordinate;
    long long  _distanceEffect;
    double  _dockMass;
    double  _firstHopIncrement;
    double  _hopIncrementAcceleration;
    bool  _preferCenterOfIconGrid;
    bool  _zoomViewBelowIcons;
}

@property (nonatomic) double centerRowCoordinate;
@property (nonatomic) long long distanceEffect;
@property (nonatomic) double dockMass;
@property (nonatomic) double firstHopIncrement;
@property (nonatomic) double hopIncrementAcceleration;
@property (nonatomic) bool preferCenterOfIconGrid;
@property (nonatomic) bool zoomViewBelowIcons;

+ (id)settingsControllerModule;

- (double)centerRowCoordinate;
- (long long)distanceEffect;
- (double)dockMass;
- (double)firstHopIncrement;
- (double)hopIncrementAcceleration;
- (bool)preferCenterOfIconGrid;
- (void)setCenterRowCoordinate:(double)arg1;
- (void)setDefaultValues;
- (void)setDistanceEffect:(long long)arg1;
- (void)setDockMass:(double)arg1;
- (void)setFirstHopIncrement:(double)arg1;
- (void)setHopIncrementAcceleration:(double)arg1;
- (void)setPreferCenterOfIconGrid:(bool)arg1;
- (void)setZoomViewBelowIcons:(bool)arg1;
- (bool)zoomViewBelowIcons;

@end
