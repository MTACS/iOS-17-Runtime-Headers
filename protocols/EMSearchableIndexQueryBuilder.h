
@protocol EMSearchableIndexQueryBuilder <NSObject>

@required

- (bool)attribute;
- (NSString *)bundleID;
- (id /* block */)changedAttributeResultsBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSString *, NSArray *, void*, id, SEL
- (id /* block */)changedItemsBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSArray *, void*, id, SEL
- (id /* block */)completionBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (id /* block */)countChangedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, long long, void*, id, SEL
- (bool)counting;
- (id /* block */)failureBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (NSArray *)fetchAttributes;
- (id /* block */)foundAttributeResultsBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSString *, NSArray *, void*, id, SEL
- (id /* block */)gatheredBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (bool)live;
- (NSString *)logIdentifier;
- (long long)maxCount;
- (NSArray *)protectionClasses;
- (NSArray *)rankingQueries;
- (id /* block */)removedItemsBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSArray *, void*, id, SEL
- (id /* block */)resultsBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSArray *, void*, id, SEL
- (void)setAttribute:(bool)arg1;
- (void)setBundleID:(NSString *)arg1;
- (void)setChangedAttributeResultsBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSArray *, void*
- (void)setChangedItemsBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)setCompletionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setCountChangedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)setCounting:(bool)arg1;
- (void)setFailureBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setFetchAttributes:(NSArray *)arg1;
- (void)setFoundAttributeResultsBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSArray *, void*
- (void)setGatheredBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setLive:(bool)arg1;
- (void)setLogIdentifier:(NSString *)arg1;
- (void)setMaxCount:(long long)arg1;
- (void)setProtectionClasses:(NSArray *)arg1;
- (void)setRankingQueries:(NSArray *)arg1;
- (void)setRemovedItemsBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)setResultsBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
