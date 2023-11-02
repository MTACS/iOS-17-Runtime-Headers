
@interface GEOResultRefinementSortElement : NSObject {
    NSString * _displayName;
    GEOPDResultRefinementMetadata * _metadata;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) GEOPDResultRefinementMetadata *metadata;

- (void).cxx_destruct;
- (id)convertToGEOPDResultRefinementSortElement;
- (id)displayName;
- (id)initWithDisplayName:(id)arg1 metadata:(id)arg2;
- (id)initWithResultRefinementSortElement:(id)arg1;
- (id)metadata;
- (void)setDisplayName:(id)arg1;
- (void)setMetadata:(id)arg1;

@end
