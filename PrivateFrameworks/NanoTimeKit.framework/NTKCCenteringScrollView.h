
@interface NTKCCenteringScrollView : UIScrollView <UIScrollViewDelegate> {
    UIView * _centeredView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    double  _cropRectCushion;
    double  _maximumZoomRatio;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _minimumDisplayInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumDisplaySize;
    <NTKCCenteringScrollViewDelegate> * _ntk_delegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalCrop;
}

@property (nonatomic, retain) UIView *centeredView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, readonly) double cropRectCushion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumZoomRatio;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumDisplaySize;
@property (nonatomic) <NTKCCenteringScrollViewDelegate> *ntk_delegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_centerOnCrop;
- (void)_updateCrop;
- (void)_updateInsets;
- (void)_updateZoomScales;
- (id)centeredView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (double)cropRectCushion;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)maximumZoomRatio;
- (struct CGSize { double x1; double x2; })minimumDisplaySize;
- (id)ntk_delegate;
- (void)safeAreaInsetsDidChange;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenteredView:(id)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaximumZoomRatio:(double)arg1;
- (void)setMinimumDisplaySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumDisplaySize:(struct CGSize { double x1; double x2; })arg1 withCropRectCushion:(double)arg2;
- (void)setNtk_delegate:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;

@end
