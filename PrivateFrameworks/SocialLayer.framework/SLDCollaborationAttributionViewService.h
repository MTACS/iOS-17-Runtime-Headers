
@interface SLDCollaborationAttributionViewService : SLDRemoteRenderingService <SLDCollaborationAttributionViewService, SLDService> {
    UISSlotMachine * _slotMachine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UISSlotMachine *slotMachine;
@property (readonly) Class superclass;

+ (id)remoteObjectProtocol;
+ (void)setupInterface:(id)arg1;
+ (id)sharedService;

- (void).cxx_destruct;
- (id)_applicationIdentifierForConnection:(id)arg1;
- (id)_attributionsFromIDs:(id)arg1 appID:(id)arg2;
- (void)accessibilityLabelForAttributionIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)collaborationAttributionViewForTitle:(id)arg1 attributionIdentifiers:(id)arg2 style:(id)arg3 placeholderGlyphConfiguration:(id)arg4 maxWidth:(double)arg5 variant:(long long)arg6 layerContextID:(unsigned long long)arg7 reply:(id /* block */)arg8;
- (void)setSlotMachine:(id)arg1;
- (id)slotMachine;
- (id)slotMachineForViewIdentifier:(id)arg1;

@end
