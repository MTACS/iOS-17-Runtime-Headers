
@interface HDUserDomainConceptAPIObjectManager : NSObject

+ (bool)_enumerateConceptDeriveAPIObjectAndAddToResults:(id)arg1 mutableResults:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)allAPIObjectsFromUserDomainConceptsWithProfile:(id)arg1 error:(id*)arg2;
+ (bool)generateAPIObjectForUserDomainConcept:(id)arg1 apiObjectOut:(id*)arg2 profile:(id)arg3 error:(id*)arg4;

@end
