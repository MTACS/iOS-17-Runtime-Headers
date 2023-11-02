
@interface MPSectionedIdentifierListEntry : NSObject <MPSectionedIdentifierListEnumerationResult, NSSecureCoding, _MPSectionedIdentifierListEncodableNextEntriesProviding> {
    long long  _branchDepth;
    bool  _dataSourceRemoved;
    NSString * _hostedSectionIdentifier;
    NSMutableArray * _nextEntries;
    MPSectionedIdentifierListEntryPositionKey * _positionKey;
    MPSectionedIdentifierListEntry * _previousEntry;
    NSString * _sectionIdentifier;
}

@property (nonatomic) long long branchDepth;
@property (getter=isDataSourceRemoved, nonatomic, readonly) bool dataSourceRemoved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entryType;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hostedSectionIdentifier;
@property (nonatomic, readonly) NSArray *nextEntries;
@property (nonatomic, readonly) MPSectionedIdentifierListEntryPositionKey *positionKey;
@property (nonatomic) MPSectionedIdentifierListEntry *previousEntry;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_stateDumpObject;
- (void)addBranch:(id)arg1 forceBranchDepthIncrease:(bool)arg2;
- (void)addNextEntry:(id)arg1;
- (long long)branchDepth;
- (id)description;
- (id)encodableNextEntriesWithExclusiveAccessToken:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)entryType;
- (id)hostedSectionIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2;
- (bool)isDataSourceRemoved;
- (id)itemResult;
- (id)nextEntries;
- (id)positionKey;
- (void)prepareForDealloc;
- (id)previousEntry;
- (id)sectionIdentifier;
- (void)setBranchDepth:(long long)arg1;
- (void)setDataSourceRemoved;
- (void)setHostedSectionIdentifier:(id)arg1;
- (void)setPreviousEntry:(id)arg1;
- (id)trackingEntryResult;

@end
