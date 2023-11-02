
@interface HDOntologyLocalizedStringProvider : NSObject

+ (id)_localizedLoggingUnitForAttribute:(id)arg1 locale:(id)arg2 propertyType:(long long)arg3;
+ (id)_nullLocalizedOntologyStringsWithVersion:(long long)arg1 localesToDelete:(id)arg2 propertyType:(long long)arg3;
+ (id)localizedLoggingUnitsForConcept:(id)arg1;
+ (id)localizedOntologyPreferredNamesForConcept:(id)arg1 version:(id)arg2 withUserDomainConceptPropertyType:(long long)arg3;
+ (id)localizedOntologyPreferredNamesForConcept:(id)arg1 withUserDomainConceptPropertyType:(long long)arg2;
+ (id)nullLocalizedOntologyLoggingUnitsWithVersion:(long long)arg1 withUserDomainConceptPropertyType:(long long)arg2;
+ (id)nullLocalizedOntologyPreferredNamesWithVersion:(long long)arg1 withUserDomainConceptPropertyType:(long long)arg2;

@end
