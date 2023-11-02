
@interface CLManagerExtra : TweakObjAttachedStorage {
    NSObject<OS_dispatch_queue> * _dispQueue;
    <CLLocationManagerDelegate> * _forwardingDelegate;
    TweakTimer * _gpsTimer;
    bool  _haveGnss;
    struct gps_msg { 
        long long ts_usec; 
        double lat_deg; 
        double lon_deg; 
        double alt_m; 
        float spd_knot; 
        float bearing_deg; 
        float pdop; 
        float hdop; 
        float vdop; 
        unsigned int fix_qual; 
        unsigned int num_sats; 
        float geoid_msl_m; 
        float magvar_deg; 
    }  _lastGnss;
    CLLocation * _lastLoc;
    bool  _sendHeading;
    int  _updateCount;
}

- (void).cxx_destruct;
- (id)buildLatestHeading;
- (id)buildLatestLoc;
- (id)getLastLoc;
- (bool)getLatestGNSS;
- (id)init;
- (void)sendHeading;
- (void)sendLocation;
- (void)startTimer;
- (void)startUpdatingHeading;
- (void)startUpdatingLocationForCount:(int)arg1;
- (void)stopTimer;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;

@end
