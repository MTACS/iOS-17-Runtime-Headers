
@interface RSCaptureSession : NSObject {
    NSMutableDictionary * _allKeyframes;
    RSFloorPlanBoundaryRefinement * _boundaryRefinement;
    NSObject<OS_dispatch_queue> * _coachingQueue;
    NSObject<OS_dispatch_semaphore> * _coachingSemaphore;
    NSDate * _coachingStartDate;
    RSCaptureConfiguration * _configuration;
    RSInternalInfoDumper * _debugDumper;
    <RSCaptureSessionDelegate> * _delegate;
    NSArray * _detectedObjects;
    RSDriftDetection * _driftDetection;
    RSFloorPlan * _floorPlan;
    RSOnlineFloorPlanGenerator * _fpGenerator;
    NSObject<OS_dispatch_queue> * _fpQueue;
    NSObject<OS_dispatch_semaphore> * _fpSemaphore;
    NSDate * _fpStartDate;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _frameLock;
    NSObject<OS_dispatch_source> * _memoryMonitorSource;
    bool  _memoryMonitorSuspended;
    NSObject<OS_dispatch_queue> * _mirrorPointQueue;
    NSObject<OS_dispatch_semaphore> * _mirrorPointSemaphore;
    NSObject<OS_dispatch_queue> * _readWriteQueue;
    RSScanCoaching * _textCoaching;
    NSMutableArray * _updateFrames;
    NSArray * _updateKeyframes;
    OS_os_workgroup * _workgroupCoaching;
    OS_os_workgroup * _workgroupFloorPlan;
    OS_os_workgroup * _workgroupMirror;
    OS_os_workgroup * _workgroupReadWrite;
}

@property (nonatomic) <RSCaptureSessionDelegate> *delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_processInfoThermalStateDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)exportAsset;
- (id)generateFloorPlanWithKeyframes:(id)arg1 objects:(id)arg2;
- (void)generateMirrorPointWithFrame:(id)arg1;
- (id)getDebugInfo;
- (id)init;
- (void)runWithConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUpInternalDumpWithLogDir:(id)arg1 enable:(bool)arg2;
- (id)standardizeFloorPlan:(id)arg1;
- (void)stop;
- (void)updateWithFrame:(id)arg1;
- (void)updateWithKeyframes:(id)arg1;
- (void)updateWithObjects:(id)arg1;

@end
