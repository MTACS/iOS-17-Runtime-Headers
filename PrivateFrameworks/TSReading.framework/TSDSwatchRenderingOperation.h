
@interface TSDSwatchRenderingOperation : NSOperation {
    struct CGImage { } * mDeliveredImage;
    TSKDocumentRoot * mDocumentRoot;
    NSString * mIdentifier;
    double  mImageScale;
    struct CGSize { 
        double width; 
        double height; 
    }  mImageSize;
    unsigned long long  mInsertPopoverPageNumber;
    unsigned long long  mInsertPopoverPageType;
    NSObject<TSSPreset> * mPreset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mSwatchFrame;
    UIView * mView;
}

@property (nonatomic, readonly) struct CGImage { }*deliveredImage;
@property (copy) NSString *identifier;
@property (readonly) double imageScale;
@property (readonly) struct CGSize { double x1; double x2; } imageSize;
@property unsigned long long insertPopoverPageNumber;
@property unsigned long long insertPopoverPageType;
@property (readonly) NSObject<TSSPreset> *preset;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } swatchFrame;
@property (retain) UIView *view;

- (void)dealloc;
- (void)deliverCGImage:(struct CGImage { }*)arg1;
- (struct CGImage { }*)deliveredImage;
- (void)doWorkWithReadLock;
- (id)identifier;
- (double)imageScale;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 documentRoot:(id)arg5;
- (unsigned long long)insertPopoverPageNumber;
- (unsigned long long)insertPopoverPageType;
- (void)main;
- (bool)needsPressedStateBackground;
- (void)p_animateSwatchIn;
- (void)p_deliverResultOnMainThread:(id)arg1;
- (struct CGImage { }*)p_newSwatchPressedStateBackgroundFromCGImage:(struct CGImage { }*)arg1;
- (id)preset;
- (void)setIdentifier:(id)arg1;
- (void)setInsertPopoverPageNumber:(unsigned long long)arg1;
- (void)setInsertPopoverPageType:(unsigned long long)arg1;
- (void)setView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })swatchEdgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })swatchFrame;
- (id)view;

@end
