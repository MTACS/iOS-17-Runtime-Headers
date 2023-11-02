
@interface QLWaveformView : UIView <PHVideoScrubberFilmstripView> {
    AVAsset * _asset;
    UIView * _lineView;
    UIImage * _waveImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _waveSize;
    UIImageView * _waveView;
    UIImage * placeholderImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  visibleRect;
}

@property (nonatomic, copy) AVAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

- (void).cxx_destruct;
- (void)_expandWaveform;
- (void)_updateWithWaveformImage:(id)arg1;
- (id)asset;
- (void)layoutSubviews;
- (id)placeholderImage;
- (void)setAsset:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
