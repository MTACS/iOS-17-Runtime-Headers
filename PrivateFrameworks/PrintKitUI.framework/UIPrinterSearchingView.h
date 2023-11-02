
@interface UIPrinterSearchingView : UIView {
    bool  _constraintsSet;
    UIPrintMessageAndSpinnerView * _messageAndSpinner;
}

@property (nonatomic) UIPrintMessageAndSpinnerView *messageAndSpinner;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)messageAndSpinner;
- (void)searchTimeout;
- (void)setMessageAndSpinner:(id)arg1;
- (void)setSearching:(bool)arg1;
- (void)updateConstraints;
- (void)updateFont;

@end
