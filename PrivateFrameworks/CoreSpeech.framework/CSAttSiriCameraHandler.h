
@interface CSAttSiriCameraHandler : NSObject <CSAttSiriFaceTrackingCaptureDelegate> {
    <CSAttSiriServiceProtocol> * _delegate;
    bool  _isCameraStarted;
    bool  _useLegacyGazeModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSAttSiriServiceProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCameraStarted;
@property (readonly) Class superclass;
@property (nonatomic) bool useLegacyGazeModel;

- (void).cxx_destruct;
- (id)delegate;
- (void)gazeEstimates:(struct CGPoint { double x1; double x2; })arg1 landmarks:(id)arg2;
- (void)gazeTrackerFaceTrackingMetaDataUpdate:(id)arg1 atMachAbsTime:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1;
- (bool)isCameraStarted;
- (void)setDelegate:(id)arg1;
- (void)setIsCameraStarted:(bool)arg1;
- (void)setUseLegacyGazeModel:(bool)arg1;
- (void)startCamera:(bool)arg1;
- (void)stopCamera;
- (bool)useLegacyGazeModel;

@end
