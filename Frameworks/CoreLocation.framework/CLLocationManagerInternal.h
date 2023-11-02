
@interface CLLocationManagerInternal : NSObject {
    NSString * _clientKeyForIdentityValidation;
    NSData * _monitorLedgerAccessKey;
    struct __CLClient { } * fClient;
    <CLLocationManagerDelegate> * fDelegate;
    unsigned long long  fFidelityPolicy;
    int  fHeadingOrientation;
    NSMutableSet * fIdentifiableClients;
    bool  fIsMasquerading;
    unsigned long long  fLastRangingRequestMachTime;
    double  fLastRangingRequestTimeout;
    struct { 
        int suitability; 
        struct { 
            double latitude; 
            double longitude; 
        } coordinate; 
        double horizontalAccuracy; 
        double altitude; 
        double verticalAccuracy; 
        double speed; 
        double speedAccuracy; 
        double course; 
        double courseAccuracy; 
        double timestamp; 
        int confidence; 
        double lifespan; 
        int type; 
        struct { 
            double latitude; 
            double longitude; 
        } rawCoordinate; 
        double rawCourse; 
        int floor; 
        unsigned int integrity; 
        int referenceFrame; 
        int rawReferenceFrame; 
        int signalEnvironmentType; 
        double ellipsoidalAltitude; 
        bool fromSimulationController; 
    }  fLocation;
    NSString * fLocationEventType;
    double  fLocationRequestTimeout;
    CLTimer * fLocationRequestTimer;
    CLLocationManager * fManager;
    id /* block */  fPlaceInferenceHandler;
    CLTimer * fPlaceInferenceTimer;
    NSMutableSet * fRangedConstraints;
    NSMutableSet * fRangedRegions;
    CLTimer * fRangingRequestTimer;
    CLSilo * fSilo;
    CLLocationManagerStateTracker * fState;
}

@property (retain) NSString *clientKeyForIdentityValidation;
@property (nonatomic) <CLLocationManagerDelegate> *delegate;
@property (nonatomic) CLLocationManager *manager;
@property (retain) NSData *monitorLedgerAccessKey;
@property (nonatomic, readonly) NSMutableSet *rangedConstraints;
@property (nonatomic, readonly) NSMutableSet *rangedRegions;

- (void).cxx_destruct;
- (int)PausesLocationUpdatesAutomatically;
- (bool)allowsBackgroundLocationUpdates;
- (void)cancelLingeringRangingRequest;
- (void)cancelLocationRequest;
- (void)cancelRangingRequest;
- (id)clientKeyForIdentityValidation;
- (void)dealloc;
- (id)delegate;
- (bool)hasLingeringRangingRequest;
- (id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundlePath:(id)arg3 websiteIdentifier:(id)arg4 delegate:(id)arg5 silo:(id)arg6;
- (void)invalidate;
- (id)manager;
- (id)monitorLedgerAccessKey;
- (void)performCourtesyPromptIfNeeded;
- (id)rangedConstraints;
- (id)rangedRegions;
- (void)setAllowsBackgroundLocationUpdates:(bool)arg1;
- (void)setClientKeyForIdentityValidation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setMonitorLedgerAccessKey:(id)arg1;
- (void)setPausesLocationUpdatesAutomatically:(int)arg1;
- (void)setShowsBackgroundLocationIndicator:(bool)arg1;
- (bool)showsBackgroundLocationIndicator;
- (void)stopUpdatingLocationAutoPaused;

@end
