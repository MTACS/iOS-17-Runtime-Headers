
@interface TUIProactiveCandidateCell : TUICandidateBaseCell {
    TIKeyboardCandidate * _candidate;
    UIView * _slotContentView;
}

@property (nonatomic, retain) TIKeyboardCandidate *candidate;
@property (nonatomic, retain) UIView *slotContentView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)candidate;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCandidate:(id)arg1;
- (void)setSlotContentView:(id)arg1;
- (id)slotContentView;

@end
