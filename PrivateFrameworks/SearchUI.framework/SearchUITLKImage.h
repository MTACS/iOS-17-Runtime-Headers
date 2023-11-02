
@interface SearchUITLKImage : TLKImage {
    SearchUIImage * _searchUIImage;
}

@property (retain) SearchUIImage *searchUIImage;

- (void).cxx_destruct;
- (double)aspectRatio;
- (id)initWithSearchUIImage:(id)arg1;
- (void)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)searchUIImage;
- (void)setSearchUIImage:(id)arg1;

@end
