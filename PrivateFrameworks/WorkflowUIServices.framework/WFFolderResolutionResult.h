
@interface WFFolderResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithFolderToConfirm:(id)arg1;
+ (id)disambiguationWithFoldersToDisambiguate:(id)arg1;
+ (id)successWithResolvedFolder:(id)arg1;
+ (bool)supportsSecureCoding;

@end
