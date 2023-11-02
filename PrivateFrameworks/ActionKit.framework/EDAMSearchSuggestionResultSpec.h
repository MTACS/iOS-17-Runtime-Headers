
@interface EDAMSearchSuggestionResultSpec : FATObject {
    NSNumber * _maxTypeAheadSuggestions;
}

@property (nonatomic, retain) NSNumber *maxTypeAheadSuggestions;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)maxTypeAheadSuggestions;
- (void)setMaxTypeAheadSuggestions:(id)arg1;

@end
