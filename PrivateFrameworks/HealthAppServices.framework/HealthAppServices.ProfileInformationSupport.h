
@interface HealthAppServices.ProfileInformationSupport : NSObject

+ (id)localizedFullNameOrAccountIdentifierWithFirstName:(id)arg1 lastName:(id)arg2 isContact:(bool)arg3 accountIdentifier:(id)arg4 shouldDisplaySuggestedName:(bool)arg5 newlineBetweenNames:(bool)arg6;
+ (id)localizedShortNameOrAccountIdentifierWithFirstName:(id)arg1 lastName:(id)arg2 isContact:(bool)arg3 accountIdentifier:(id)arg4 shouldDisplaySuggestedName:(bool)arg5 newlineBetweenNames:(bool)arg6;

- (id)init;

@end
