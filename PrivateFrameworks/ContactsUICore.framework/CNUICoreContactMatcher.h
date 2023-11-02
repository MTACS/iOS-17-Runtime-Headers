
@interface CNUICoreContactMatcher : NSObject

+ (bool)doesContact:(id)arg1 matchAnyParentOrGuardianInFamily:(id)arg2;
+ (bool)doesContact:(id)arg1 matchContact:(id)arg2;
+ (bool)doesNameOfContact:(id)arg1 matchNameOfContact:(id)arg2;
+ (bool)doesNameOfContact:(id)arg1 matchNameOfFamilyMember:(id)arg2;
+ (id)nameFromFammilyMember:(id)arg1;

@end
