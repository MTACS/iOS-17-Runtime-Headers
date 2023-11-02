
@interface SUUIIndexBarSingleEntryListController : SUUIIndexBarEntryListController {
    SUUIViewElement * _descriptiveViewElement;
    SUUIIndexBarEntryDescriptor * _entryDescriptor;
    SUUIIndexBarEntryViewElement * _entryViewElement;
}

@property (nonatomic, readonly) SUUIIndexBarEntryViewElement *entryViewElement;

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
