
@interface PPQuickTypeNavigationServant : NSObject <GEONavigationListenerDelegate, PPQuickTypeServantProtocol> {
    NSString * _destinationName;
    GEONavigationListener * _navigationListener;
    int  _navigationState;
    double  _remainingDistanceToDestination;
    double  _remainingTimeToDestination;
    NSObject<OS_dispatch_semaphore> * _stateSemaphore;
    NSString * _streetName;
    NSObject<OS_dispatch_semaphore> * _streetSemaphore;
    NSObject<OS_dispatch_semaphore> * _summarySemaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)navigationListener:(id)arg1 didUpdateCurrentRoadName:(id)arg2;
- (void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2;
- (void)navigationListener:(id)arg1 didUpdatePositionFromDestination:(struct { double x1; double x2; })arg2;
- (void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2;
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;

@end
