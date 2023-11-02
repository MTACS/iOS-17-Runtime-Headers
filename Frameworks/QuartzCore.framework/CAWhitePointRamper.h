
@interface CAWhitePointRamper : CAWindowServerRamper {
    float  _scaleEnd;
    float  _scaleStart;
    struct { 
        float matrix[9]; 
    }  _whitePointEnd;
    struct { 
        float matrix[9]; 
    }  _whitePointStart;
}

@property float scaleEnd;
@property float scaleStart;
@property struct { float x1[9]; } whitePointEnd;
@property struct { float x1[9]; } whitePointStart;

- (id)initWithDisplay:(id)arg1;
- (void)rampCallback:(id)arg1;
- (float)scaleEnd;
- (float)scaleStart;
- (void)setScaleEnd:(float)arg1;
- (void)setScaleStart:(float)arg1;
- (void)setWhitePointEnd:(struct { float x1[9]; })arg1;
- (void)setWhitePointStart:(struct { float x1[9]; })arg1;
- (struct { float x1[9]; })whitePointEnd;
- (struct { float x1[9]; })whitePointStart;

@end
