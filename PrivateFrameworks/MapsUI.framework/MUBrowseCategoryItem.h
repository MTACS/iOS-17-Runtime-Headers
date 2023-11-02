
@interface MUBrowseCategoryItem : NSObject {
    UIImage * _image;
    GEOSearchCategory * _searchCategory;
    NSString * _title;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) GEOSearchCategory *searchCategory;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)image;
- (id)imageWithSearchCategory:(id)arg1 nightMode:(bool)arg2;
- (id)initWithCategory:(id)arg1 nightMode:(bool)arg2;
- (id)searchCategory;
- (id)title;

@end
