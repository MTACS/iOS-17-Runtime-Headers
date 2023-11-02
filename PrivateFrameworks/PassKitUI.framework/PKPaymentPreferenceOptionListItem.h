
@interface PKPaymentPreferenceOptionListItem : PKPaymentPreferenceListItem {
    id /* block */  _hasErrorHandler;
    id  _preference;
}

@property (nonatomic, readonly) id preference;

- (void).cxx_destruct;
- (id)_image;
- (id)_inlineEditingConfiguration;
- (id)_internalConfiguration;
- (id)_placeholderText;
- (id)_secondaryText;
- (bool)_supportsDeleteAction;
- (bool)_supportsEditAction;
- (bool)_supportsEditing;
- (id)_text;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPreference:(id)arg1 inSectionPreference:(id)arg2 hasErrorHandler:(id /* block */)arg3;
- (id)preference;
- (bool)supportsSwipeActionType:(int)arg1;

@end
