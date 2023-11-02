
@interface PUBrowsingBackgroundTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver> {
    UIVisualEffectView * __backgroundBlurView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __emptyPlaceholderFrame;
    UIContentUnavailableView * __emptyPlaceholderView;
    bool  __needsUpdateColor;
    id /* block */  __nextColorUpdateAnimatorBlock;
    UIColor * _backgroundColorOverride;
    NSString * _emptyPlaceholderCustomSubtitle;
    NSString * _emptyPlaceholderCustomTitle;
    bool  _shouldDisplayEmptyPlaceholder;
    PUBrowsingViewModel * _viewModel;
    UIVisualEffect * _visualEffect;
}

@property (setter=_setBackgroundBlurView:, nonatomic, retain) UIVisualEffectView *_backgroundBlurView;
@property (setter=_setEmptyPlaceholderFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _emptyPlaceholderFrame;
@property (setter=_setEmptyPlaceholderView:, nonatomic, retain) UIContentUnavailableView *_emptyPlaceholderView;
@property (setter=_setNeedsUpdateColor:, nonatomic) bool _needsUpdateColor;
@property (setter=_setNextColorUpdateAnimatorBlock:, nonatomic, copy) id /* block */ _nextColorUpdateAnimatorBlock;
@property (nonatomic, retain) UIColor *backgroundColorOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *emptyPlaceholderCustomSubtitle;
@property (nonatomic, retain) NSString *emptyPlaceholderCustomTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldDisplayEmptyPlaceholder;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUBrowsingViewModel *viewModel;
@property (nonatomic, retain) UIVisualEffect *visualEffect;

- (void).cxx_destruct;
- (id)_backgroundBlurView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_emptyPlaceholderFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_emptyPlaceholderFrameForLayoutInfo:(id)arg1;
- (id)_emptyPlaceholderView;
- (void)_invalidateColor;
- (void)_invalidateColorWithAnimatorBlock:(id /* block */)arg1;
- (bool)_needsUpdateColor;
- (id /* block */)_nextColorUpdateAnimatorBlock;
- (void)_setBackgroundBlurView:(id)arg1;
- (void)_setEmptyPlaceholderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setEmptyPlaceholderView:(id)arg1;
- (void)_setNeedsUpdateColor:(bool)arg1;
- (void)_setNextColorUpdateAnimatorBlock:(id /* block */)arg1;
- (void)_updateBackgroundBlurViewAnimated:(bool)arg1;
- (void)_updateColorIfNeeded;
- (void)_updateEmptyPlaceholderAnimated:(bool)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (id)backgroundColorOverride;
- (void)becomeReusable;
- (id)emptyPlaceholderCustomSubtitle;
- (id)emptyPlaceholderCustomTitle;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setBackgroundColorOverride:(id)arg1;
- (void)setEmptyPlaceholderCustomSubtitle:(id)arg1;
- (void)setEmptyPlaceholderCustomTitle:(id)arg1;
- (void)setShouldDisplayEmptyPlaceholder:(bool)arg1;
- (void)setViewModel:(id)arg1;
- (void)setVisualEffect:(id)arg1;
- (bool)shouldDisplayEmptyPlaceholder;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (id)visualEffect;

@end
