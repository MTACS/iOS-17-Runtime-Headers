
@interface WFChooseFromListItemResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithChooseFromListItemToConfirm:(id)arg1;
+ (id)disambiguationWithChooseFromListItemsToDisambiguate:(id)arg1;
+ (id)successWithResolvedChooseFromListItem:(id)arg1;
+ (bool)supportsSecureCoding;

@end
