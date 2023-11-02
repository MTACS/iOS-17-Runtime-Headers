
@interface SearchUILocalImage : SearchUIImage {
    int  _imageType;
}

@property (nonatomic) int imageType;

- (int)imageType;
- (id)initWithSFImage:(id)arg1;
- (id)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2;
- (void)setImageType:(int)arg1;

@end
