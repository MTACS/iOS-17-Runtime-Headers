
@interface PXRegionOfInterest : PXCoordinatedRect <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageContentsRect;
    PXImageRequester * _imageRequester;
    PXViewSpec * _imageViewSpec;
    bool  _isRepresentingPlaceholderContent;
    id /* block */  _placeholderViewFactory;
    NSString * _subtitle;
    PXTitleSubtitleLabelSpec * _textViewSpec;
    NSString * _title;
    id /* block */  _trackingContainerViewFactory;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageContentsRect;
@property (nonatomic, retain) PXImageRequester *imageRequester;
@property (nonatomic, retain) PXViewSpec *imageViewSpec;
@property (nonatomic) bool isRepresentingPlaceholderContent;
@property (nonatomic, copy) id /* block */ placeholderViewFactory;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) PXTitleSubtitleLabelSpec *textViewSpec;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *trackingContainerView;
@property (nonatomic, copy) id /* block */ trackingContainerViewFactory;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertedImageContentsRectOfRegionOfInterest:(id)arg1 toCoordinateSpace:(id)arg2 fittingSize:(struct CGSize { double x1; double x2; })arg3 flipped:(bool)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageContentsRect;
- (id)imageRequester;
- (id)imageViewSpec;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCoordinateSpace:(id)arg2;
- (bool)isRepresentingPlaceholderContent;
- (id /* block */)placeholderViewFactory;
- (void)setImageContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageRequester:(id)arg1;
- (void)setImageViewSpec:(id)arg1;
- (void)setIsRepresentingPlaceholderContent:(bool)arg1;
- (void)setPlaceholderViewFactory:(id /* block */)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTextViewSpec:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrackingContainerViewFactory:(id /* block */)arg1;
- (id)subtitle;
- (id)textViewSpec;
- (id)title;
- (id)trackingContainerView;
- (id /* block */)trackingContainerViewFactory;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })uncroppedImageFrameInCoordinateSpace:(id)arg1;

@end
