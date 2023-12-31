
@interface MPAVRoutingTableViewCellSubtitleTextState : NSObject {
    bool  _animating;
    NSString * _batteryText;
    unsigned long long  _currentVisibleTextType;
    NSString * _localizedSubtitle;
    NSString * _pairedDeviceText;
    NSString * _routeUID;
}

@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic, copy) NSString *batteryText;
@property (nonatomic) unsigned long long currentVisibleTextType;
@property (nonatomic, readonly) bool hasVisibleTextTypeToShow;
@property (nonatomic, readonly) bool hasVisibleTextTypeToTransitionTo;
@property (nonatomic, copy) NSString *localizedSubtitle;
@property (nonatomic, copy) NSString *pairedDeviceText;
@property (nonatomic, copy) NSString *routeUID;
@property (nonatomic, readonly, copy) NSString *stringForCurrentVisibleTextType;

- (void).cxx_destruct;
- (unsigned long long)_nextAvailableVisibleTextType;
- (id)_stringForVisibleTextType:(unsigned long long)arg1;
- (id)batteryText;
- (unsigned long long)currentVisibleTextType;
- (bool)hasVisibleTextTypeToShow;
- (bool)hasVisibleTextTypeToTransitionTo;
- (bool)isAnimating;
- (id)localizedSubtitle;
- (id)pairedDeviceText;
- (void)resetForNewRoute;
- (id)routeUID;
- (void)setAnimating:(bool)arg1;
- (void)setBatteryText:(id)arg1;
- (void)setCurrentVisibleTextType:(unsigned long long)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setPairedDeviceText:(id)arg1;
- (void)setRouteUID:(id)arg1;
- (id)stringForCurrentVisibleTextType;
- (void)transitionToNextAvailableVisibleTextType;

@end
