
@interface PKPeerPaymentNumberPadActionButton : PKPeerPaymentMessagesButton {
    unsigned long long  _action;
}

@property (nonatomic) unsigned long long action;

+ (struct CGSize { double x1; double x2; })referenceSize;

- (id)_titleForAction:(unsigned long long)arg1;
- (unsigned long long)action;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAction:(unsigned long long)arg1;

@end
