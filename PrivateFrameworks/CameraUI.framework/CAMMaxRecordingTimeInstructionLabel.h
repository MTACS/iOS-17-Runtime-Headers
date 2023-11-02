
@interface CAMMaxRecordingTimeInstructionLabel : CAMInstructionLabel {
    NSDateComponentsFormatter * __dateComponentsFormatter;
    double  _remainingTimeInSeconds;
}

@property (nonatomic, retain) NSDateComponentsFormatter *_dateComponentsFormatter;
@property (nonatomic) double remainingTimeInSeconds;

- (void).cxx_destruct;
- (id)_dateComponentsFormatter;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_textInsets;
- (void)_updateText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)remainingTimeInSeconds;
- (void)setRemainingTimeInSeconds:(double)arg1;
- (void)set_dateComponentsFormatter:(id)arg1;

@end
