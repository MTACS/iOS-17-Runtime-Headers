
@interface SFDomainAssociationUtilities : NSObject

+ (id)domainByStrippingSubdomainWildcardPrefixIfNecessary:(id)arg1;
+ (bool)domainIsProhibitedForSavingCredentials:(id)arg1;
+ (bool)highLevelDomainHasSuiteOfAssociatedApps:(id)arg1;

@end
