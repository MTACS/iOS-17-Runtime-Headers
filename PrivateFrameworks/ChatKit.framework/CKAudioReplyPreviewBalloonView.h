
@interface CKAudioReplyPreviewBalloonView : CKColoredBalloonView {
    double  _duration;
    long long  _waveformContentMode;
    CKWaveformProgressView * _waveformProgressView;
}

@property (nonatomic) double duration;
@property (nonatomic) long long waveformContentMode;
@property (nonatomic, retain) CKWaveformProgressView *waveformProgressView;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)configureForComposition:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;
- (double)duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)setDuration:(double)arg1;
- (void)setWaveform:(id)arg1;
- (void)setWaveformContentMode:(long long)arg1;
- (void)setWaveformProgressView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (long long)waveformContentMode;
- (id)waveformProgressView;

@end
