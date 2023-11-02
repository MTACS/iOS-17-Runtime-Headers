
@interface SBTouchRegionManager : NSObject <FBSDisplayLayoutObserver, PTSettingsKeyObserver> {
    SBMedusa1oSettings * _medusaSettings;
    NSObject<OS_dispatch_queue> * _queue;
    SBBackBoardServicesInterface * _queue_bksInterface;
    FBSDisplayLayoutMonitor * _queue_displayLayoutMonitor;
    double  _queue_touchRegionBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_initWithBKSInterface:(id)arg1 displayLayoutMonitor:(id)arg2;
- (id)_queue_calculateHitTestRegionsFromSceneRects:(id)arg1;
- (id)_queue_calculateTouchRegionsFromSceneRects:(id)arg1;
- (void)_queue_displayLayoutDidUpdate:(id)arg1;
- (id)_queue_floatingHitTestRegionForLayoutRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_queue_handleChamoisUILayout:(id)arg1;
- (void)dealloc;
- (id)displayLayoutMonitor;
- (id)init;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)setDisplayLayoutMonitor:(id)arg1;
- (void)setTouchRegionBuffer:(double)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (double)touchRegionBuffer;

@end
