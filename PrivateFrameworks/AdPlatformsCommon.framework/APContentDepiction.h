
@interface APContentDepiction : NSObject <NSSecureCoding> {
    unsigned long long  _adjacency;
    NSArray * _categories;
    NSUUID * _identifier;
    NSArray * _keywords;
    NSString * _language;
    NSString * _locale;
    unsigned long long  _placement;
    NSArray * _searchTerms;
}

@property unsigned long long adjacency;
@property (retain) NSArray *categories;
@property (retain) NSUUID *identifier;
@property (retain) NSArray *keywords;
@property (retain) NSString *language;
@property (retain) NSString *locale;
@property unsigned long long placement;
@property (retain) NSArray *searchTerms;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)adjacency;
- (id)categories;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)init:(unsigned long long)arg1 adjacency:(unsigned long long)arg2 language:(id)arg3 locale:(id)arg4 searchTerm:(id)arg5 keywords:(id)arg6 categories:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (id)keywords;
- (id)language;
- (id)locale;
- (unsigned long long)placement;
- (id)searchTerms;
- (void)setAdjacency:(unsigned long long)arg1;
- (void)setCategories:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setPlacement:(unsigned long long)arg1;
- (void)setSearchTerms:(id)arg1;

@end
