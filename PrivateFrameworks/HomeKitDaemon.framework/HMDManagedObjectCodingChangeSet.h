
@interface HMDManagedObjectCodingChangeSet : NSObject {
    NSMutableDictionary * _changedObjects;
}

@property (getter=isEmpty, readonly) bool empty;

- (void).cxx_destruct;
- (long long)changeScopeForObjectWithID:(id)arg1 attributeKeys:(id*)arg2 relationshipKeys:(id*)arg3;
- (id)initWithCodingModel:(id)arg1 context:(id)arg2 changes:(id /* block */)arg3;
- (id)initWithCodingModel:(id)arg1 context:(id)arg2 transactions:(id)arg3;
- (bool)isEmpty;
- (id)shortDescriptionForChangeSet;

@end
