
@interface HUFirmwareUpdateItemModule : HFItemModule {
    HUFirmwareUpdateItemProvider * _firmwareUpdateItemProvider;
    HMHome * _home;
}

@property (nonatomic, retain) HUFirmwareUpdateItemProvider *firmwareUpdateItemProvider;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)firmwareUpdateItemProvider;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (void)setFirmwareUpdateItemProvider:(id)arg1;
- (id)transformedUpdateOutcomeForItem:(id)arg1 proposedOutcome:(id)arg2;

@end
