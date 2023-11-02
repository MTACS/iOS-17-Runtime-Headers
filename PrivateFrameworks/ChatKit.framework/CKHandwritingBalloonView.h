
@interface CKHandwritingBalloonView : CKTranscriptPluginBalloonView

- (struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; })balloonDescriptor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskFrame;
- (bool)shouldMaskWhenOpaque;

@end
