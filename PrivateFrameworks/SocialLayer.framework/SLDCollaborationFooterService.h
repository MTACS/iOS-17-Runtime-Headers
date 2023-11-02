
@interface SLDCollaborationFooterService : SLDRemoteRenderingService <SLDFooterViewService, SLDService> {
    UISSlotMachine * _footerViewSlotMachine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UISSlotMachine *footerViewSlotMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)nameFromNameComponents:(id)arg1;
+ (id)remoteObjectProtocol;
+ (id)sharedService;
+ (void)slotForModel:(id)arg1 maxWidth:(double)arg2 completion:(id /* block */)arg3;
+ (void)slotForModelNeedingNameAndEmail:(id)arg1 maxWidth:(double)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)footerViewForModel:(id)arg1 style:(id)arg2 maxWidth:(double)arg3 layerContextID:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (id)footerViewSlotMachine;
- (void)setFooterViewSlotMachine:(id)arg1;
- (id)slotMachineForViewIdentifier:(id)arg1;

@end
