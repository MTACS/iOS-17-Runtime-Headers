
@interface CNActionsView : UIView <CNActionViewDelegate, NUIContainerViewDelegate> {
    NSMutableDictionary * _actionItemsByType;
    NSMutableDictionary * _actionViewsByType;
    NSObject<CNActionsViewProtocol> * _actionsDelegate;
    NUIContainerStackView * _containerView;
    bool  _enableVisualEffectViewCaptureView;
    UIColor * _posterTintColor;
    NSArray * _sortedActionTypes;
    double  _spacing;
    long long  _style;
    UIFont * _titleFont;
    _UIVisualEffectBackdropView * _visualEffectViewCaptureView;
}

@property (nonatomic, retain) NSMutableDictionary *actionItemsByType;
@property (nonatomic, retain) NSMutableDictionary *actionViewsByType;
@property (nonatomic) NSObject<CNActionsViewProtocol> *actionsDelegate;
@property (nonatomic, retain) NUIContainerStackView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableVisualEffectViewCaptureView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *posterTintColor;
@property (nonatomic, copy) NSArray *sortedActionTypes;
@property (nonatomic) double spacing;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) _UIVisualEffectBackdropView *visualEffectViewCaptureView;

+ (long long)axisWithTitlesPresent:(bool)arg1;

- (void).cxx_destruct;
- (id)actionItemsByType;
- (id)actionViewForType:(id)arg1;
- (bool)actionViewShouldPresentDisambiguationUI:(id)arg1;
- (id)actionViewsByType;
- (id)actionsDelegate;
- (void)addActionItem:(id)arg1;
- (id)containerView;
- (void)didPressActionView:(id)arg1 longPress:(bool)arg2;
- (bool)enableVisualEffectViewCaptureView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)insertionIndexForType:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)posterTintColor;
- (void)removeActionItem:(id)arg1;
- (void)resetActions;
- (void)setActionItemsByType:(id)arg1;
- (void)setActionViewsByType:(id)arg1;
- (void)setActionsDelegate:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setEnableVisualEffectViewCaptureView:(bool)arg1;
- (void)setPosterTintColor:(id)arg1;
- (void)setSortedActionTypes:(id)arg1;
- (void)setSpacing:(double)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setVisualEffectViewCaptureView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sortedActionTypes;
- (double)spacing;
- (long long)style;
- (id)titleFont;
- (void)updateActionItem:(id)arg1;
- (void)updateAxis;
- (id)visualEffectViewCaptureView;

@end
