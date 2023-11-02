
@interface COCapabilityLegacyShim : NSObject {
    NSSet * _availableCapabilities;
    NSSet * _companionCapabilities;
    bool  _companionQueryInProgress;
    bool  _companionQueryIncompatible;
    bool  _companionQueryNeeded;
    bool  _companionQueryUnsuccessful;
    <COCapabilityLegacyShimDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    RPCompanionLinkClient * _rapport;
    NSSet * _supportedCapabilities;
}

@property (nonatomic, copy) NSSet *availableCapabilities;
@property (nonatomic, copy) NSSet *companionCapabilities;
@property (getter=isCompanionQueryInProgress) bool companionQueryInProgress;
@property (getter=isCompanionQueryIncompatible) bool companionQueryIncompatible;
@property (getter=isCompanionQueryNeeded) bool companionQueryNeeded;
@property (getter=isCompanionQueryUnsuccessful) bool companionQueryUnsuccessful;
@property (nonatomic, readonly) <COCapabilityLegacyShimDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) RPCompanionLinkClient *rapport;
@property (nonatomic, readonly) NSSet *supportedCapabilities;

- (void).cxx_destruct;
- (bool)_isStereoPairMember;
- (bool)_isStereoPeer:(id)arg1;
- (bool)_isStereoPeerActive;
- (id)_messageCreateRequest;
- (id)_messageCreateResponse;
- (id)_messageDecodeCapabilities:(id)arg1;
- (id)_messageEncodeCapabilities;
- (bool)_messageValidateRequest:(id)arg1;
- (bool)_messageValidateResponse:(id)arg1;
- (void)_notifyDelegate:(id)arg1;
- (void)_rapportDeregister;
- (bool)_rapportEventShouldUpdateState:(id)arg1;
- (void)_rapportProcessRequest:(id)arg1 emittingResponse:(id /* block */)arg2;
- (void)_rapportProcessResponse:(id)arg1 error:(id)arg2;
- (void)_rapportRegister;
- (void)_rapportStart;
- (void)_rapportStop;
- (void)_stateQuery;
- (void)_stateUpdate;
- (void)_withLock:(id /* block */)arg1;
- (id)availableCapabilities;
- (id)companionCapabilities;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (bool)isCompanionQueryInProgress;
- (bool)isCompanionQueryIncompatible;
- (bool)isCompanionQueryNeeded;
- (bool)isCompanionQueryUnsuccessful;
- (id)queue;
- (id)rapport;
- (void)setAvailableCapabilities:(id)arg1;
- (void)setCompanionCapabilities:(id)arg1;
- (void)setCompanionQueryInProgress:(bool)arg1;
- (void)setCompanionQueryIncompatible:(bool)arg1;
- (void)setCompanionQueryNeeded:(bool)arg1;
- (void)setCompanionQueryUnsuccessful:(bool)arg1;
- (id)supportedCapabilities;

@end
