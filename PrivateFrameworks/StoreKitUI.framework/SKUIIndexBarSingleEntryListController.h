
@interface SKUIIndexBarSingleEntryListController : SKUIIndexBarEntryListController {
    SKUIViewElement * _descriptiveViewElement;
    SKUIIndexBarEntryDescriptor * _entryDescriptor;
    SKUIIndexBarEntryViewElement * _entryViewElement;
}

@property (nonatomic, readonly) SKUIIndexBarEntryViewElement *entryViewElement;

- (void).cxx_destruct;
- (id)entryDescriptorAtIndex:(long long)arg1;
- (id)entryViewElement;
- (bool)hidesIndexBar;
- (id)initWithEntryViewElement:(id)arg1;
- (bool)needsRootTargetViewElement;
- (long long)numberOfEntryDescriptors;
- (void)reloadViewElementData;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2;

@end
