
@interface FBSDisplaySource : NSObject <BSDescriptionProviding, BSInvalidatable> {
    bool  _alwaysConnected;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    CADisplay * _display;
    unsigned int  _displayID;
    int  _evlock_attachment;
    FBSDisplayConfiguration * _evlock_rawConfiguration;
    NSSet * _evlock_reportedEffectiveConfigurations;
    FBSDisplayConfiguration * _evlock_reportedRawConfiguration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _externallyVisibleLock;
    unsigned int  _instanceID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_allowsUnknown;
    int  _lock_attachment;
    unsigned int  _lock_debounceToken;
    bool  _lock_initialized;
    bool  _lock_invalidated;
    FBSDisplayMonitor * _lock_monitor;
    FBSDisplayConfiguration * _lock_rawConfiguration;
    FBSDisplayConfiguration * _lock_rawConfigurationOfLastTransition;
    NSSet * _lock_reportedEffectiveConfigurations;
    FBSDisplayConfiguration * _lock_reportedRawConfiguration;
    bool  _observing;
    bool  _updatable;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _updateTransformsLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
