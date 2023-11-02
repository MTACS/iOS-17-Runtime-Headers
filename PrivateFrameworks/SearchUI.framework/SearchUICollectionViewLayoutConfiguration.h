
@interface SearchUICollectionViewLayoutConfiguration : NSObject {
    NSSet * _sectionIndexesForHeightMatching;
    NSSet * _sectionIndexesUsingListLayout;
}

@property (readonly) NSSet *sectionIndexesForHeightMatching;
@property (readonly) NSSet *sectionIndexesUsingListLayout;

- (void).cxx_destruct;
- (id)initWithSnapshot:(id)arg1;
- (id)sectionIndexesForHeightMatching;
- (id)sectionIndexesUsingListLayout;

@end
