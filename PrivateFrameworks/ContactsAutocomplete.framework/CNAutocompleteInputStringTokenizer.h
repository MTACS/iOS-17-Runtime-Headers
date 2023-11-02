
@interface CNAutocompleteInputStringTokenizer : NSObject {
    CNFuture * _nameStringTokenizer;
}

@property (retain) CNFuture *nameStringTokenizer;

+ (id)lazyNameStringTokenizerWithLocale:(id)arg1;
+ (id)tokensFromString:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)expandCJKNames;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)nameStringTokenizer;
- (void)setNameStringTokenizer:(id)arg1;
- (id)tokensFromString:(id)arg1;

@end
