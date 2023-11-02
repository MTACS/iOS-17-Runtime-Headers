
@interface HUCameraLiveStreamViewController : UIViewController <HFCameraLiveStreamControllerDelegate> {
    HUCameraView * _cameraView;
    HFCameraLiveStreamController * _liveStreamController;
    <HFCameraLiveStreamControllerDelegate> * _liveStreamControllerDelegate;
    bool  _shouldRespectAspectRatio;
}

@property (nonatomic, retain) HUCameraView *cameraView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFCameraLiveStreamController *liveStreamController;
@property (nonatomic) <HFCameraLiveStreamControllerDelegate> *liveStreamControllerDelegate;
@property (nonatomic) bool shouldRespectAspectRatio;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cameraView;
- (id)initWithCameraProfile:(id)arg1;
- (id)liveStreamController;
- (id)liveStreamControllerDelegate;
- (void)setCameraView:(id)arg1;
- (void)setLiveStreamController:(id)arg1;
- (void)setLiveStreamControllerDelegate:(id)arg1;
- (void)setShouldRespectAspectRatio:(bool)arg1;
- (bool)shouldRespectAspectRatio;
- (void)streamControllerStateDidUpdate:(id)arg1;
- (void)viewDidLoad;

@end
