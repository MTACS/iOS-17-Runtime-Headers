
@interface GEOMiniBrowseCategories : NSObject {
    NSArray * _categoriesStyleAttributes;
    NSArray * _topChildNames;
}

@property (nonatomic, readonly) NSArray *categoriesStyleAttributes;
@property (nonatomic, readonly) NSArray *topChildNames;

- (void).cxx_destruct;
- (id)categoriesStyleAttributes;
- (id)initWithMiniPDBrowseCategories:(id)arg1 topChildNames:(id)arg2;
- (id)topChildNames;

@end
