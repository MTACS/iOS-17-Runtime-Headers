
@interface SLSheetURLPreviewView : SLSheetImagePreviewView {
    UIImageView * _placeholderGlyphView;
    UIView * _placeholderPreviewView;
    UIImage * _shadowImage;
    SLURLPreviewGenerator * _webPreviewGenerator;
}

- (void).cxx_destruct;
- (void)_generateAutomaticPreviewForURL:(id)arg1;
- (void)ensurePlaceholderPreviewImage;
- (bool)generatePreviewImageFromAttachments;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;

@end
