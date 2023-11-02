
@interface HUSiriLanguageOptionItemProvider : HFItemProvider {
    HFAccessorySettingSiriLanguageAdapter * _adapter;
    NSSet * _items;
    unsigned long long  _optionStyle;
    HFSiriLanguageOptionsManager * _siriLanguageOptionsManager;
    HFItem * _sourceItem;
}

@property (nonatomic, readonly) HFAccessorySettingSiriLanguageAdapter *adapter;
@property (nonatomic, retain) NSSet *items;
@property (nonatomic, readonly) unsigned long long optionStyle;
@property (nonatomic, retain) HFSiriLanguageOptionsManager *siriLanguageOptionsManager;
@property (nonatomic, retain) HFItem *sourceItem;

- (void).cxx_destruct;
- (id)_createSiriLanguageOptionItems:(id)arg1;
- (id)_reloadItemsWithAdapter;
- (id)_reloadItemsWithSiriLanguageOptionsManager;
- (id)adapter;
- (id)initWithAdapter:(id)arg1 optionStyle:(unsigned long long)arg2;
- (id)initWithSiriLanguageOptionsManager:(id)arg1 sourceItem:(id)arg2 optionStyle:(unsigned long long)arg3;
- (id)items;
- (unsigned long long)optionStyle;
- (id)reloadItems;
- (void)setItems:(id)arg1;
- (void)setSiriLanguageOptionsManager:(id)arg1;
- (void)setSourceItem:(id)arg1;
- (id)siriLanguageOptionsManager;
- (id)sourceItem;

@end
