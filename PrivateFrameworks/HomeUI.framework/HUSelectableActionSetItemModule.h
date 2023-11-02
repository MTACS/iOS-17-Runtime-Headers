
@interface HUSelectableActionSetItemModule : HUActionSetItemModule {
    void sceneSectionHeaderTitle;
    void selectionController;
}

@property (nonatomic, copy) NSString *sceneSectionHeaderTitle;

- (void).cxx_destruct;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithHome:(id)arg1 itemUpdater:(id)arg2;
- (id)sceneSectionHeaderTitle;
- (void)setSceneSectionHeaderTitle:(id)arg1;

@end
