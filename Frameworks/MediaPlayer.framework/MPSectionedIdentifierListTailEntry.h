
@interface MPSectionedIdentifierListTailEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationTrackingEntry> {
    MPSectionedIdentifierListHeadEntry * _sectionHeadEntry;
}

@property (nonatomic, readonly) long long branchDepth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entryType;
@property (readonly) unsigned long long hash;
@property (nonatomic) MPSectionedIdentifierListHeadEntry *sectionHeadEntry;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (readonly) Class superclass;

+ (id)tailEntryWithSectionHeadEntry:(id)arg1;

- (void).cxx_destruct;
- (long long)entryType;
- (id)previousEntry;
- (id)sectionHeadEntry;
- (void)setSectionHeadEntry:(id)arg1;

@end
