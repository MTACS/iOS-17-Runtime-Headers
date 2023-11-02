
@interface SearchUIImageDerivedColorGenerator : SearchUIColorGenerator {
    SearchUIImage * _searchUIImage;
}

@property (nonatomic, retain) SearchUIImage *searchUIImage;
@property (nonatomic, retain) SFImageDerivedColor *sfColor;

+ (id)colorsForImageRef:(struct CGImage { }*)arg1;
+ (void)fetchColorsForImage:(id)arg1 withCompletionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)generateUIColorsForSFImage:(id)arg1 isDark:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)generateUIColorsIsDark:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)searchUIImage;
- (void)setSearchUIImage:(id)arg1;

@end
