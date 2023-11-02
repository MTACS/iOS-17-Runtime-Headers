
@interface PFUbiquityMetadataFactory : NSObject {
    NSManagedObjectModel * _cachedModel;
    NSMutableDictionary * _rootLocationToPeerIDToEntry;
    NSRecursiveLock * _rootLocationToPeerIDToEntryLock;
}

+ (void)_invalidateStaticCaches;
+ (void)initialize;

- (void)addModelingToolUserInfoToEntity:(id)arg1;
- (void)addModelingToolUserInfoToProperty:(id)arg1;
- (id)createMetadataModel;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)newAttributeNamed:(id)arg1 attributeType:(unsigned long long)arg2 isOptional:(bool)arg3 isTransient:(bool)arg4 withDefaultValue:(id)arg5 andMinValue:(id)arg6 andMaxValue:(id)arg7;
- (id)newEntityForName:(id)arg1;
- (id)newRelationshipNamed:(id)arg1 withDestinationEntity:(id)arg2 andInverseRelationship:(id)arg3 isOptional:(bool)arg4 isToMany:(bool)arg5 andDeleteRule:(unsigned long long)arg6;

@end
