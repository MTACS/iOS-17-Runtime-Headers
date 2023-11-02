
@interface HDOntologyConceptManager : NSObject <HDHealthDaemonReadyObserver, HDOntologyShardImporterObserver> {
    NSMutableDictionary * _attributeIdentifierByCodingSystemURN;
    bool  _attributeIdentifierByCodingSystemURNIsReady;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _attributeIdentifierByCodingSystemURNLock;
    HDDatabaseValueCache * _conceptsByIdentifier;
    HDProfile * _profile;
    id /* block */  _unitTesting_didResetAttributeIdentifierMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool unitTesting_attributeIdentifierByCodingSystemURNMapIsReady;
@property (nonatomic, copy) id /* block */ unitTesting_didResetAttributeIdentifierMap;

+ (id)conceptForCodingCollection:(id)arg1 configuration:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)enumerateConceptsMatchingPredicate:(id)arg1 options:(unsigned long long)arg2 limit:(unsigned long long)arg3 transaction:(id)arg4 error:(id*)arg5 enumerationHandler:(id /* block */)arg6;
+ (bool)enumerateConceptsMatchingPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (bool)enumerateRelationshipsMatchingPredicate:(id)arg1 options:(unsigned long long)arg2 transaction:(id)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
+ (bool)followRelationshipsWithTypes:(id)arg1 startingIdentifier:(id)arg2 options:(unsigned long long)arg3 ontologyTransaction:(id)arg4 conceptOut:(id*)arg5 deletedRelationshipVersionOut:(long long*)arg6 error:(id*)arg7;
+ (id)inflateGraphWithRootConceptsPredicate:(id)arg1 limit:(long long)arg2 maximumDepth:(long long)arg3 attributeTypes:(id)arg4 relationshipTypes:(id)arg5 ontologyTransaction:(id)arg6 error:(id*)arg7;
+ (id)predicateForConceptsFollowingRelationshipOfTypes:(id)arg1 fromSubjectId:(id)arg2;
+ (id)predicateForRelationshipsWithTypes:(id)arg1 onConceptId:(id)arg2;
+ (id)predicateMatchingConceptWithID:(id)arg1;
+ (id)predicateMatchingConceptsWithAttributeType:(long long)arg1 attributeValue:(id)arg2;
+ (id)predicateMatchingConceptsWithAttributeType:(long long)arg1 likeAttributeValue:(id)arg2;
+ (id)predicateMatchingConceptsWithRelationshipType:(long long)arg1 withObjectId:(id)arg2;
+ (id)predicateMatchingConceptsWithRelationshipType:(long long)arg1 withSubjectId:(id)arg2;
+ (id)predicateMatchingRelationshipsWithSubjectId:(id)arg1 relationshipType:(long long)arg2;
+ (id)predicateToExcludeSentinel;
+ (id)relationshipsForConceptWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)attributeIdentifierForCodingSystem:(id)arg1;
- (id)conceptForIdentifier:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)conceptForIdentifier:(id)arg1 options:(unsigned long long)arg2 transaction:(id)arg3 error:(id*)arg4;
- (id)conceptsForIdentifiers:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)conceptsForIdentifiers:(id)arg1 options:(unsigned long long)arg2 transaction:(id)arg3 error:(id*)arg4;
- (void)daemonReady:(id)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (void)ontologyShardImporter:(id)arg1 didImportEntry:(id)arg2;
- (void)setUnitTesting_didResetAttributeIdentifierMap:(id /* block */)arg1;
- (bool)unitTesting_attributeIdentifierByCodingSystemURNMapIsReady;
- (id /* block */)unitTesting_didResetAttributeIdentifierMap;

@end
