
@interface MPStoreItemMetadataResponse : NSObject <NSCopying> {
    NSArray * _cacheMissItemIdentifiers;
    bool  _finalResponse;
    NSMutableDictionary * _itemIdentifierToStoreItemMetadata;
    NSArray * _lastBatchItemIdentifiers;
    ICURLAggregatedPerformanceMetrics * _performanceMetrics;
    NSArray * _requestItemIdentifiers;
}

@property (nonatomic, copy) NSArray *cacheMissItemIdentifiers;
@property (nonatomic, readonly, copy) NSDate *earliestExpirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (getter=isFinalResponse, nonatomic) bool finalResponse;
@property (nonatomic, readonly, copy) NSArray *itemIdentifiers;
@property (nonatomic, copy) NSArray *lastBatchItemIdentifiers;
@property (nonatomic, readonly, copy) NSArray *lastBatchStoreItemDictionaries;
@property (nonatomic, retain) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (nonatomic, copy) NSArray *requestItemIdentifiers;

- (void).cxx_destruct;
- (id)cacheMissItemIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)earliestExpirationDate;
- (id)init;
- (bool)isExpired;
- (bool)isFinalResponse;
- (id)itemIdentifiers;
- (id)lastBatchItemIdentifiers;
- (id)lastBatchStoreItemDictionaries;
- (id)performanceMetrics;
- (id)requestItemIdentifiers;
- (void)setCacheMissItemIdentifiers:(id)arg1;
- (void)setFinalResponse:(bool)arg1;
- (void)setLastBatchItemIdentifiers:(id)arg1;
- (void)setPerformanceMetrics:(id)arg1;
- (void)setRequestItemIdentifiers:(id)arg1;
- (void)setStoreItemMetadata:(id)arg1 forItemIdentifier:(id)arg2;
- (id)storeItemMetadataForItemIdentifier:(id)arg1;
- (id)storeItemMetadataForItemIdentifier:(id)arg1 returningIsFinalMetadata:(bool*)arg2;

@end
