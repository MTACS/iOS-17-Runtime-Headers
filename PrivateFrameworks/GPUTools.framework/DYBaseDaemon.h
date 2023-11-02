
@interface DYBaseDaemon : NSObject {
    <DYCaptureAPISupport> * _captureApiSupport;
    bool  _capturingInferior;
    NSString * _inferiorName;
    int  _inferiorPid;
    bool  _invalidated;
    bool  _isAppleInternal;
    bool  _ownsInferior;
    NSObject<OS_dispatch_source> * _process_source;
    bool  _shouldLoadCapture;
    bool  _shouldLoadDiagnostics;
    DYTransportSource * _source;
    DYBaseSocketTransport * _transport;
}

@property (nonatomic, retain) <DYCaptureAPISupport> *captureApiSupport;
@property (nonatomic) bool capturingInferior;
@property (nonatomic, retain) NSString *inferiorName;
@property (nonatomic) int inferiorPid;
@property (nonatomic, readonly) bool isAppleInternal;
@property (nonatomic) bool ownsInferior;
@property (nonatomic) bool shouldLoadCapture;
@property (nonatomic) bool shouldLoadDiagnostics;
@property (nonatomic, retain) DYBaseSocketTransport *transport;

- (id)captureAPISupportForAPI:(unsigned int)arg1;
- (id)captureApiSupport;
- (bool)capturingInferior;
- (bool)createInferiorTransportAndSetEnvironment:(id)arg1 uniqueIdentifier:(id)arg2 error:(id*)arg3;
- (bool)createInferiorTransportAndSetEnvironment:(id)arg1 withAPI:(unsigned int)arg2 uniqueIdentifier:(id)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)getApplications;
- (void)handleMessage:(id)arg1;
- (id)inferiorName;
- (int)inferiorPid;
- (id)init;
- (void)invalidate;
- (bool)isAppleInternal;
- (bool)launchInferior:(id)arg1 finalEnvironment:(id*)arg2 error:(id*)arg3;
- (void)observeInferior;
- (bool)ownsInferior;
- (void)run;
- (void)setApplications:(id)arg1;
- (void)setCaptureApiSupport:(id)arg1;
- (void)setCapturingInferior:(bool)arg1;
- (void)setInferiorName:(id)arg1;
- (void)setInferiorPid:(int)arg1;
- (void)setOwnsInferior:(bool)arg1;
- (void)setShouldLoadCapture:(bool)arg1;
- (void)setShouldLoadDiagnostics:(bool)arg1;
- (void)setTransport:(id)arg1;
- (bool)shouldLoadCapture;
- (bool)shouldLoadDiagnostics;
- (void)terminate:(int)arg1;
- (id)transport;

@end
