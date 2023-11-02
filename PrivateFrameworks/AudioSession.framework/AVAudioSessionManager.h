
@interface AVAudioSessionManager : NSObject {
    bool  _processAudioMuted;
    struct synchronized<(anonymous namespace)::ManagerState, caulk::mach::unfair_lock, caulk::empty_atomic_interface<(anonymous namespace)::ManagerState>>="mMutex"{unfair_lock="m_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I {}  _state;
}

@property (getter=isProcessAudioMuted, nonatomic, readonly) bool processAudioMuted;

+ (id)defaultManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (bool)isProcessAudioMuted;
- (bool)trackDaemonPID:(int)arg1;
- (void)triggerMediaServicesResetNotifications:(int)arg1 daemonName:(id)arg2;

@end
