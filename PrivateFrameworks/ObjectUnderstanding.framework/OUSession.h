
@interface OUSession : NSObject {
    <OUSessionDelegate> * _delegate;
    NSDate * _detStartDate;
    float  _minFrameInterval;
    OS_os_workgroup * _workgroupFrame;
    OS_os_workgroup * _workgroupOD;
    NSMutableDictionary * allKeyframes_;
    OUConfiguration * configuration_;
    OU3DObjectDetector * det3d_;
    NSObject<OS_dispatch_queue> * detQueue_;
    NSObject<OS_dispatch_semaphore> * detSemaphore_;
    bool  isOnline_;
    OUObjectAsset * object_asset_;
    NSArray * objects_;
    NSArray * offline_objects_;
    OUPipelineOnline * ouPipeline_;
    NSObject<OS_dispatch_queue> * ouframeQueue_;
    <OUFrame> * ouframe_;
    NSMutableDictionary * skipedKeyframes_;
}

@property (nonatomic) <OUSessionDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)generateOfflineObjectAsset:(id)arg1 onlineObjects:(id)arg2 block:(id /* block */)arg3;
- (void)generateOfflineObjects:(id)arg1 onlineObjects:(id)arg2;
- (void)generateOfflineObjects:(id)arg1 onlineObjects:(id)arg2 block:(id /* block */)arg3;
- (id)init:(bool)arg1;
- (void)runWithConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stop;
- (void)updateWithFrame:(id)arg1;
- (void)updateWithKeyframes:(id)arg1 currentCameraPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (void)updateWithKeyframes:(id)arg1 ouframe:(id)arg2;

@end
