
@interface DKDiagnosticController : NSObject <DKDiagnostic, DKDiagnostic_Internal, NSExtensionRequestHandling> {
    bool  _cancelled;
    DKDiagnosticContext * _context;
    bool  _finished;
    NSLock * _finishedLock;
    bool  _isXPC;
    NSProgress * _progress;
    DKMutableDiagnosticResult * _result;
    bool  _setup;
}

@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, retain) DKDiagnosticContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic) bool finished;
@property (nonatomic, retain) NSLock *finishedLock;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isXPC;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, retain) DKMutableDiagnosticResult *result;
@property (getter=isSetup, nonatomic) bool setup;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginRequestWithDiagnosticContext:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)context;
- (id)finishedLock;
- (id)init;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)isSetup;
- (bool)isXPC;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progress;
- (id)result;
- (void)setCancelled:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setFinishedLock:(id)arg1;
- (void)setIsXPC:(bool)arg1;
- (void)setProgress:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSetup:(bool)arg1;
- (void)start;

@end
