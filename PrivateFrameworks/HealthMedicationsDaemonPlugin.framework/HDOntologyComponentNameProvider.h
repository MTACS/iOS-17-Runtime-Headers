
@interface HDOntologyComponentNameProvider : NSObject

+ (id)_componentNamesFromClinicalProductConceptWithIdentifier:(id)arg1 ontologyTransaction:(id)arg2 error:(id*)arg3;
+ (id)_componentNamesFromClinicalProductIdentifiers:(id)arg1 deletedRelationshipVersion:(long long)arg2 ontologyTransaction:(id)arg3 error:(id*)arg4;
+ (bool)_conceptIdentifiersFollowingFormOfRelationshipForNodeWithIdentifier:(id)arg1 ontologyTransaction:(id)arg2 conceptIdentifierOut:(id*)arg3 deletedFormOfRelationshipVersionOut:(long long*)arg4 error:(id*)arg5;
+ (id)_conceptIdentifiersFollowingMultipleComponentRelationshipsForNodeWithIdentifier:(id)arg1 ontologyTransaction:(id)arg2 maximumComponentDeletedRelationshipVersionOut:(long long*)arg3 error:(id*)arg4;
+ (id)componentNamesForConceptWithIdentifier:(id)arg1 ontologyTransaction:(id)arg2 error:(id*)arg3;

@end
