
@interface FCFDBFeed : NSObject {
    NSString * _feedID;
    long long  _feedLookupID;
    NSArray * _fetchedRanges;
    unsigned long long  _refreshedFromOrder;
    unsigned long long  _refreshedToOrder;
}

@property (nonatomic, readonly) NSString *feedID;
@property (nonatomic, readonly) long long feedLookupID;
@property (nonatomic, readonly) NSArray *fetchedRanges;
@property (nonatomic, readonly) NSData *fetchedRangesData;
@property (nonatomic, readonly) FCFeedRange *refreshRegion;
@property (nonatomic, readonly) unsigned long long refreshedFromOrder;
@property (nonatomic, readonly) unsigned long long refreshedToOrder;
@property (nonatomic, readonly) FCFeedRange *trailingEmptyRegion;

- (void).cxx_destruct;
- (void)_visitContiguousRangesInRange:(id)arg1 withBlock:(id /* block */)arg2;
- (id)contiguousFetchedRangeInRange:(id)arg1;
- (id)copyWithRefreshedFromOrder:(unsigned long long)arg1 refreshedToOrder:(unsigned long long)arg2 newlyFetchedRange:(id)arg3;
- (id)copyWithoutFetchedRange:(id)arg1;
- (void)d_sanityCheck;
- (void)enumerateGapsWithBlock:(id /* block */)arg1;
- (id)feedID;
- (long long)feedLookupID;
- (id)fetchedRangeFollowingOrder:(unsigned long long)arg1;
- (id)fetchedRangePrecedingOrder:(unsigned long long)arg1;
- (id)fetchedRanges;
- (id)fetchedRangesData;
- (bool)hasFetchedRangesInRange:(id)arg1;
- (id)initFromSQLWithFeedID:(const char *)arg1 feedLookupID:(long long)arg2 refreshedFromOrder:(long long)arg3 refreshedToOrder:(long long)arg4 fetchedRangesBytes:(const void*)arg5 fetchedRangesLength:(int)arg6;
- (id)initWithFeedID:(id)arg1 feedLookupID:(long long)arg2;
- (id)initWithFeedID:(id)arg1 feedLookupID:(long long)arg2 refreshedFromOrder:(unsigned long long)arg3 refreshedToOrder:(unsigned long long)arg4 fetchedRanges:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)refreshRegion;
- (unsigned long long)refreshedFromOrder;
- (unsigned long long)refreshedToOrder;
- (id)trailingEmptyRegion;

@end
