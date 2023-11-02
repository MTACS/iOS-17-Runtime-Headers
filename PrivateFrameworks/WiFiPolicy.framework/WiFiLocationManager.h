
@interface WiFiLocationManager : NSObject <CLLocationManagerDelegate> {
    CLLocationManager * _clLocationManager;
    NSMutableArray * _clientsDataArray;
    <WiFiLocationManagerDelegate> * _delegate;
    unsigned char  _isAuthorized;
    CLLocation * _latestLocation;
    int  _locationManagerState;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned char  _shouldMonitorVisits;
    NSMutableArray * _visitClientsDataArray;
}

@property (nonatomic, retain) CLLocationManager *clLocationManager;
@property (nonatomic, retain) NSMutableArray *clientsDataArray;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WiFiLocationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned char isAuthorized;
@property (retain) CLLocation *latestLocation;
@property int locationManagerState;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned char shouldMonitorVisits;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *visitClientsDataArray;

+ (id)getStringOfCallbackType:(int)arg1;
+ (id)getStringOfState:(int)arg1;
+ (unsigned char)isLocationValid:(id)arg1 uptoSeconds:(double)arg2 isHighAccuracy:(unsigned char)arg3;
+ (unsigned char)isLocationValid:(id)arg1 uptoSeconds:(double)arg2 requiredAccuracy:(double)arg3;
+ (void)logLocation:(id)arg1 addPrefixString:(id)arg2;
+ (id)sharedWiFiLocationManager;

- (void).cxx_destruct;
- (void)cancelLocationRequestTimeOut;
- (id)clLocationManager;
- (id)clientsDataArray;
- (void)createCoreLocationObjects;
- (void)dealloc;
- (id)delegate;
- (void)destroyCoreLocationObjects;
- (id)init;
- (void)invokeClientsCallbackType:(int)arg1 withLocation:(id)arg2 withError:(id)arg3;
- (unsigned char)isAuthorized;
- (id)latestLocation;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didVisit:(id)arg2;
- (int)locationManagerState;
- (void)locationRequestDidTimeOut;
- (id)queue;
- (void)registerCallbackFunctionPtr:(int (*)arg1 withContext:(void*)arg2;
- (void)registerVisitCallbackFunctionPtr:(int (*)arg1 withContext:(void*)arg2;
- (void)requestHighAccuracyLocationUpdate;
- (void)requestLeechedAccuracyLocationUpdate;
- (void)requestLowAccuracyLocationUpdate;
- (void)setCLLocationUpdateParams:(id)arg1;
- (void)setClLocationManager:(id)arg1;
- (void)setClientsDataArray:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsAuthorized:(unsigned char)arg1;
- (void)setLatestLocation:(id)arg1;
- (void)setLocationManagerState:(int)arg1;
- (void)setQueue:(id)arg1;
- (void)setShouldMonitorVisits:(unsigned char)arg1;
- (void)setVisitClientsDataArray:(id)arg1;
- (unsigned char)shouldMonitorVisits;
- (void)stopQueryingLocation;
- (id)visitClientsDataArray;

@end
