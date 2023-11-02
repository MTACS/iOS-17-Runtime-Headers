
@interface PBFPosterGalleryPreviewWithDescriptionCell : UICollectionViewCell <PBFPosterGalleryCollectionViewCell> {
    long long  _layoutOrientation;
    struct { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } posterViewFrame; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } posterDescriptionLabelFrame; 
        struct CGSize { 
            double width; 
            double height; 
        } intrinsicContentSize; 
    }  _metrics;
    NSString * _posterDescription;
    UILabel * _posterDescriptionLabel;
    PBFPosterGalleryPreviewView * _posterPreviewView;
    NSString * _previewType;
    PBFPosterGalleryViewSpec * _spec;
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

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })metrics;
- (id)pbf_displayContext;
- (id)posterDescription;
- (id)posterDescriptionLabel;
- (id)posterPreviewView;
- (void)prepareForReuse;
- (void)setPosterDescription:(id)arg1;
- (id)spec;
- (bool)supportsPosterDescription;
- (bool)supportsPosterTitle;
- (void)updatePreviewType:(id)arg1 scale:(double)arg2 posterPreviewView:(id)arg3 layoutOrientation:(long long)arg4 index:(unsigned long long)arg5;

@end
