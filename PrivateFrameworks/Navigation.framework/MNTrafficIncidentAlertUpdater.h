
@interface MNTrafficIncidentAlertUpdater : NSObject {
    MNTrafficIncidentAlert * _activeAlert;
    NSDate * _activeAlertDisplayedTime;
    <MNTrafficIncidentAlertUpdaterDelegate> * _delegate;
    NSMutableSet * _displayedBannerIds;
    MNLocation * _lastLocation;
    NSDate * _nextAlertDisplayTime;
    NSMutableSet * _pendingAlerts;
    NSString * _previousBannerID;
    int  _trafficIncidentStatus;
    bool  _useTriggerPointRangeBannerQueuing;
}

@property (nonatomic, retain) MNTrafficIncidentAlert *activeAlert;
@property (nonatomic) <MNTrafficIncidentAlertUpdaterDelegate> *delegate;
@property (nonatomic) bool useTriggerPointRangeBannerQueuing;

- (void).cxx_destruct;
- (void)_activateAlert:(id)arg1 forLocation:(id)arg2;
- (id)_nextAlert;
- (void)_removeActiveAlert;
- (void)_updateActiveAlertForLocation:(id)arg1;
- (void)_updateAlertDistanceAndETAForLocation:(id)arg1;
- (void)_updateForAlertsFromResponseUsingDistancePoints:(id)arg1;
- (void)_updateForLocationUsingDistancePoints:(id)arg1;
- (void)_updatePreviousDisplayedBannerForRequest:(id)arg1;
- (void)_updateRerouteProposalStatusForRequest:(id)arg1;
- (id)activeAlert;
- (void)clearAlerts;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setActiveAlert:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUseTriggerPointRangeBannerQueuing:(bool)arg1;
- (void)updateForAlertsFromResponse:(id)arg1;
- (void)updateForLocation:(id)arg1;
- (void)updateForReroute:(id)arg1;
- (void)updateIncidentResultForETARequest:(id)arg1;
- (void)updateIncidentResultForRerouteRequest:(id)arg1;
- (bool)useTriggerPointRangeBannerQueuing;

@end
