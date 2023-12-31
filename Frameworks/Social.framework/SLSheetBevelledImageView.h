
@interface SLSheetBevelledImageView : SLSheetImagePreviewView {
    bool  _needsURLPlaceholderImage;
    UIImageView * _placeholderGlyphView;
    UIView * _placeholderPreviewView;
}

@property (nonatomic) bool needsURLPlaceholderImage;

- (void).cxx_destruct;
- (void)ensurePlaceholderPreviewImage;
- (bool)generatePreviewImageFromAttachments;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)needsURLPlaceholderImage;
- (void)setImage:(id)arg1;
- (void)setNeedsURLPlaceholderImage:(bool)arg1;

@end
