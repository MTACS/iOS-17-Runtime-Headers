
@interface PGCurator : NSObject {
    NSObject<OS_os_log> * _loggingConnection;
}

@property (nonatomic, retain) NSObject<OS_os_log> *loggingConnection;

+ (unsigned long long)maximumNumberOfItemsToElectWithTotalNumberOfItems:(unsigned long long)arg1 spanningNumberOfDays:(double)arg2 options:(id)arg3;
+ (unsigned long long)numberOfItemsToShaveOffWithNumberOfItems:(unsigned long long)arg1 maximumNumberOfItems:(unsigned long long)arg2 options:(id)arg3;

- (void).cxx_destruct;
- (void)_checkRequiredItemsWithIdentifiers:(id)arg1 inItems:(id)arg2;
- (id)bestItemIdentifiersWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id*)arg3;
- (id)bestItemsForFeeder:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(id /* block */)arg4;
- (void)completeItems:(id)arg1 withFavoriteItemsFromItems:(id)arg2 upToNumberOfItems:(unsigned long long)arg3 debugInfo:(id)arg4 progressBlock:(id /* block */)arg5;
- (void)completeItems:(id)arg1 withItems:(id)arg2 forPersonLocalIdentifiers:(id)arg3 options:(id)arg4 nonRemovableItems:(id)arg5 debugInfo:(id)arg6 progressBlock:(id /* block */)arg7;
- (id)completedItems:(id)arg1 withNumberOfItems:(unsigned long long)arg2 fromAllItems:(id)arg3 avoidingItems:(id)arg4 options:(id)arg5 debugInfo:(id)arg6 progressBlock:(id /* block */)arg7;
- (id)deduplicatedItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(id /* block */)arg4;
- (id)defaultItemSortDescriptors;
- (double)evaluatedDurationWithItems:(id)arg1 options:(id)arg2;
- (id)focusedItemsInItems:(id)arg1 withOptions:(id)arg2;
- (id)init;
- (void)lastPassToCompleteItems:(id)arg1 fromFeeder:(id)arg2 options:(id)arg3 maximumNumberOfItems:(unsigned long long)arg4 debugInfo:(id)arg5;
- (id)loggingConnection;
- (double)maximumDurationWithItems:(id)arg1 options:(id)arg2;
- (id)newMovieDeduperWithOptions:(id)arg1;
- (id)newSemanticalDeduperWithOptions:(id)arg1;
- (void)setLoggingConnection:(id)arg1;
- (id)shaveItems:(id)arg1 downToNumberOfItems:(unsigned long long)arg2 options:(id)arg3 debugInfo:(id)arg4 progressBlock:(id /* block */)arg5;
- (id)summarizedItemsFromCluster:(id)arg1 withBeautifier:(id)arg2 debugInfo:(id)arg3 progressBlock:(id /* block */)arg4;
- (unsigned long long)targetDurationBasedNumberOfItemsToElectFromItems:(id)arg1 options:(id)arg2;

@end
