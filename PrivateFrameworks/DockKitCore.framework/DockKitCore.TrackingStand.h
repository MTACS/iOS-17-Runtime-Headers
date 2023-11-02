
@interface DockKitCore.TrackingStand : DockKitCore.DockCoreAccessory {
    void _trackingButtonEnabled;
    void _trackingButtonSemaphore;
    void actuationController;
    void appID;
    void aspectRatio;
    void assertion;
    void config;
    void debugMessageCallbacks;
    void enableRecognition;
    void inference;
    void maxObservations;
    void motionStopped;
    void observations;
    void observationsLock;
    void processingQueue;
    void rateControl;
    void sensorController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timeElapsedSinceStartup;
    void tracker;
    void trackerLock;
    void trackerTimerInterval;
    void trackingQueue;
    void trackingTimer;
    void useDeviceMotion;
    void userOverridedAspectRatio;
    void videoCheckTimer;
    void videoLock;
    void videoStreamConnected;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dumpStateWithDirectory:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getConfig;
- (id)getDiagnostics;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1 systems:(id)arg2;
- (bool)pauseTracking;
- (bool)resumeTracking;
- (bool)returnToBase;
- (bool)searchWithCalibrate:(bool)arg1;
- (bool)setConfigWithKey:(id)arg1 value:(id)arg2;
- (void)startTracking;
- (bool)stopReturnToBase;
- (bool)stopSearchWithCalibrate:(bool)arg1;
- (void)stopTracking;
- (void)trackObservationsWithMetadata:(void *)arg1 image:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 48: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '_' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, long double, out BOOL, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'K' using 'void*' */ void*, int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, out const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, out long, long, out /* Warning: Unrecognized filer type: 'w' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, double, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned char, unsigned int, unsigned int, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
