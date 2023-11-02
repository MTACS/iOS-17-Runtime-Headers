
@interface COCapabilityAddOn : COMeshAddOn <COCapabilityLegacyShimDelegate> {
    NSSet * _availableCapabilities;
    <COCapabilityAddOnDelegate> * _delegate;
    NSDictionary * _gatheredCapabilities;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    COCapabilityLegacyShim * _pairLegacyShim;
    NSSet * _supportedCapabilities;
}

@property (nonatomic, copy) NSSet *availableCapabilities;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <COCapabilityAddOnDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *gatheredCapabilities;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COCapabilityLegacyShim *pairLegacyShim;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSSet *supportedCapabilities;

- (void).cxx_destruct;
- (void)_enableForPairLegacySupport;
- (bool)_legacyShimOverridesAvailableCapabilities:(id)arg1;
- (void)_notifyDelegateCapabilitiesChanged;
- (void)_setAvailableCapabilities_Unsafe:(id)arg1;
- (void)_withLock:(id /* block */)arg1;
- (id)availableCapabilities;
- (id)availableCapabilitiesForNode:(id)arg1;
- (id)delegate;
- (void)didAddToMeshController:(id)arg1;
- (void)didChangeNodesForMeshController:(id)arg1;
- (id)gatheredCapabilities;
- (void)handleCapabilitiesReadRequest:(id)arg1 callback:(id /* block */)arg2;
- (void)handleCapabilitiesUpdateCommand:(id)arg1;
- (void)handleCapabilitiesUpdateNotification:(id)arg1;
- (id)init;
- (id)initWithSupportedCapabilities:(id)arg1;
- (void)legacyShim:(id)arg1 availableCapabilitiesChanged:(id)arg2;
- (void)meshController:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (id)pairLegacyShim;
- (void)performCapabilitiesUpdate;
- (void)setAvailableCapabilities:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGatheredCapabilities:(id)arg1;
- (void)setSupportedCapabilities:(id)arg1;
- (id)supportedCapabilities;
- (void)willRemoveFromMeshController:(id)arg1;

@end
