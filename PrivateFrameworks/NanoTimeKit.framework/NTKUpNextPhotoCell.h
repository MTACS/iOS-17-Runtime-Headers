
@interface NTKUpNextPhotoCell : NTKUpNextBaseCell {
    double  _aspectRatio;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _facesRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaledImageSize;
    bool  _wantsFullCellPhoto;
}

- (void)applyLayoutAttributes:(id)arg1;
- (void)configureWithContent:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)transitionContextInView:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
