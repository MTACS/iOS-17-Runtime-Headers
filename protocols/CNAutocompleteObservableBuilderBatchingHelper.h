
@protocol CNAutocompleteObservableBuilderBatchingHelper <NSObject>

@required

- (void)addCachedCalendarServerObservable:(CNObservable *)arg1;
- (void)addCachedDirectoryServerObservable:(CNObservable *)arg1;
- (void)addCalendarServerObservable:(CNObservable *)arg1;
- (void)addContactsObservable:(CNObservable *)arg1;
- (void)addCoreRecentsObservable:(CNObservable *)arg1;
- (void)addDirectoryServerObservable:(CNObservable *)arg1;
- (void)addLocalExtensionObservable:(CNObservable *)arg1;
- (void)addPredictionObservable:(CNObservable *)arg1;
- (void)addStewieObservable:(CNObservable *)arg1;
- (void)addSuggestionsObservable:(CNObservable *)arg1;
- (void)addSupplementalObservable:(CNObservable *)arg1;
- (bool)batchAtIndexIncludesServer:(unsigned long long)arg1;
- (NSArray *)batchedObservables;

@end
