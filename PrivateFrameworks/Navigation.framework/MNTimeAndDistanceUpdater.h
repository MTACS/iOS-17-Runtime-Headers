
@interface MNTimeAndDistanceUpdater : NSObject <MNNavigationSessionStateListener> {
    unsigned long long  _currentLogType;
    <MNTimeAndDistanceUpdaterDelegate> * _delegate;
    MNLocation * _location;
    MNActiveRouteInfo * _mainRoute;
    NSTimer * _minuteTimer;
    MNNavigationSessionState * _navigationSessionState;
    NSArray * _routes;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNTimeAndDistanceUpdaterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MNNavigationSessionState *navigationSessionState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_batteryChargeInfoForRoute:(id)arg1 routeCoordinate:(struct { unsigned int x1; float x2; })arg2;
- (void)_logDisplayETAInfo:(id)arg1;
- (id)_routeDistanceInfoForRoute:(id)arg1 routeCoordinate:(struct { unsigned int x1; float x2; })arg2;
- (void)_startTimerToNextMinute;
- (void)dealloc;
- (id)delegate;
- (id)initWithNavigationSessionState:(id)arg1;
- (id)navigationSessionState;
- (void)setDelegate:(id)arg1;
- (void)setLocation:(id)arg1 notificationType:(unsigned long long)arg2;
- (void)setNavigationSessionState:(id)arg1;
- (void)setRoutes:(id)arg1 mainRoute:(id)arg2 location:(id)arg3 notificationType:(unsigned long long)arg4;
- (void)startUpdating;
- (void)stopUpdating;
- (void)updateDisplayETAForRoute:(id)arg1 notificationType:(unsigned long long)arg2;

@end
