
@interface CKMergeableDeltaVectors : NSObject <NSCopying> {
    CKDistributedTimestampStateVector * _contents;
    CKDistributedTimestampClockVector * _dependencies;
    CKDistributedTimestampClockVector * _previous;
    CKDistributedTimestampStateVector * _removals;
}

@property (nonatomic, readonly, copy) CKDistributedTimestampStateVector *contents;
@property (nonatomic, readonly, copy) CKDistributedTimestampClockVector *dependencies;
@property (nonatomic, readonly, copy) CKDistributedTimestampClockVector *previous;
@property (nonatomic, readonly, copy) CKDistributedTimestampStateVector *removals;

+ (bool)addToAttributedVector:(id)arg1 fromPVersionVector:(id)arg2 forSiteIdentifier:(id)arg3 error:(id*)arg4;
+ (bool)mergeTimestamps:(id)arg1 intoDeltaMetadataVectors:(id)arg2 error:(id*)arg3;
+ (id)mergeableDeltaMetadataVectorsByCombiningVectors:(id)arg1;
+ (id)pDistributedTimestampsFromDeltaMetadataVectors:(id)arg1;
+ (id)pDistributedTimestampsWithPreviousVector:(id)arg1 contentsVector:(id)arg2 removalsVector:(id)arg3 dependenciesVector:(id)arg4;

- (void).cxx_destruct;
- (bool)_validate:(id*)arg1;
- (id)contents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)dependencies;
- (id)description;
- (id)descriptionWithStringSiteIdentifiers:(bool)arg1 usingSuperscripts:(bool)arg2;
- (unsigned long long)hash;
- (id)initWithPreviousStateVector:(id)arg1 currentStateVector:(id)arg2;
- (id)initWithPreviousVector:(id)arg1 contentsVector:(id)arg2 removalsVector:(id)arg3 dependenciesVector:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)previous;
- (unsigned long long)protobufSize;
- (id)removals;

@end
