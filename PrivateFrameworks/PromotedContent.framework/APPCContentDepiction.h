
@interface APPCContentDepiction : NSObject <APPCPromotableContentDepiction> {
    void adjacentPosition;
    void categories;
    void identifier;
    void keywords;
    void language;
    void locale;
    void placement;
    void searchTerms;
}

@property (nonatomic, readonly) unsigned long long adjacentPosition;
@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *keywords;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) long long placement;
@property (nonatomic, readonly) NSArray *searchTerms;

- (void).cxx_destruct;
- (unsigned long long)adjacentPosition;
- (id)categories;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 adjacentPosition:(unsigned long long)arg2 placement:(long long)arg3 language:(id)arg4 locale:(id)arg5 searchTerms:(id)arg6 keywords:(id)arg7 categories:(id)arg8;
- (id)initWithIdentifier:(id)arg1 placement:(long long)arg2 language:(id)arg3 locale:(id)arg4 searchTerms:(id)arg5 keywords:(id)arg6 categories:(id)arg7;
- (id)keywords;
- (id)language;
- (id)locale;
- (long long)placement;
- (id)searchTerms;

@end
