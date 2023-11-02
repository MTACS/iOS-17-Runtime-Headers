
@interface PKPaletteInputAssistantButtonProvider : NSObject {
    id /* block */  _inclusionFilter;
    UITextInputAssistantItem * _inputAssistantItem;
}

@property (nonatomic, copy) id /* block */ inclusionFilter;
@property (nonatomic, retain) UITextInputAssistantItem *inputAssistantItem;

- (void).cxx_destruct;
- (id)_nonSystemBarButtonItemGroups;
- (bool)_shouldIncludeBarButtonItem:(id)arg1;
- (id)buttonsForCurrentConfiguration;
- (id /* block */)inclusionFilter;
- (id)init;
- (id)initWithInputAssistantItem:(id)arg1;
- (id)inputAssistantItem;
- (void)setInclusionFilter:(id /* block */)arg1;
- (void)setInputAssistantItem:(id)arg1;

@end
