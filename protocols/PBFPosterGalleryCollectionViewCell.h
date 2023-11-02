
@protocol PBFPosterGalleryCollectionViewCell <NSObject>

@required

- (PBFPosterGalleryPreviewView *)posterPreviewView;
- (bool)supportsPosterDescription;
- (bool)supportsPosterTitle;
- (void)updatePreviewType:(NSString *)arg1 scale:(double)arg2 posterPreviewView:(UIView *)arg3 layoutOrientation:(long long)arg4 index:(unsigned long long)arg5;

@optional

- (NSAttributedString *)attributedPosterTitle;
- (NSString *)posterDescription;
- (NSString *)posterTitle;
- (void)setAttributedPosterTitle:(NSAttributedString *)arg1;
- (void)setPosterDescription:(NSString *)arg1;
- (void)setPosterTitle:(NSString *)arg1;

@end
