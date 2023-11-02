
@interface SLDPillService : SLDRemoteRenderingService <SLDPillService, SLDService> {
    UISSlotMachine * _highlightDisambiguationPillSlotMachine;
    UISSlotMachine * _highlightPillSlotMachine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UISSlotMachine *highlightDisambiguationPillSlotMachine;
@property (nonatomic, retain) UISSlotMachine *highlightPillSlotMachine;
@property (readonly) Class superclass;

+ (id)remoteObjectProtocol;
+ (id)sharedService;

- (void).cxx_destruct;
- (id)_applicationIdentifierForConnection:(id)arg1;
- (id)_attributionsFromIDs:(id)arg1 appID:(id)arg2;
- (void)accessibilityLabelForAttributionIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)accessibilityLabelForAttributionIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)highlightDisambiguationPillForAttributionIdentifier:(id)arg1 style:(id)arg2 maxWidth:(double)arg3 variant:(unsigned long long)arg4 layerContextID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (id)highlightDisambiguationPillSlotMachine;
- (void)highlightPillForAttributionIdentifiers:(id)arg1 style:(id)arg2 maxWidth:(double)arg3 variant:(unsigned long long)arg4 layerContextID:(unsigned long long)arg5 reply:(id /* block */)arg6;
- (id)highlightPillSlotMachine;
- (void)setHighlightDisambiguationPillSlotMachine:(id)arg1;
- (void)setHighlightPillSlotMachine:(id)arg1;
- (id)slotMachineForViewIdentifier:(id)arg1;

@end
