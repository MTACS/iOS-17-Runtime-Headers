
@protocol UnifiedFieldDelegate <UITextFieldDelegate>

@required

- (void)unifiedField:(UnifiedField *)arg1 didEndEditingWithAddress:(NSString *)arg2;
- (void)unifiedField:(UnifiedField *)arg1 didEndEditingWithParsecTopHit:(id <CompletionItem>)arg2;
- (void)unifiedField:(UnifiedField *)arg1 didEndEditingWithSearch:(NSString *)arg2;
- (void)unifiedField:(UnifiedField *)arg1 didEngageWithQuerySuggestion:(CKContextResult *)arg2 forQueryString:(NSString *)arg3;
- (void)unifiedField:(UnifiedField *)arg1 focusNextKeyView:(bool)arg2;
- (void)unifiedField:(UnifiedField *)arg1 moveCompletionSelectionByRowOffset:(long long)arg2;
- (void)unifiedField:(UnifiedField *)arg1 moveCompletionSelectionBySectionOffset:(long long)arg2;
- (bool)unifiedField:(UnifiedField *)arg1 shouldWaitForTopHitForText:(NSString *)arg2;
- (<CompletionItem> *)unifiedField:(UnifiedField *)arg1 topHitForText:(NSString *)arg2;
- (void)unifiedField:(UnifiedField *)arg1 willUpdateUserTypedText:(NSString *)arg2 toText:(NSString *)arg3;
- (void)unifiedFieldDidUpdateUserTypedText:(UnifiedField *)arg1 forQueryString:(NSString *)arg2 didUpdateSuggestions:(bool)arg3;
- (void)unifiedFieldExternalSearchDidEnd:(UnifiedField *)arg1;
- (void)unifiedFieldMakeWindowKey:(UnifiedField *)arg1;
- (void)unifiedFieldReflectedItemDidChange:(UnifiedField *)arg1;
- (void)unifiedFieldSelectCompletionItemIfAvailable:(UnifiedField *)arg1;
- (bool)unifiedFieldShouldMoveCompletionSelection:(UnifiedField *)arg1;
- (void)unifiedFieldShouldPasteAndNavigate:(UnifiedField *)arg1;
- (void)unifiedFieldVoiceSearchStateDidChange:(UnifiedField *)arg1;

@end
