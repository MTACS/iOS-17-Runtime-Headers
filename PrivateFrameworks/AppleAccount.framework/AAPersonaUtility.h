
@interface AAPersonaUtility : NSObject

+ (id)findEnterprisePersonaIdentifier;
+ (bool)isDataSeparatedAccount:(id)arg1;
+ (bool)personaConsistencyCheck:(id)arg1;
+ (void)verifyAndFixPersonaIfNeeded:(id)arg1 desiredContext:(id)arg2;

@end
