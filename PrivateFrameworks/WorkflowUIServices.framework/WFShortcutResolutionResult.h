
@interface WFShortcutResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithShortcutToConfirm:(id)arg1;
+ (id)disambiguationWithShortcutsToDisambiguate:(id)arg1;
+ (id)successWithResolvedShortcut:(id)arg1;
+ (bool)supportsSecureCoding;

@end
