
@interface WiFiLexicon : NSObject {
    struct _LXLexicon { } * _lexiconEnglish;
    struct _LXLexicon { } * _lexiconUserLocale;
    NSMutableDictionary * _stringCache;
    NSCharacterSet * _tokenizationCharacterSet;
    NSCharacterSet * _tokenizationCharacterSetWithoutUpperCase;
    NSSet * _unwantedEnglishWords;
}

@property (nonatomic, retain) NSMutableDictionary *stringCache;
@property (nonatomic, retain) NSCharacterSet *tokenizationCharacterSet;
@property (nonatomic, retain) NSCharacterSet *tokenizationCharacterSetWithoutUpperCase;
@property (nonatomic, retain) NSSet *unwantedEnglishWords;

- (void).cxx_destruct;
- (id)_tokenizeStringForSpecialCharacters:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setStringCache:(id)arg1;
- (void)setTokenizationCharacterSet:(id)arg1;
- (void)setTokenizationCharacterSetWithoutUpperCase:(id)arg1;
- (void)setUnwantedEnglishWords:(id)arg1;
- (id)stringCache;
- (bool)stringContainsUnwantedWords:(id)arg1;
- (id)tokenizationCharacterSet;
- (id)tokenizationCharacterSetWithoutUpperCase;
- (id)unwantedEnglishWords;

@end
