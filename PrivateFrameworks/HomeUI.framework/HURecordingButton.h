
@interface HURecordingButton : UIControl {
    UIImage * _currentButtonImage;
    UIImageView * _currentButtonImageView;
    UILabel * _currentButtonLabel;
    unsigned long long  _currentRecordingState;
    UIImage * _nextButtonImage;
    UIImageView * _nextButtonImageView;
    CAShapeLayer * _stopButtonStrokeLayer;
}

@property (nonatomic, retain) UIImage *currentButtonImage;
@property (nonatomic, retain) UIImageView *currentButtonImageView;
@property (nonatomic, retain) UILabel *currentButtonLabel;
@property (nonatomic) unsigned long long currentRecordingState;
@property (nonatomic, retain) UIImage *nextButtonImage;
@property (nonatomic, retain) UIImageView *nextButtonImageView;
@property (nonatomic, retain) CAShapeLayer *stopButtonStrokeLayer;

- (void).cxx_destruct;
- (void)_updateHighlight;
- (id)currentButtonImage;
- (id)currentButtonImageView;
- (id)currentButtonLabel;
- (unsigned long long)currentRecordingState;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 state:(unsigned long long)arg2 image:(id)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 state:(unsigned long long)arg2 title:(id)arg3;
- (void)layoutSubviews;
- (id)nextButtonImage;
- (id)nextButtonImageView;
- (void)setCurrentButtonImage:(id)arg1;
- (void)setCurrentButtonImageView:(id)arg1;
- (void)setCurrentButtonLabel:(id)arg1;
- (void)setCurrentRecordingState:(unsigned long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2 animated:(bool)arg3;
- (void)setNextButtonImage:(id)arg1;
- (void)setNextButtonImageView:(id)arg1;
- (void)setStopButtonStrokeLayer:(id)arg1;
- (void)setText:(id)arg1 forState:(unsigned long long)arg2 animated:(bool)arg3;
- (id)stopButtonStrokeLayer;

@end
