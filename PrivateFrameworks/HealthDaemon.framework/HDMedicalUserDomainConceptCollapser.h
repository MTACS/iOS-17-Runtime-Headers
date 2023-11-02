
@interface HDMedicalUserDomainConceptCollapser : HDUserDomainConceptCollapser

+ (id)mergeSubclassDataTo:(id)arg1 fromDuplicateConcept:(id)arg2;
+ (bool)preDeduplicationProcessingForUserDomainConcept:(id)arg1 duplicateConcept:(id)arg2 transaction:(id)arg3 error:(id*)arg4;

@end
