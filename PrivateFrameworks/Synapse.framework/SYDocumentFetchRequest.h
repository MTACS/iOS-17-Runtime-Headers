
@interface SYDocumentFetchRequest : NSObject

+ (id)_buildResultWithMatches:(id)arg1;
+ (id)_contentURLForItem:(id)arg1;
+ (void)_fetchDocumentsWithReason:(id)arg1 queryString:(id)arg2 completion:(id /* block */)arg3;
+ (bool)_isSearchableItemValid:(id)arg1 loggableErrorDescription:(id*)arg2;
+ (id)_itemIdFromSearchableItem:(id)arg1;
+ (void)fetchAllDocumentsMatchingAnyIndexIdWithCompletion:(id /* block */)arg1;
+ (void)fetchDocumentsWithIndexIds:(id)arg1 completion:(id /* block */)arg2;

@end
