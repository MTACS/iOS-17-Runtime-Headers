
@interface SLDActiveCallService : SLDRemoteRenderingService <SLDActiveCallService, SLDService> {
    UISSlotMachine * _activeCallViewSlotMachine;
}

@property (nonatomic, retain) UISSlotMachine *activeCallViewSlotMachine;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)remoteObjectProtocol;
+ (id)sharedService;

- (void).cxx_destruct;
- (id)_lookupActiveTUConversation;
- (void)activeCallViewForStyle:(id)arg1 maxWidth:(double)arg2 layerContextID:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (id)activeCallViewSlotMachine;
- (void)setActiveCallViewSlotMachine:(id)arg1;
- (id)slotMachineForViewIdentifier:(id)arg1;

@end
