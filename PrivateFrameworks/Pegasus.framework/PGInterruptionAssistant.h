
@interface PGInterruptionAssistant : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_allowsResumingAfterInterruptionEnds;
    NSString * _lock_exemptAttribution;
    bool  _lock_exemptFromUILockInterruptionsWhenActive;
    NSMutableDictionary * _lock_interruptions;
    bool  _lock_isInterrupted;
    bool  _lock_isInterruptedAccordingToProxy;
    bool  _lock_isProxyActive;
    <BSInvalidatable> * _stateDumpInvalidatable;
}

@property (readonly) bool allowsResumingAfterInterruptionEnds;
@property (getter=isExemptFromUILockInterruptionsWhenActive) bool exemptFromUILockInterruptionsWhenActive;
@property (getter=isInterrupted, readonly) bool interrupted;
@property (getter=isProxyActive) bool proxyActive;

- (void).cxx_destruct;
- (id)_interruptionsDescription;
- (bool)_lock_calculateIsInterrupted;
- (void)addReason:(long long)arg1 attribution:(id)arg2;
- (bool)allowsResumingAfterInterruptionEnds;
- (id)cameraInterruptionAttributions;
- (id)copyWithExemptAttribution:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)exemptAttribution;
- (bool)hasInterruptionReason:(long long)arg1;
- (id)init;
- (bool)isExemptFromUILockInterruptionsWhenActive;
- (bool)isInterrupted;
- (bool)isProxyActive;
- (void)noteDidNotifyProxyOfInterruptionBegan;
- (void)noteDidNotifyProxyOfInterruptionEnded;
- (void)removeReason:(long long)arg1 attribution:(id)arg2;
- (void)setExemptAttribution:(id)arg1;
- (void)setExemptFromUILockInterruptionsWhenActive:(bool)arg1;
- (void)setProxyActive:(bool)arg1;
- (bool)shouldNotifyProxyOfInterruptionBegan;
- (bool)shouldNotifyProxyOfInterruptionEnded;

@end
