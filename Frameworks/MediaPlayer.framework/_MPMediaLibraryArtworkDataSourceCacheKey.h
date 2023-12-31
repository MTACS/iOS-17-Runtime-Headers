
@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject {
    id  _catalogIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _representationSize;
}

@property (nonatomic, copy) id catalogIdentifier;
@property (nonatomic) struct CGSize { double x1; double x2; } representationSize;

- (void).cxx_destruct;
- (id)catalogIdentifier;
- (unsigned long long)hash;
- (id)initWithArtworkCatalog:(id)arg1 representativeSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })representationSize;
- (void)setCatalogIdentifier:(id)arg1;
- (void)setRepresentationSize:(struct CGSize { double x1; double x2; })arg1;

@end
