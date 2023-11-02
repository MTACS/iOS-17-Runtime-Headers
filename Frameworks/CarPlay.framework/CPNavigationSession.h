
@interface CPNavigationSession : NSObject {
    <CPNavigationSessionManaging> * _manager;
    CPMapTemplate * _mapTemplate;
    NAFuture * _navigationSessionManagerFuture;
    CPTrip * _trip;
    NSArray * _upcomingManeuvers;
}

@property (nonatomic, retain) <CPNavigationSessionManaging> *manager;
@property (nonatomic) CPMapTemplate *mapTemplate;
@property (nonatomic, retain) NAFuture *navigationSessionManagerFuture;
@property (nonatomic, retain) CPTrip *trip;
@property (nonatomic, copy) NSArray *upcomingManeuvers;

- (void).cxx_destruct;
- (id)_currentTripId;
- (void)cancelTrip;
- (void)finishTrip;
- (id)initWithTrip:(id)arg1 mapTemplate:(id)arg2;
- (id)manager;
- (id)mapTemplate;
- (id)navigationSessionManagerFuture;
- (void)pauseTripForReason:(unsigned long long)arg1 description:(id)arg2;
- (void)pauseTripForReason:(unsigned long long)arg1 description:(id)arg2 turnCardColor:(id)arg3;
- (void)setManager:(id)arg1;
- (void)setMapTemplate:(id)arg1;
- (void)setNavigationSessionManagerFuture:(id)arg1;
- (void)setTrip:(id)arg1;
- (void)setUpcomingManeuvers:(id)arg1;
- (id)trip;
- (id)upcomingManeuvers;
- (void)updateTravelEstimates:(id)arg1 forManeuver:(id)arg2;

@end
