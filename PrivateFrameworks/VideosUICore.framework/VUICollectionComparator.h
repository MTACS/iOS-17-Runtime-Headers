
@interface VUICollectionComparator : NSObject

+ (id)_identifiersWithObjects:(id)arg1 identifierBlock:(id /* block */)arg2;
+ (id)_indexByIdentifierDictionaryWithIdentifiers:(id)arg1;
+ (id)_movedIdentifiersWithSourceIdentifiers:(id)arg1 destinationIdentifiers:(id)arg2;

- (id)_changeSetWithSourceObjects:(id)arg1 destinationObjects:(id)arg2 identifierBlock:(id /* block */)arg3 isEqualBlock:(id /* block */)arg4 updateChangeSetBlock:(id /* block */)arg5;
- (id)changeSetFromObjects:(id)arg1 toObjects:(id)arg2 identifierBlock:(id /* block */)arg3 isEqualBlock:(id /* block */)arg4;
- (id)changeSetFromObjects:(id)arg1 toObjects:(id)arg2 identifierBlock:(id /* block */)arg3 updateChangeSetBlock:(id /* block */)arg4;

@end
