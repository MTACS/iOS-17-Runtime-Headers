
@interface HUInputSourceItemModule : HUChildServiceEditorItemModule {
    HFItem * _chooseInputsSelectionItem;
}

@property (nonatomic, readonly) HFItem *chooseInputsSelectionItem;

+ (id /* block */)_serviceItemComparatorForTelevisionProfile:(id)arg1;
+ (id)supportedServiceTypes;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (bool)canToggleConfigurationStateForItem:(id)arg1;
- (id)chooseInputsSelectionItem;

@end
