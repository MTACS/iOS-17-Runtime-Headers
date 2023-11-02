
@interface PLDuplicateGroup : NSObject {
    NSMutableSet * _mutableExcludedGroup;
    NSMutableSet * _mutableGroup;
    NSMutableSet * _mutableSubGroups;
}

@property (readonly) NSSet *excludedGroup;
@property (readonly) NSSet *group;
@property (readonly) bool hasExcludedItems;
@property (readonly) bool hasSubGroups;
@property (readonly) NSSet *subGroups;

- (void).cxx_destruct;
- (void)addManagedObjectID:(id)arg1;
- (void)addSubGroup:(id)arg1;
- (void)compactSubGroups;
- (id)debugDescription;
- (void)excludeManagedObjectID:(id)arg1;
- (id)excludedGroup;
- (id)group;
- (bool)hasExcludedItems;
- (bool)hasSubGroups;
- (id)init;
- (id)initWithGroupResults:(id)arg1;
- (id)printStringListFromOIDs:(id)arg1;
- (void)replaceSubGroups:(id)arg1;
- (id)subGroups;

@end
