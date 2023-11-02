
@interface _LTEtiquetteSanitizer : NSObject {
    NSLocale * _locale;
    NSDictionary * _replacementTree;
}

- (void).cxx_destruct;
- (id)initWithModelURL:(id)arg1 language:(id)arg2;
- (id)initWithReplacementTokenDictionary:(id)arg1 language:(id)arg2;
- (id)matchesForString:(id)arg1;
- (id)replacementStringForString:(id)arg1 forToken:(id)arg2;
- (id)sanitizedStringForString:(id)arg1;
- (id)stringByReplacingMatches:(id)arg1 inString:(id)arg2;
- (id)treeForReplacementTokens:(id)arg1;

@end
