
@interface BKSProcess : NSObject {
    RBSAssertion * _assertion;
    BKSProcessAssertion * _audioAssertion;
    bool  _bootstrapped;
    BSProcessHandle * _handle;
    RBSProcessIdentity * _identity;
    BKSProcessExitContext * _lastExitContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BKSProcessAssertion * _mediaAssertion;
    RBSProcessMonitor * _monitor;
    bool  _nowPlayingWithAudio;
    RBSProcessHandle * _processHandle;
    bool  _recordingAudio;
    long long  _terminationReason;
}

@property (nonatomic, readonly) double backgroundTimeRemaining;
@property (nonatomic, readonly) BSProcessHandle *handle;
@property (nonatomic, readonly) BKSProcessExitContext *lastExitContext;
@property (nonatomic) bool nowPlayingWithAudio;
@property (nonatomic) bool recordingAudio;
@property (nonatomic) long long terminationReason;

+ (double)backgroundTimeRemaining;
+ (id)busyExtensionInstances:(id)arg1;
+ (id)currentProcess;

- (void).cxx_destruct;
- (bool)_bootstrapWithError:(out id*)arg1;
- (double)backgroundTimeRemaining;
- (void)bootstrapCurrentProcess;
- (bool)bootstrapWithProcessHandle:(id)arg1 error:(out id*)arg2;
- (id)description;
- (id)handle;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithProcessIdentity:(id)arg1;
- (void)invalidate;
- (id)lastExitContext;
- (bool)nowPlayingWithAudio;
- (bool)recordingAudio;
- (void)setNowPlayingWithAudio:(bool)arg1;
- (void)setRecordingAudio:(bool)arg1;
- (void)setTerminationReason:(long long)arg1;
- (long long)terminationReason;

@end
