
@interface FigCameraViewfinder : NSObject {
    FigCameraViewfinderSession * _delegateActiveViewfinderSession;
    FigDelegateStorage * _delegateStorage;
}

@property (readonly) <FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate> *delegate;
@property (nonatomic, retain) FigCameraViewfinderSession *delegateActiveViewfinderSession;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)cameraViewfinder;

- (void)dealloc;
- (id)delegate;
- (id)delegateActiveViewfinderSession;
- (id)init;
- (id)queue;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateActiveViewfinderSession:(id)arg1;
- (void)startWithOptions:(id)arg1;
- (void)stop;

@end
