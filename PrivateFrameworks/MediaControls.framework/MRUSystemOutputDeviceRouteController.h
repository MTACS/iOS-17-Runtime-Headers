
@interface MRUSystemOutputDeviceRouteController : NSObject <MRUCallMonitorObserver> {
    bool  _isSplitRoute;
    NSHashTable * _observers;
    MPAVOutputDeviceRoute * _primaryOutputDeviceRoute;
    MPAVOutputDeviceRoute * _secondaryOutputDeviceRoute;
    MPAVOutputDeviceRoute * _systemOutputDeviceRoute;
    MPAVEndpointRoute * _systemRoute;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSplitRoute;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) MRUOutputDeviceAsset *primaryOutputDeviceAsset;
@property (nonatomic, readonly) MPAVOutputDeviceRoute *primaryOutputDeviceRoute;
@property (nonatomic, readonly) MRUOutputDeviceAsset *secondaryOutputDeviceAsset;
@property (nonatomic, readonly) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MRUOutputDeviceAsset *systemOutputDeviceAsset;
@property (nonatomic, readonly) MRUOutputDeviceAsset *systemOutputDeviceAssetWithInCall;
@property (nonatomic, readonly) MPAVOutputDeviceRoute *systemOutputDeviceRoute;
@property (nonatomic, readonly) MPAVEndpointRoute *systemRoute;

+ (id)outputContextDescription;
+ (id)sharedController;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)callMonitorDidUpdateOnCall:(id)arg1 isOnCall:(bool)arg2;
- (id)init;
- (bool)isSplitRoute;
- (id)observers;
- (id)primaryOutputDeviceAsset;
- (id)primaryOutputDeviceRoute;
- (void)removeObserver:(id)arg1;
- (void)routeDidChangeNotification;
- (id)secondaryOutputDeviceAsset;
- (id)secondaryOutputDeviceRoute;
- (void)setObservers:(id)arg1;
- (id)systemOutputDeviceAsset;
- (id)systemOutputDeviceAssetWithInCall;
- (id)systemOutputDeviceRoute;
- (id)systemRoute;
- (void)updateOutputDevices;

@end
