
@interface SFShareAudioSessionClient : NSObject <NSSecureCoding> {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _progressHandler;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ progressHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activate:(bool)arg1;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)activate;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (id /* block */)progressHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)shareAudioProgressEvent:(int)arg1 info:(id)arg2;
- (void)userConfirmed;

@end
