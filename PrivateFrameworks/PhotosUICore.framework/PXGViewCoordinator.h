
@interface PXGViewCoordinator : NSObject <PXGViewCoordinatorConfiguration> {
    NSMapTable * _backgroundColorByViewBeforeTransition;
    UIView * _belowSubview;
    UIView * _containerView;
    long long  _contentInsetAdjustmentBehavior;
    PXGLayout * _contentLayout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    bool  _isPreparedForTransition;
    PXMediaProvider * _mediaProvider;
    unsigned char  _presentationType;
    bool  _shouldEmbedContentLayout;
    bool  _shouldMoveTungstenViewDuringTransition;
    bool  _showsHorizontalScrollIndicator;
    bool  _showsVerticalScrollIndicator;
    PXGTransitioningLayout * _transitionLayout;
    PXGView * _tungstenView;
}

@property (nonatomic, readonly) UIView *belowSubview;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic) long long contentInsetAdjustmentBehavior;
@property (nonatomic, readonly) PXGLayout *contentLayout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) bool isPreparedForTransition;
@property (nonatomic, retain) PXMediaProvider *mediaProvider;
@property (nonatomic) unsigned char presentationType;
@property (nonatomic) bool shouldEmbedContentLayout;
@property (nonatomic) bool shouldMoveTungstenViewDuringTransition;
@property (nonatomic) bool showsHorizontalScrollIndicator;
@property (nonatomic) bool showsVerticalScrollIndicator;
@property (nonatomic, readonly) PXGTransitioningLayout *transitionLayout;
@property (nonatomic, readonly) PXGView *tungstenView;

+ (id)tungstenViewCoordinatorInContainerViewController:(id)arg1;

- (void).cxx_destruct;
- (void)_addTungstenViewToContainerView;
- (id)belowSubview;
- (id)containerView;
- (long long)contentInsetAdjustmentBehavior;
- (id)contentLayout;
- (id)init;
- (id)initWithContentLayout:(id)arg1 containerView:(id)arg2 belowSubview:(id)arg3 containerViewController:(id)arg4 configuration:(id /* block */)arg5;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (bool)isPreparedForTransition;
- (id)mediaProvider;
- (void)prepareForTransitionInContainerView:(id)arg1 withContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (unsigned char)presentationType;
- (void)restoreAfterTransition;
- (void)setContentInsetAdjustmentBehavior:(long long)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIsPreparedForTransition:(bool)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setPresentationType:(unsigned char)arg1;
- (void)setShouldEmbedContentLayout:(bool)arg1;
- (void)setShouldMoveTungstenViewDuringTransition:(bool)arg1;
- (void)setShowsHorizontalScrollIndicator:(bool)arg1;
- (void)setShowsVerticalScrollIndicator:(bool)arg1;
- (bool)shouldEmbedContentLayout;
- (bool)shouldMoveTungstenViewDuringTransition;
- (bool)showsHorizontalScrollIndicator;
- (bool)showsVerticalScrollIndicator;
- (id)transitionLayout;
- (id)tungstenView;

@end
