
@interface NTKRichComplicationRingProgressView : CDRichComplicationProgressView {
    CDRichComplicationRingView * _backgroundView;
    bool  _clockwise;
    double  _curveWidth;
    CDRichComplicationRingView * _foregroundView;
}

@property (nonatomic) bool clockwise;

- (void).cxx_destruct;
- (bool)clockwise;
- (id)initWithFamily:(long long)arg1 curveWidth:(double)arg2 padding:(double)arg3 forDevice:(id)arg4;
- (void)setClockwise:(bool)arg1;

@end
