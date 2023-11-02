
@interface AVTAttributeValueView : UIView <AVTDiscardableContent, AVTSectionItemTransitionModel> {
    CAShapeLayer * _clippingLayer;
    UIView * _contentView;
    NSUUID * _displaySessionUUID;
    UIImage * _image;
    CALayer * _imageLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSizeRatio;
    bool  _selected;
    CAShapeLayer * _selectionLayer;
    unsigned long long  _selectionStyle;
    bool  _showPlaceholder;
    CALayer * _transitionImageLayer;
    id /* block */  discardableContentHandler;
}

@property (nonatomic, retain) CAShapeLayer *clippingLayer;
@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ discardableContentHandler;
@property (nonatomic, retain) NSUUID *displaySessionUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) CALayer *imageLayer;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSizeRatio;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) CAShapeLayer *selectionLayer;
@property (nonatomic) unsigned long long selectionStyle;
@property (nonatomic) bool showPlaceholder;
@property (readonly) Class superclass;
@property (nonatomic, retain) CALayer *transitionImageLayer;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSizeRatio:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;

- (void).cxx_destruct;
- (void)bringSelectionLayersToFront;
- (void)cleanupAfterTransition;
- (id)clippingBezierPath;
- (id)clippingLayer;
- (void)configureImageLayer:(id)arg1;
- (id)contentView;
- (void)discardContent;
- (id /* block */)discardableContentHandler;
- (id)displaySessionUUID;
- (id)fromLayer;
- (id)image;
- (id)imageLayer;
- (struct CGSize { double x1; double x2; })imageSizeRatio;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSelected;
- (void)layoutSubviews;
- (void)prepareForTransitionToImage:(id)arg1;
- (void)relayoutSublayers;
- (id)selectionBezierPath;
- (id)selectionLayer;
- (unsigned long long)selectionStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectorRect;
- (void)setClippingLayer:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDiscardableContentHandler:(id /* block */)arg1;
- (void)setDisplaySessionUUID:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageLayer:(id)arg1;
- (void)setImageSizeRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionLayer:(id)arg1;
- (void)setSelectionStyle:(unsigned long long)arg1;
- (void)setShowPlaceholder:(bool)arg1;
- (void)setTransitionImageLayer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shapeLayerRect;
- (bool)showPlaceholder;
- (id)toLayer;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transitionImageLayer;
- (void)updateCornerRadii;
- (void)updateHighlightedState:(bool)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)updateSelectedState:(bool)arg1 animated:(bool)arg2;
- (void)updateSelectionAndMaskLayer;
- (void)updateWithImage:(id)arg1;

@end
