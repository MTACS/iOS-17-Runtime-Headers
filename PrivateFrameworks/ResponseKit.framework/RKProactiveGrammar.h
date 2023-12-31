
@interface RKProactiveGrammar : NSObject

+ (id)getEntities:(id)arg1;
+ (id)getOTAPathForRKBundle:(id)arg1;
+ (id)sharedManager;

- (void*)chineseTokenizer;
- (id)copyAttributedTokenForText:(id)arg1 forLanguage:(id)arg2;
- (id)copyAttributedTokenForText:(id)arg1 forLanguageModel:(void*)arg2 withLanguageCode:(id)arg3;
- (void)dealloc;
- (id)getEquivalenceClass:(id)arg1;
- (void*)getLanguageModel:(id)arg1;
- (id)init;

@end
