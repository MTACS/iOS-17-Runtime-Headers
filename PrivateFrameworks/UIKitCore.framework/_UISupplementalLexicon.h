
@interface _UISupplementalLexicon : NSObject {
    id  _internal;
    NSArray * _items;
    unsigned long long  _searchPrefixes;
}

@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) unsigned long long searchPrefixes;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 searchPrefixes:(unsigned long long)arg2;
- (id)initWithItems:(id)arg1 searchPrefixes:(unsigned long long)arg2 andTISupplementalLexicon:(id)arg3;
- (id)initWithRTISupplementalLexicon:(id)arg1;
- (id)items;
- (unsigned long long)searchPrefixes;

@end
