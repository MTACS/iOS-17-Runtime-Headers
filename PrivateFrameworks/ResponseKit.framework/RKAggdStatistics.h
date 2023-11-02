
@interface RKAggdStatistics : NSObject

+ (void)clearScalarValuesForLanguage:(id)arg1;
+ (void)decrementAggdKeyForCategory:(id)arg1 forAction:(id)arg2 withLanguageID:(id)arg3;
+ (void)incrementAggdKeyForCategory:(id)arg1 forAction:(id)arg2 withLanguageID:(id)arg3;

@end
