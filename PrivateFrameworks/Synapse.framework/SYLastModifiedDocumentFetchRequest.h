
@interface SYLastModifiedDocumentFetchRequest : NSObject

+ (id)_buildQueryStringWithDocumentRelatedUniqueIdentifier:(id)arg1;
+ (id)_buildResultWithMatches:(id)arg1;
+ (id)_createSearchQueryWithString:(id)arg1;
+ (void)fetchLastModifiedDocument:(id)arg1 completion:(id /* block */)arg2;

@end
