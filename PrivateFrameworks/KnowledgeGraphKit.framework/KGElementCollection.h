
@interface KGElementCollection : NSObject {
    KGGraph * _graph;
    KGElementIdentifierSet * _identifiers;
}

@property (readonly) NSArray *allObjects;
@property (readonly) <KGElement> *anyObject;
@property (readonly) unsigned long long count;
@property (nonatomic, readonly) KGGraph *graph;
@property (nonatomic, readonly) KGElementIdentifierSet *identifiers;
@property (readonly) NSSet *set;

- (void).cxx_destruct;
- (id)allObjects;
- (id)anyObject;
- (id)collectionByFormingUnionWithCollection:(id)arg1;
- (id)collectionByIntersectingCollection:(id)arg1;
- (id)collectionBySubtractingCollection:(id)arg1;
- (bool)containsCollection:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (void)enumerateElementIdentifierBatchesWithBatchSize:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateElementsWithBatchSize:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePropertyValuesForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (id)graph;
- (unsigned long long)hash;
- (id)identifiers;
- (id)initWithIdentifiers:(id)arg1 graph:(id)arg2;
- (bool)intersectsCollection:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCollection:(id)arg1;
- (bool)isSubsetOfCollection:(id)arg1;
- (id)set;

@end
