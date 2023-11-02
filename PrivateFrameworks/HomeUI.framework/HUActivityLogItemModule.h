
@interface HUActivityLogItemModule : HFItemModule {
    void activityLogEnableItem;
    void home;
}

- (void).cxx_destruct;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithHome:(id)arg1 itemUpdater:(id)arg2;
- (id)initWithItemUpdater:(id)arg1;

@end
