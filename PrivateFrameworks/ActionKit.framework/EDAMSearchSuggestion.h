
@interface EDAMSearchSuggestion : FATObject {
    NSString * _suggestionText;
}

@property (nonatomic, retain) NSString *suggestionText;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (void)setSuggestionText:(id)arg1;
- (id)suggestionText;

@end
