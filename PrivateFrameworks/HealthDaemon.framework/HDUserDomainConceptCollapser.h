
@interface HDUserDomainConceptCollapser : NSObject

+ (id)collapseUserDomainConcept:(id)arg1 with:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)keepOldestConcept;
+ (id)mergeSubclassDataTo:(id)arg1 fromDuplicateConcept:(id)arg2;
+ (bool)preDeduplicationProcessingForUserDomainConcept:(id)arg1 duplicateConcept:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)shouldDeleteDuplicateConcept;

- (id)init;

@end
