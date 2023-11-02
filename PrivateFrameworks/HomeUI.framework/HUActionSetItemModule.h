
@interface HUActionSetItemModule : HFItemModule {
    void actionSetItemProvider;
    void actionSetItemStyle;
    void filter;
    void home;
    void sortBlock;
}

@property (nonatomic, retain) HFActionSetItemProvider *actionSetItemProvider;
@property (nonatomic) unsigned long long actionSetItemStyle;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, copy) id /* block */ sortBlock;

+ (id)actionSetSectionIdentifier;

- (void).cxx_destruct;
- (id)actionSetItemProvider;
- (unsigned long long)actionSetItemStyle;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id /* block */)filter;
- (id)home;
- (id)initWithHome:(id)arg1 itemUpdater:(id)arg2;
- (id)initWithItemUpdater:(id)arg1;
- (void)setActionSetItemProvider:(id)arg1;
- (void)setActionSetItemStyle:(unsigned long long)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setSortBlock:(id /* block */)arg1;
- (id /* block */)sortBlock;

@end
