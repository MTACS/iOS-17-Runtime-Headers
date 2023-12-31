
@interface TSDImager : NSObject <TSDCanvasDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mActualScaledClipRect;
    struct CGColor { } * mBackgroundColor;
    TSDCanvas * mCanvas;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  mContentInset;
    bool  mDistortedToMatch;
    TSKDocumentRoot * mDocumentRoot;
    bool  mDrawingIntoPDF;
    bool  mImageMustHaveEvenDimensions;
    NSArray * mInfos;
    bool  mIsPrinting;
    struct CGSize { 
        double width; 
        double height; 
    }  mMaximumScaledImageSize;
    id /* block */  mPostRenderAction;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mReusableActualScaledClipRect;
    struct CGContext { } * mReusableBitmapContext;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mReusableBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mReusableIntegralBounds;
    struct CGSize { 
        double width; 
        double height; 
    }  mReusableScaledImageSize;
    struct CGSize { 
        double width; 
        double height; 
    }  mScaledImageSize;
    bool  mShouldReuseBitmapContext;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mUnscaledClipRect;
    bool  mUseScaledImageSize;
    double  mViewScale;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } actualScaledClipRect;
@property (nonatomic) struct CGColor { }*backgroundColor;
@property (nonatomic, readonly) TSDCanvas *canvas;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool distortedToMatch;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool imageMustHaveEvenDimensions;
@property (nonatomic, retain) NSArray *infos;
@property (nonatomic) bool isPrinting;
@property (nonatomic) struct CGSize { double x1; double x2; } maximumScaledImageSize;
@property (nonatomic) struct CGSize { double x1; double x2; } scaledImageSize;
@property (nonatomic) bool shouldReuseBitmapContext;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unscaledClipRect;
@property (nonatomic) double viewScale;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })actualScaledClipRect;
- (struct CGColor { }*)backgroundColor;
- (id)canvas;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)dealloc;
- (bool)distortedToMatch;
- (id)documentRoot;
- (bool)drawPageInContext:(struct CGContext { }*)arg1 createPage:(bool)arg2;
- (bool)imageMustHaveEvenDimensions;
- (id)infos;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isCanvasDrawingIntoPDF:(id)arg1;
- (bool)isPrinting;
- (bool)isPrintingCanvas;
- (struct CGSize { double x1; double x2; })maximumScaledImageSize;
- (struct CGImage { }*)newImage;
- (bool)p_configureCanvas;
- (void)p_drawPageInContext:(struct CGContext { }*)arg1 createPage:(bool)arg2;
- (struct CGImage { }*)p_newImageInReusableContext;
- (id)pdfData;
- (struct CGSize { double x1; double x2; })scaledImageSize;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDistortedToMatch:(bool)arg1;
- (void)setImageMustHaveEvenDimensions:(bool)arg1;
- (void)setInfos:(id)arg1;
- (void)setIsPrinting:(bool)arg1;
- (void)setMaximumScaledImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPostRenderAction:(id /* block */)arg1;
- (void)setScaledImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldReuseBitmapContext:(bool)arg1;
- (void)setUnscaledClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewScale:(double)arg1;
- (bool)shouldReuseBitmapContext;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledClipRect;
- (double)viewScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;

@end
