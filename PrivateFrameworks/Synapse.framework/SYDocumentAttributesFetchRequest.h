
@interface SYDocumentAttributesFetchRequest : NSObject

+ (id)_buildQueryStringWithIndexKeys:(id)arg1;
+ (id)_buildResultWithMatches:(id)arg1;
+ (bool)_isValidSearchableItem:(id)arg1 loggableErrorDescription:(id*)arg2;
+ (void)fetchAttributesForDocumentsWithIndexKeys:(id)arg1 completion:(id /* block */)arg2;

@end
