
@interface IRMobileAssetManager : NSObject {
    IRBackgroundActivitiesManager * _backgroundActivitiesManager;
    IRMobileAssetClient * _mobileAssetClient;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) IRBackgroundActivitiesManager *backgroundActivitiesManager;
@property (nonatomic, retain) IRMobileAssetClient *mobileAssetClient;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_handleMobileAssetLoadXPCActivity;
- (void)_loadAvailableMobileAsset;
- (void)_loadMobileAssetAtPath:(id)arg1 assetVersion:(id)arg2;
- (id)backgroundActivitiesManager;
- (id)initWithBackgroundActivitiesManager:(id)arg1;
- (id)mobileAssetClient;
- (id)queue;
- (void)setBackgroundActivitiesManager:(id)arg1;
- (void)setMobileAssetClient:(id)arg1;
- (void)setQueue:(id)arg1;

@end
