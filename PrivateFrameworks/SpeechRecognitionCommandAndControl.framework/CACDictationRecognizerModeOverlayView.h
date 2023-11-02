
@interface CACDictationRecognizerModeOverlayView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundsForLastReload;
    int  _dictationRecognizerMode;
    bool  _didUpdateItems;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageRect;
    UIColor * _tintColor;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundsForLastReload;
@property (nonatomic) bool didUpdateItems;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (void)_addIconContrasted:(bool)arg1;
- (id)_badgeViewContainerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingContrast:(bool)arg2;
- (id)_createInvertedMaskedImage:(id)arg1 withColor:(id)arg2;
- (id)_imageForCurrentDictiationRecognizerMode;
- (void)_updateOverlayImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForLastReload;
- (bool)didUpdateItems;
- (id)imageBundle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBoundsForLastReload:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDictationRecognizerMode:(int)arg1;
- (void)setDidUpdateItems:(bool)arg1;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withColor:(id)arg2;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
