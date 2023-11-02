
@interface CNDuplicateContactsManager : NSObject {
    void contactStore;
    void contacts;
    void didPerformMerge;
    void findResult;
    void mergeResult;
}

@property (nonatomic, readonly) NSArray *duplicates;

+ (bool)applyMergeResultToSaveRequest:(id)arg1 signatures:(id)arg2;
+ (void)duplicatesCountsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, long long, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
+ (void)refreshManagedDuplicatesWithCompletionHandler:(id /* block */)arg1;
+ (void)updateRecentImagesDatabaseForSignatures:(id)arg1;
+ (void)updateRecentPostersDatabaseForSignatures:(id)arg1;

- (void).cxx_destruct;
- (bool)applyMergeResultToSaveRequest:(id)arg1;
- (id)duplicates;
- (id)init;
- (id)initWithContactStore:(id)arg1;

@end
