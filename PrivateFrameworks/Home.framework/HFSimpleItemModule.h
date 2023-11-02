
@interface HFSimpleItemModule : HFItemModule {
    NSSet * _itemProviders;
    id /* block */  _sectionBuilder;
}

@property (nonatomic, retain) NSSet *itemProviders;
@property (nonatomic, copy) id /* block */ sectionBuilder;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 itemProviders:(id)arg2 sectionBuilder:(id /* block */)arg3;
- (id)itemProviders;
- (id /* block */)sectionBuilder;
- (void)setItemProviders:(id)arg1;
- (void)setSectionBuilder:(id /* block */)arg1;

@end
