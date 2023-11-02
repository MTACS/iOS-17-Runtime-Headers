
@interface SPUIResultsViewStateRestorationContext : SearchUICollectionViewRestorationContext <NSSecureCoding> {
    SearchUICollectionViewRestorationContext * _collectionViewContext;
    SPSearchEntity * _searchEntity;
    NSString * _searchString;
    NSArray * _sections;
}

@property (retain) SearchUICollectionViewRestorationContext *collectionViewContext;
@property (retain) SPSearchEntity *searchEntity;
@property (retain) NSString *searchString;
@property (retain) NSArray *sections;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collectionViewContext;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)searchEntity;
- (id)searchString;
- (id)sections;
- (void)setCollectionViewContext:(id)arg1;
- (void)setSearchEntity:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSections:(id)arg1;

@end
