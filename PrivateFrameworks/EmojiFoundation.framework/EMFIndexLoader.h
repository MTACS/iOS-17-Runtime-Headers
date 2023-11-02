
@interface EMFIndexLoader : NSObject

+ (void)_inferAndApplyStrategyToIndex:(id)arg1;
+ (id)_invertedIndexWithTermIndexURL:(id)arg1 andDocumentIndexURL:(id)arg2 fromBundle:(id)arg3;
+ (id)_loadDictionaryResource:(id)arg1;
+ (id)defaultIndexForBundle:(id)arg1;
+ (id)stemmedIndexForBundle:(id)arg1;

@end
