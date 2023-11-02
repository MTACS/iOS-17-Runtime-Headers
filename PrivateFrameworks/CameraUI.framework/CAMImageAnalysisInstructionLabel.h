
@interface CAMImageAnalysisInstructionLabel : CAMInstructionLabel {
    long long  _instruction;
}

@property (nonatomic) long long instruction;

- (void)_updateText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)instruction;
- (void)setInstruction:(long long)arg1;

@end
