
@interface PBFPosterGalleryPreviewCell : UICollectionViewCell <PBFPosterGalleryCollectionViewCell> {
    NSAttributedString * _attributedPosterTitle;
    long long  _layoutOrientation;
    PBFPosterGalleryPreviewView * _posterPreviewView;
    NSString * _posterTitle;
    NSString * _previewType;
    UILabel * _titleLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  _titleLabelSize;
}

@property (nonatomic, copy) NSAttributedString *attributedPosterTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *posterDescription;
@property (nonatomic, readonly) PBFPosterGalleryPreviewView *posterPreviewView;
@property (nonatomic, copy) NSString *posterTitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsPosterDescription;
@property (nonatomic, readonly) bool supportsPosterTitle;

+ (struct CGSize { double x1; double x2; })contentSizeForCellWithTitle:(bool)arg1 interfaceOrientation:(long long)arg2 spec:(id)arg3;
+ (struct CGSize { double x1; double x2; })contentSizeForCellWithTitleSize:(struct CGSize { double x1; double x2; })arg1 interfaceOrientation:(long long)arg2 spec:(id)arg3;
+ (struct CGSize { double x1; double x2; })contentSizeForSmartAlbumCellWithTitle:(bool)arg1 interfaceOrientation:(long long)arg2 spec:(id)arg3;
+ (struct CGSize { double x1; double x2; })contentSizeForSmartAlbumCellWithTitleSize:(struct CGSize { double x1; double x2; })arg1 interfaceOrientation:(long long)arg2 spec:(id)arg3;
+ (struct CGSize { double x1; double x2; })heroContentSizeForCellWithTitle:(bool)arg1 interfaceOrientation:(long long)arg2 spec:(id)arg3;
+ (struct CGSize { double x1; double x2; })heroContentSizeForCellWithTitleSize:(struct CGSize { double x1; double x2; })arg1 interfaceOrientation:(long long)arg2 spec:(id)arg3;
+ (double)maximumTitleHeightForFont:(id)arg1;

- (void).cxx_destruct;
- (void)_setMutableAttributedPosterTitle:(id)arg1;
- (id)attributedPosterTitle;
- (void)layoutSubviews;
- (id)pbf_displayContext;
- (id)posterDescription;
- (id)posterPreviewView;
- (id)posterTitle;
- (void)prepareForReuse;
- (void)setAttributedPosterTitle:(id)arg1;
- (void)setPosterDescription:(id)arg1;
- (void)setPosterTitle:(id)arg1;
- (bool)supportsPosterDescription;
- (bool)supportsPosterTitle;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)titleLabel;
- (void)updatePreviewType:(id)arg1 scale:(double)arg2 posterPreviewView:(id)arg3 layoutOrientation:(long long)arg4 index:(unsigned long long)arg5;

@end
