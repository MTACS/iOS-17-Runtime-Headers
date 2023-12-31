
@interface SKUISuggestedHandlesSettingsHeaderFooterDescription : SKUISettingsHeaderFooterDescription {
    SKUIClientContext * _clientContext;
    <SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> * _delegate;
    NSArray * _suggestedHandles;
}

@property (nonatomic) <SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> *delegate;

- (void).cxx_destruct;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1;
- (id)delegate;
- (id)helpText;
- (id)initWithSuggestedHandles:(id)arg1 clientContext:(id)arg2 delegate:(id)arg3;
- (void)selectedHandleAtIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)suggestedHandles;

@end
