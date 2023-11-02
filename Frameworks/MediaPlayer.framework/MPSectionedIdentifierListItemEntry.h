
@interface MPSectionedIdentifierListItemEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationItem> {
    NSMutableArray * _clonedEntries;
    bool  _dataSourceCloned;
    bool  _dataSourceMoved;
    bool  _hasClones;
    NSString * _itemIdentifier;
    MPSectionedIdentifierListItemEntry * _rootEntry;
    bool  _userCloned;
    bool  _userMoved;
    bool  _userRemoved;
}

@property (nonatomic, readonly) long long branchDepth;
@property (nonatomic, retain) NSMutableArray *clonedEntries;
@property (getter=isDataSourceCloned, nonatomic, readonly) bool dataSourceCloned;
@property (getter=isDataSourceMoved, nonatomic, readonly) bool dataSourceMoved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entryType;
@property (nonatomic, readonly) bool hasClones;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) MPSectionedIdentifierListItemEntry *latestDataSourceClone;
@property (nonatomic, readonly) MPSectionedIdentifierListItemEntry *latestUserClone;
@property (getter=isRemoved, nonatomic, readonly) bool removed;
@property (nonatomic) MPSectionedIdentifierListItemEntry *rootEntry;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (nonatomic, readonly) struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; long long x9; } state;
@property (readonly) Class superclass;
@property (getter=isUserCloned, nonatomic, readonly) bool userCloned;
@property (getter=isUserMoved, nonatomic, readonly) bool userMoved;
@property (getter=isUserRemoved, nonatomic, readonly) bool userRemoved;

+ (id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2;
+ (id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 generationPrefix:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_generationNumber;
- (id)_stateDumpObject;
- (id)clonedEntries;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)entryType;
- (bool)hasClones;
- (id)initWithCoder:(id)arg1;
- (bool)isDataSourceCloned;
- (bool)isDataSourceMoved;
- (bool)isDataSourceRemoved;
- (bool)isRemoved;
- (bool)isUserCloned;
- (bool)isUserMoved;
- (bool)isUserRemoved;
- (id)itemIdentifier;
- (id)latestDataSourceClone;
- (id)latestUserClone;
- (id)newClonedEntry;
- (void)prepareForDealloc;
- (id)rootEntry;
- (void)setClonedEntries:(id)arg1;
- (void)setDataSourceCloned;
- (void)setDataSourceMoved;
- (void)setDataSourceRemoved;
- (void)setRootEntry:(id)arg1;
- (void)setUserCloned;
- (void)setUserMoved;
- (void)setUserRemoved;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; long long x9; })state;
- (id)stringRepresentation;

@end
