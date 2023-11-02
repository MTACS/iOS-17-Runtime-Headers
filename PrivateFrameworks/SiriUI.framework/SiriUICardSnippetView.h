
@interface SiriUICardSnippetView : UIView <SiriSharedUISnippetLoadingStateProviding> {
    SiriUISnippetViewController * _backingViewController;
    UIView * _cardView;
    <SiriUICardSnippetViewDataSource> * _dataSource;
    <SiriUICardSnippetViewDelegate> * _delegate;
    bool  _isInAmbient;
    bool  _isInAmbientInteractivity;
    SiriUISashView * _sashView;
    bool  _shouldClipTopOfCard;
}

@property (nonatomic, readonly) UIButton *backNavigationButton;
@property (nonatomic) SiriUISnippetViewController *backingViewController;
@property (nonatomic) <SiriUICardSnippetViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriUICardSnippetViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInAmbient;
@property (nonatomic) bool isInAmbientInteractivity;
@property (getter=isNavigating, nonatomic) bool navigating;
@property (nonatomic, readonly) bool shouldAutomaticallyScaleContentInAmbient;
@property (nonatomic) bool shouldClipTopOfCard;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_sashViewRecognizedTapGestureWithGestureRecognizer:(id)arg1;
- (id)accessibilityIdentifier;
- (id)backNavigationButton;
- (id)backingViewController;
- (id)dataSource;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHint;
- (bool)isInAmbient;
- (bool)isInAmbientInteractivity;
- (bool)isLoading;
- (bool)isNavigating;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setBackingViewController:(id)arg1;
- (void)setCardView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsInAmbient:(bool)arg1;
- (void)setIsInAmbientInteractivity:(bool)arg1;
- (void)setNavigating:(bool)arg1;
- (void)setShouldClipTopOfCard:(bool)arg1;
- (bool)shouldAutomaticallyScaleContentInAmbient;
- (bool)shouldClipTopOfCard;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
