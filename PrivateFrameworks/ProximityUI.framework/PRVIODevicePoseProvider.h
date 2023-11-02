
@interface PRVIODevicePoseProvider : PRDevicePoseProvider <ARSessionDelegate> {
    PRDevicePoseValidator * _poseValidator;
    ARSession * _session;
    bool  _trackingNormal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PRDevicePoseValidator *poseValidator;
@property (nonatomic, retain) ARSession *session;
@property (readonly) Class superclass;
@property (nonatomic) bool trackingNormal;

- (void).cxx_destruct;
- (id)initWithARSession:(id)arg1;
- (id)poseValidator;
- (void)reset;
- (id)session;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)setPoseValidator:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTrackingNormal:(bool)arg1;
- (bool)trackingNormal;

@end
