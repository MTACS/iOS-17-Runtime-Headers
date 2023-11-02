
@interface _MPSectionedIdentifierListCloneIndexEntry : NSObject {
    NSMutableSet * _clonedEntries;
    MPSectionedIdentifierListItemEntry * _rootEntry;
}

@property (nonatomic, retain) NSMutableSet *clonedEntries;
@property (nonatomic, retain) MPSectionedIdentifierListItemEntry *rootEntry;

- (void).cxx_destruct;
- (id)clonedEntries;
- (id)init;
- (id)rootEntry;
- (void)setClonedEntries:(id)arg1;
- (void)setRootEntry:(id)arg1;

@end
