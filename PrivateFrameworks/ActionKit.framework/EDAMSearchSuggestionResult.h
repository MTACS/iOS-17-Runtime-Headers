
@interface EDAMSearchSuggestionResult : FATObject {
    NSArray * _typeAheadSuggestions;
}

@property (nonatomic, retain) NSArray *typeAheadSuggestions;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (void)setTypeAheadSuggestions:(id)arg1;
- (id)typeAheadSuggestions;

@end
