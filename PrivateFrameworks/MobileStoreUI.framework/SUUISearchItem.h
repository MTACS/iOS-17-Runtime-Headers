
@interface SUUISearchItem : SUUIItem {
    NSArray * _childItemIdentifiers;
    NSMutableDictionary * _loadedChildItems;
    SUUIScreenshot * _primaryScreenshot;
    NSArray * _screenshots;
}

@property (nonatomic, readonly) SUUIScreenshot *primaryScreenshot;
@property (nonatomic, readonly) NSArray *screenshots;

- (void).cxx_destruct;
- (id)childItemForIdentifier:(id)arg1;
- (id)childItemIdentifiers;
- (id)initWithLookupDictionary:(id)arg1;
- (id)loadedChildItems;
- (id)primaryScreenshot;
- (id)screenshots;
- (void)setChildItem:(id)arg1 forIdentifier:(id)arg2;

@end
