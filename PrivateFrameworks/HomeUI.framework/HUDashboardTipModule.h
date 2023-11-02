
@interface HUDashboardTipModule : HFItemModule {
    void dashboardTipItemProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  eligibleTip;
    void tipObservationTask;
}

@property (nonatomic, readonly) NSSet *itemProviders;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithContext:(id)arg1 itemUpdater:(id)arg2;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 descriptionText:(id)arg2;
- (id)itemProviders;
- (void)setupTipsObserver;

@end
