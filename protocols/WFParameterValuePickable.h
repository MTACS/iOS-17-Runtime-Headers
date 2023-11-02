
@protocol WFParameterValuePickable <NSObject>

@required

- (bool)wf_allowsMultipleSelection;
- (bool)wf_alwaysScaleIconImage;
- (NSString *)wf_displayLocalizedPrompt;
- (void)wf_loadStatesWithSearchTerm:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INObjectCollection *, NSString *, NSError *, void*
- (WFImage *)wf_pickerLocalizedImageForState:(WFVariableSubstitutableParameterState *)arg1;
- (NSString *)wf_pickerLocalizedSubtitleForState:(WFVariableSubstitutableParameterState *)arg1;
- (NSString *)wf_pickerLocalizedTitleForState:(WFVariableSubstitutableParameterState *)arg1;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INObjectCollection *, NSString *, NSError *, void*
- (bool)wf_shouldValidateCurrentStateOnCollectionChanged;
- (bool)wf_supportsSearch;
- (bool)wf_usesGroupTableViewStyle;
- (bool)wf_usesTogglesForSelection;

@optional

- (WFIcon *)wf_pickerLocalizedIconForState:(WFVariableSubstitutableParameterState *)arg1;

@end
