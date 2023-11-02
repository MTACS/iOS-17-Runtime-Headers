
@interface MRUStepper : UIView <MRUVisualStylingProviderObserver> {
    UIView * _decrementBackground;
    MRUTransportButton * _decrementButton;
    UIImage * _decrementImage;
    <MRUStepperDelegate> * _delegate;
    bool  _dimmed;
    UIView * _incrementBackground;
    MRUTransportButton * _incrementButton;
    UIImage * _incrementImage;
    UIImageSymbolConfiguration * _preferredSymbolConfiguration;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIView *decrementBackground;
@property (nonatomic, retain) MRUTransportButton *decrementButton;
@property (nonatomic, retain) UIImage *decrementImage;
@property (nonatomic) <MRUStepperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDimmed, nonatomic) bool dimmed;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *incrementBackground;
@property (nonatomic, retain) MRUTransportButton *incrementButton;
@property (nonatomic, retain) UIImage *incrementImage;
@property (nonatomic, retain) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)decreaseButtonHoldBegan:(id)arg1;
- (void)decreaseButtonHoldReleased:(id)arg1;
- (void)decreaseTouchUpInside:(id)arg1;
- (id)decrementBackground;
- (id)decrementButton;
- (id)decrementImage;
- (id)delegate;
- (void)increaseButtonHoldBegan:(id)arg1;
- (void)increaseButtonHoldReleased:(id)arg1;
- (void)increaseTouchUpInside:(id)arg1;
- (id)incrementBackground;
- (id)incrementButton;
- (id)incrementImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDimmed;
- (void)layoutSubviews;
- (id)preferredSymbolConfiguration;
- (void)setDecrementBackground:(id)arg1;
- (void)setDecrementButton:(id)arg1;
- (void)setDecrementImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setIncrementBackground:(id)arg1;
- (void)setIncrementButton:(id)arg1;
- (void)setIncrementImage:(id)arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1;
- (void)setStylingProvider:(id)arg1;
- (id)stylingProvider;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end
