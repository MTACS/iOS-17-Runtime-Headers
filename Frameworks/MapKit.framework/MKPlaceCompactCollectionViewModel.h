
@interface MKPlaceCompactCollectionViewModel : NSObject {
    UIColor * _backgroundColor;
    long long  _context;
    GEOGuideLocation * _guideLocation;
    UIImage * _image;
    struct CGSize { 
        double width; 
        double height; 
    }  _photoSize;
    NSString * _preferredSizeCategory;
    NSAttributedString * _subTitle;
    UIFont * _subTitleFont;
    NSArray * _supportedSizeCategories;
    NSAttributedString * _title;
    UIFont * _titleFont;
    bool  _useBorderHighlight;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) long long context;
@property (nonatomic, readonly) GEOGuideLocation *guideLocation;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) bool isWorldwide;
@property (nonatomic) struct CGSize { double x1; double x2; } photoSize;
@property (nonatomic, retain) NSString *preferredSizeCategory;
@property (nonatomic, retain) NSAttributedString *subTitle;
@property (nonatomic, retain) UIFont *subTitleFont;
@property (nonatomic, retain) NSAttributedString *title;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic) bool useBorderHighlight;

- (void).cxx_destruct;
- (id)backgroundColor;
- (void)compactCollectionImageForSize:(struct CGSize { double x1; double x2; })arg1 onCompletion:(id /* block */)arg2;
- (void)contentCategorySizeDidChange:(id)arg1;
- (long long)context;
- (id)description;
- (id)guideLocation;
- (id)image;
- (id)initWithGuideLocation:(id)arg1 context:(long long)arg2 useBorderHighlight:(bool)arg3;
- (void)initializeFonts;
- (bool)isEqual:(id)arg1;
- (bool)isWorldwide;
- (struct CGSize { double x1; double x2; })photoSize;
- (id)preferredSizeCategory;
- (void)setBackgroundColor:(id)arg1;
- (void)setContext:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setPhotoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredSizeCategory:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setSubTitleFont:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setUseBorderHighlight:(bool)arg1;
- (bool)shouldShowSubtitleForCategory:(id)arg1;
- (id)subTitle;
- (id)subTitleFont;
- (id)title;
- (id)titleFont;
- (bool)useBorderHighlight;

@end
