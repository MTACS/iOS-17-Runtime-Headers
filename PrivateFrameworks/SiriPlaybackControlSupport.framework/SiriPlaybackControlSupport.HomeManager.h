
@interface SiriPlaybackControlSupport.HomeManager : NSObject <HMHomeManagerDelegate> {
    void hmHomeManager;
    void hmHomeManagerOptions;
    void homeData;
    void homeKitTracker;
    void homeManagerRefreshTimeout;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  homekitInitSignpostID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  homekitRefreshSignpostID;
    void loadQueue;
    void mediaGroupTracker;
    void readyGroup;
}

- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)init;

@end
