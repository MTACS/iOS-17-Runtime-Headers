
@interface TVRXDeviceQuery : NSObject <TVRCRapportDeviceQueryDelegate, _TVRCMatchPointDeviceQueryDelegate, _TVRCRMSDeviceQueryDelegate> {
    NSMutableDictionary * _aggregateDevices;
    <TVRXDeviceQueryDelegate> * _delegate;
    bool  _isRunning;
    TVRCMatchPointDeviceQuery * _matchPointQuery;
    TVRCRapportDeviceQuery * _rapportDeviceQuery;
    _TVRCRMSDeviceQuery * _rmsDeviceQuery;
}

@property (nonatomic, retain) NSMutableDictionary *aggregateDevices;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TVRXDeviceQueryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRunning;
@property (nonatomic, retain) TVRCMatchPointDeviceQuery *matchPointQuery;
@property (nonatomic, retain) TVRCRapportDeviceQuery *rapportDeviceQuery;
@property (nonatomic, retain) _TVRCRMSDeviceQuery *rmsDeviceQuery;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_findAggregateForIdentifier:(id)arg1 createIfNeeded:(bool)arg2;
- (void)_notifyDelegateDidUpdateDevices;
- (void)_reevaluateAggregates;
- (void)_startSearch;
- (void)_stopSearch;
- (id)aggregateDevices;
- (id)delegate;
- (id)devices;
- (id)init;
- (bool)isRunning;
- (id)matchPointQuery;
- (void)matchpointDeviceQuery:(id)arg1 addedService:(id)arg2;
- (void)matchpointDeviceQuery:(id)arg1 removedService:(id)arg2;
- (id)rapportDeviceQuery;
- (void)rapportDeviceQuery:(id)arg1 addedDevice:(id)arg2;
- (void)rapportDeviceQuery:(id)arg1 removedDevice:(id)arg2;
- (id)rmsDeviceQuery;
- (void)rmsDeviceQuery:(id)arg1 addedDevice:(id)arg2;
- (void)rmsDeviceQuery:(id)arg1 removedDevice:(id)arg2;
- (void)setAggregateDevices:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsRunning:(bool)arg1;
- (void)setMatchPointQuery:(id)arg1;
- (void)setRapportDeviceQuery:(id)arg1;
- (void)setRmsDeviceQuery:(id)arg1;
- (void)start;
- (void)stop;

@end
