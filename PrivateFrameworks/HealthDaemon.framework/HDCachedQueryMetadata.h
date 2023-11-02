
@interface HDCachedQueryMetadata : NSObject {
    NSDate * _anchorDate;
    NSString * _buildVersion;
    NSString * _cachingIdentifier;
    long long  _generationNumber;
    NSDateComponents * _intervalComponents;
    long long  _maxAnchor;
    NSNumber * _queryEndIndex;
    NSNumber * _queryStartIndex;
    long long  _sourceEntityPersistentID;
}

@property (nonatomic, readonly, copy) NSDate *anchorDate;
@property (nonatomic, readonly, copy) NSString *buildVersion;
@property (nonatomic, readonly, copy) NSString *cachingIdentifier;
@property (nonatomic, readonly) long long generationNumber;
@property (nonatomic, readonly, copy) NSDateComponents *intervalComponents;
@property (nonatomic, readonly) long long maxAnchor;
@property (nonatomic, readonly, copy) NSNumber *queryEndIndex;
@property (nonatomic, readonly, copy) NSNumber *queryStartIndex;
@property (nonatomic, readonly) long long sourceEntityPersistentID;

- (void).cxx_destruct;
- (id)anchorDate;
- (id)buildVersion;
- (id)cachingIdentifier;
- (long long)generationNumber;
- (id)initWithCachingIdentifier:(id)arg1 sourceEntityPersistentID:(long long)arg2 buildVersion:(id)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5;
- (id)initWithCachingIdentifier:(id)arg1 sourceEntityPersistentID:(long long)arg2 maxAnchor:(long long)arg3 queryStartIndex:(id)arg4 queryEndIndex:(id)arg5 generationNumber:(long long)arg6 buildVersion:(id)arg7 anchorDate:(id)arg8 intervalComponents:(id)arg9;
- (id)intervalComponents;
- (bool)isEqual:(id)arg1;
- (long long)maxAnchor;
- (id)queryEndIndex;
- (id)queryStartIndex;
- (long long)sourceEntityPersistentID;

@end
