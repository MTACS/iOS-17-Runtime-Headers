
@interface HomeUI.ActionGridItemModule : HomeUI.AccessoryItemModule <HFActionSetValueSourceDelegate> {
    void actionBuilderContainer;
    void config;
    void delegate;
}

- (void).cxx_destruct;
- (void)actionSetValueSource:(id)arg1 didUpdateValuesForActionBuilders:(id)arg2;
- (id)buildItemProviders;

@end
