
@interface _CPUINowPlayingLayout : NSObject <CPUINowPlayingLayoutProtocol> {
    double  _displayScale;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _safeAreaFrame;
    bool  _showsArtwork;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewAreaFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double displayScale;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } safeAreaFrame;
@property (nonatomic) bool showsArtwork;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewAreaFrame;

- (double)_effectiveAlbumArtWidth;
- (double)_scaledHeight;
- (double)_scaledWidth;
- (double)albumArtWidthMultiplier;
- (unsigned long long)artworkPosition;
- (double)displayScale;
- (unsigned long long)hash;
- (id)initWithSafeArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 displayScale:(double)arg3 showsArtwork:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (struct CGSize { double x1; double x2; })maximumNowPlayingSize;
- (struct CGSize { double x1; double x2; })maximumTitleViewSize;
- (double)playModeControlButtonSpacing;
- (double)playModeControlButtonWidth;
- (bool)playModeControlButtonsFullWidth;
- (bool)progressViewFullWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safeAreaFrame;
- (void)setDisplayScale:(double)arg1;
- (void)setSafeAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShowsArtwork:(bool)arg1;
- (void)setViewAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)showsArtwork;
- (unsigned long long)trackInfoFontStyle;
- (double)transportControlButtonHeight;
- (double)transportControlButtonSpacing;
- (double)verticalEdgePadding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewAreaFrame;

@end
