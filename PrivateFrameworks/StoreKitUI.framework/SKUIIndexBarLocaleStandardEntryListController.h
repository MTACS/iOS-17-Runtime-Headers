
@interface SKUIIndexBarLocaleStandardEntryListController : SKUIIndexBarEntryListController {
    SKUIIndexBarEntryListViewElement * _entryListViewElement;
    NSSet * _requiredVisibilitySet;
    IKViewElementStyle * _style;
}

- (void).cxx_destruct;
- (id)entryDescriptorAtIndex:(long long)arg1;
- (id)initWithSKUIIndexBarEntryListViewElement:(id)arg1;
- (long long)numberOfEntryDescriptors;
- (void)reloadViewElementData;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2;

@end
