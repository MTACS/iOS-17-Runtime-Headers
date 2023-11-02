
@interface EMSearchableItemSearchResult : NSObject {
    NSArray * _identifiers;
    NSArray * _snippetData;
}

@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (nonatomic, readonly, copy) NSArray *snippetData;

- (void).cxx_destruct;
- (id)identifiers;
- (id)initWithIdentifiers:(id)arg1 snippetData:(id)arg2;
- (id)snippetData;

@end
