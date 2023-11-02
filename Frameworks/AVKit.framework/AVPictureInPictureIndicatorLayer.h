
@interface AVPictureInPictureIndicatorLayer : CALayer {
    AVPictureInPictureIndicatorSublayer * _contentLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _videoRectWhenPIPBegan;
}

@property (nonatomic, readonly) AVPictureInPictureIndicatorSublayer *contentLayer;
@property (nonatomic, copy) NSString *customText;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoRectWhenPIPBegan;

- (void).cxx_destruct;
- (id)contentLayer;
- (id)customText;
- (id)init;
- (id)initWithDisplayScale:(double)arg1 placeholderImage:(struct CGImage { }*)arg2 opaque:(bool)arg3 videoRectWhenPIPBegan:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)layoutSublayers;
- (void)setCustomText:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoRectWhenPIPBegan;

@end
