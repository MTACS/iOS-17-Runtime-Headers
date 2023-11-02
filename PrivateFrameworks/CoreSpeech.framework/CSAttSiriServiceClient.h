
@interface CSAttSiriServiceClient : NSObject <CSAttSiriServiceDelegate, CSAttSiriServiceProtocol> {
    NSXPCConnection * _attSiriSvcConn;
    CSAttSiriCameraHandler * _cameraHandler;
    <CSAttSiriServiceDelegate> * _delegate;
    id  _remoteSvcProxy;
}

@property (nonatomic, retain) NSXPCConnection *attSiriSvcConn;
@property (nonatomic, retain) CSAttSiriCameraHandler *cameraHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSAttSiriServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id remoteSvcProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupAttSiriSvcXpcConnection;
- (void)attSiriAttendingFailed;
- (void)attSiriAttendingTimeoutTriggered;
- (void)attSiriDidDetectAttendingTrigger:(id)arg1;
- (void)attSiriDidDetectContinuousConversation;
- (void)attSiriDidStartAttending:(bool)arg1 useLegacyModel:(bool)arg2;
- (id)attSiriSvcConn;
- (id)cameraHandler;
- (void)dealloc;
- (id)delegate;
- (void)gazeEstimates:(struct CGPoint { double x1; double x2; })arg1 landmarks:(id)arg2;
- (void)gazeTrackerFaceTrackingMetaDataUpdate:(id)arg1 atMachAbsTime:(unsigned long long)arg2;
- (id)init;
- (void)invalidate;
- (id)remoteSvcProxy;
- (void)setAttSiriSvcConn:(id)arg1;
- (void)setCameraHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRemoteSvcProxy:(id)arg1;
- (void)siriRequestProcessingCompleted;
- (void)startAttendingWithContext:(id)arg1;
- (void)stopAttendingWithContext:(id)arg1;
- (void)updateSiriOrbLocation:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
