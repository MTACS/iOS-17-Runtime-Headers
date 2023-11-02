
@interface NMBUIDownloadProgressView : UIView {
    UIImageView * _downloadableIconView;
    CAShapeLayer * _downloadingRingProgressLayer;
    CAShapeLayer * _downloadingRingTrackLayer;
    UIButton * _errorIconButton;
    float  _progress;
    unsigned long long  _state;
    CAShapeLayer * _waitingRingLayer;
}

@property (nonatomic) float progress;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentFrame;
- (id)_ringPath;
- (void)_updateDownloadingRingProgressLayerStrokeEnd;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (float)progress;
- (void)setProgress:(float)arg1;
- (void)setState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)state;

@end
