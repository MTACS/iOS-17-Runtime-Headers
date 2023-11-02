
@interface HUWaveformSlice : NSObject {
    bool  _hidden;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layerFrame;
    double  _opacity;
    CALayer * _waveformlayer;
}

@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } layerFrame;
@property (nonatomic) double opacity;
@property (nonatomic, retain) CALayer *waveformlayer;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)isHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layerFrame;
- (double)opacity;
- (void)setHidden:(bool)arg1;
- (void)setLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOpacity:(double)arg1;
- (void)setWaveformlayer:(id)arg1;
- (id)waveformlayer;

@end
