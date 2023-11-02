
@interface PREditingVibrantColorItemsDataSource : NSObject <PREditingColorItemsDataSource> {
    PREditorColorPickerConfiguration * _configuration;
    NSArray * _items;
    PREditingColorVariationStore * _variationStore;
}

@property (nonatomic, retain) PREditorColorPickerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *items;
@property (readonly) Class superclass;
@property (nonatomic, retain) PREditingColorVariationStore *variationStore;

- (void).cxx_destruct;
- (void)buildItems;
- (id)colorItemForIndex:(unsigned long long)arg1;
- (id)configuration;
- (id)firstColorItemPassingTest:(id /* block */)arg1;
- (unsigned long long)indexForItem:(id)arg1;
- (id)initWithConfiguration:(id)arg1 variationStore:(id)arg2;
- (id)items;
- (unsigned long long)numberOfItems;
- (void)setConfiguration:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setVariationStore:(id)arg1;
- (id)variationStore;

@end
