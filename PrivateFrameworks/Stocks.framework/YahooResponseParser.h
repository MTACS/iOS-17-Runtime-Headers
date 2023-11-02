
@interface YahooResponseParser : NSObject

+ (id)arrayWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2 wrapResultIfDictionary:(bool)arg3;
+ (id)dictionaryWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2;
+ (id)objectOfClass:(Class)arg1 withDictionaryKeyPath:(id)arg2 inJSONObject:(id)arg3;
+ (id)objectWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2;
+ (void)parseData:(id)arg1 resultsHandler:(id /* block */)arg2;
+ (id)parseDataSourceMapFromDataSourceDictionaries:(id)arg1;
+ (void)parseExchangeDictionaries:(id)arg1 parsedExchangeResult:(id /* block */)arg2;
+ (void)parseStockQuoteDictionaries:(id)arg1 withDataSources:(id)arg2 parsedStockResult:(id /* block */)arg3;

@end
