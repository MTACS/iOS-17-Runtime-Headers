
@interface GEOResolvedItem : NSObject {
    GEOPDResolvedItem * _resolvedItem;
}

@property (nonatomic, readonly) NSString *extractedTerm;
@property (nonatomic, readonly) bool hasResultIndex;
@property (nonatomic, readonly) int itemType;
@property (nonatomic, readonly) unsigned long long resultIndex;

- (void).cxx_destruct;
- (id)extractedTerm;
- (bool)hasResultIndex;
- (id)initWithAutocompleteResolvedItem:(id)arg1;
- (id)initWithResolvedItem:(id)arg1;
- (int)itemType;
- (unsigned long long)resultIndex;

@end
