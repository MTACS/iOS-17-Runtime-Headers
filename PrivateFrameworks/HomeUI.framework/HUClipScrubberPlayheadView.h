
@interface HUClipScrubberPlayheadView : UIView {
    bool  _drawsUpperContent;
    bool  _editing;
}

@property (nonatomic) bool drawsUpperContent;
@property (nonatomic) bool editing;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawsUpperContent;
- (bool)editing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDrawsUpperContent:(bool)arg1;
- (void)setEditing:(bool)arg1;

@end
