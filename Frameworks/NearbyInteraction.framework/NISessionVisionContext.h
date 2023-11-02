
@interface NISessionVisionContext : NSObject {
    ARSession * _arSession;
    bool  _arSessionInClientProcess;
    bool  _arSessionInternal;
    unsigned long long  _arSessionState;
    bool  _cameraAssistanceEnabled;
    ARFrame * _latestARFrame;
}

@property (nonatomic, retain) ARSession *arSession;
@property (getter=isARSessionInClientProcess, nonatomic) bool arSessionInClientProcess;
@property (getter=isARSessionInternal, nonatomic) bool arSessionInternal;
@property (nonatomic) unsigned long long arSessionState;
@property (getter=isCameraAssistanceEnabled, nonatomic) bool cameraAssistanceEnabled;
@property (nonatomic, copy) ARFrame *latestARFrame;

- (void).cxx_destruct;
- (id)arSession;
- (unsigned long long)arSessionState;
- (id)init;
- (bool)isARSessionInClientProcess;
- (bool)isARSessionInternal;
- (bool)isCameraAssistanceEnabled;
- (id)latestARFrame;
- (void)setArSession:(id)arg1;
- (void)setArSessionInClientProcess:(bool)arg1;
- (void)setArSessionInternal:(bool)arg1;
- (void)setArSessionState:(unsigned long long)arg1;
- (void)setCameraAssistanceEnabled:(bool)arg1;
- (void)setLatestARFrame:(id)arg1;

@end
