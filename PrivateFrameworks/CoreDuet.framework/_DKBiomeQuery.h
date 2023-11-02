
@interface _DKBiomeQuery : NSObject {
    NSArray * _eventStreamNames;
    NSSet * _excludedMetadataKeys;
    NSArray * _groupByProperties;
    unsigned long long  _limit;
    unsigned long long  _offset;
    NSPredicate * _predicate;
    bool  _readMetadata;
    long long  _resultType;
    bool  _returnDistinctResults;
    NSArray * _sortDescriptors;
}

+ (id)biomeExclusiveStreamsFromEventStreams:(id)arg1;
+ (bool)canShimDuetStreamNamed:(id)arg1;
+ (id)deletionPredicateFromArray:(id)arg1;
+ (id)duetExclusiveStreamsFromEventStreams:(id)arg1;
+ (id)eventStreamsFromArray:(id)arg1;
+ (id)eventStreamsFromPredicate:(id)arg1;
+ (bool)shimDisabled;
+ (bool)validateSortDescriptors:(id)arg1;

- (void).cxx_destruct;
- (id)_getCachedStreamForBiomeStreamIdentifier:(id)arg1;
- (id)_publisherForQueryReturningIndividualResults:(bool)arg1 error:(id*)arg2;
- (id)_publisherForStreams:(id)arg1;
- (void)_setBiomeStreamWithBlock:(id /* block */)arg1;
- (id)bmdkEventStreams;
- (id)executeBiomeQueryError:(id*)arg1;
- (unsigned long long)executeDeletionQuery:(id*)arg1;
- (id)filterExcludedMetadataWithDKEvent:(id)arg1;
- (id)initWithDKEventQuery:(id)arg1;
- (id)initWithDeletionArray:(id)arg1;
- (id)initWithDeletionPredicate:(id)arg1;
- (id)initWithEventStreams:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 sortDescriptors:(id)arg5 resultType:(long long)arg6 groupByProperties:(id)arg7 returnDistinctResults:(bool)arg8 readMetadata:(bool)arg9 excludedMetadataKeys:(id)arg10;
- (bool)prepareQuery:(id*)arg1;
- (id)publisherForQueryWithError:(id*)arg1;

@end
