
@interface MAElementCollection : NSObject <NSCopying> {
    KGElementIdentifierSet * _elementIdentifiers;
    MAGraphReference * _graphReference;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) KGElementIdentifierSet *elementIdentifiers;
@property (readonly) <MAGraphProxy> *graph;
@property (readonly) MAGraphReference *graphReference;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) NSSet *labels;

- (void).cxx_destruct;
- (id)_anyElement;
- (void)_enumerateUsingBlock:(id /* block */)arg1;
- (id)array;
- (id)collectionByFormingUnionWith:(id)arg1;
- (id)collectionByIntersecting:(id)arg1;
- (id)collectionBySubtracting:(id)arg1;
- (bool)containsCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)elementIdentifiers;
- (void)enumerateDoublePropertyValuesForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateIdentifiersAsCollectionsWithBlock:(id /* block */)arg1;
- (void)enumerateIntegerPropertyValuesForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateStringPropertyValuesForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(id)arg1 withBlock:(id /* block */)arg2;
- (id)filteredCollectionUsingBlock:(id /* block */)arg1;
- (id)graph;
- (id)graphReference;
- (unsigned long long)hash;
- (id)initWithArray:(id)arg1 graph:(id)arg2;
- (id)initWithGraph:(id)arg1;
- (id)initWithGraph:(id)arg1 elementIdentifiers:(id)arg2;
- (id)initWithGraphReference:(id)arg1 elementIdentifiers:(id)arg2;
- (id)initWithSet:(id)arg1 graph:(id)arg2;
- (bool)intersectsCollection:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isSubsetOfCollection:(id)arg1;
- (id)labels;
- (id)set;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)temporaryArray;
- (id)temporarySet;

@end
