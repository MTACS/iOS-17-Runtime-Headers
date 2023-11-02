
@interface _MPCAutoPlayEnumerationResult2 : NSObject <MPSectionedIdentifierListEnumerationItem> {
    NSString * _sectionIdentifier;
}

@property (nonatomic, readonly) long long branchDepth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entryType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (getter=isRemoved, nonatomic, readonly) bool removed;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)branchDepth;
- (long long)entryType;
- (id)initWithSectionIdentifier:(id)arg1;
- (bool)isRemoved;
- (id)itemIdentifier;
- (id)itemResult;
- (id)sectionIdentifier;
- (id)trackingEntryResult;

@end
