
@interface UIKBCandidateView : UIKBKeyView {
    UIView * _candidateKey;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 8; 
        unsigned int padding : 8; 
    }  _visualStyling;
}

@property (nonatomic, retain) UIView *candidateKey;
@property (nonatomic) struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; } visualStyling;

- (void).cxx_destruct;
- (id)candidateKey;
- (id)candidateList;
- (void)clearCandidateKey;
- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (bool)isTenKey;
- (void)setCandidateKey:(id)arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1;
- (void)updateCandidateKey;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })visualStyling;

@end
