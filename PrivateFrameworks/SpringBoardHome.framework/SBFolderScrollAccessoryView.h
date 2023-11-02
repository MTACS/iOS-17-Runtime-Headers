
@interface SBFolderScrollAccessoryView : UIView {
    UIView * _auxiliaryView;
    SBFFluidBehaviorSettings * _auxiliaryViewFadeInSettings;
    UIView * _backgroundView;
    SBFolder * _folder;
    UIPageControl * _layoutPageControl;
    long long  _mode;
    UIViewFloatAnimatableProperty * _modeAnimatableProperty;
    SBIconListPageControl * _pageControl;
    SBFFluidBehaviorSettings * _pageControlFadeInSettings;
}

@property (nonatomic, retain) UIView *auxiliaryView;
@property (nonatomic, readonly) SBFFluidBehaviorSettings *auxiliaryViewFadeInSettings;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) SBFolder *folder;
@property (nonatomic, retain) UIPageControl *layoutPageControl;
@property (nonatomic) long long mode;
@property (nonatomic, readonly) UIViewFloatAnimatableProperty *modeAnimatableProperty;
@property (nonatomic, readonly) SBIconListPageControl *pageControl;
@property (nonatomic, readonly) SBFFluidBehaviorSettings *pageControlFadeInSettings;

- (void).cxx_destruct;
- (void)_applyCurrentMode;
- (void)_applyMatchingAnimationsForAuxiliaryViewMatchingContentView:(id)arg1;
- (void)_clearMatchingAnimationsForAuxiliaryView;
- (void)_getCustomPaddingForNumberOfPages:(unsigned long long)arg1 backgroundViewSize:(struct CGSize { double x1; double x2; })arg2 horizontalPadding:(double*)arg3 verticalPadding:(double*)arg4 layoutPageControl:(id*)arg5;
- (id)_layoutPageControlConfiguredForNumberOfPages:(long long)arg1;
- (id)_layoutPageControlMatchingPageControl:(id)arg1;
- (long long)_numberOfPagesForWidth:(double)arg1 maxPageCount:(unsigned long long)arg2;
- (id)_pageIndicatorsView;
- (void)_setUpAnimation;
- (void)_updateForModePropertyChanged;
- (id)auxiliaryView;
- (id)auxiliaryViewFadeInSettings;
- (id)backgroundView;
- (void)dealloc;
- (id)folder;
- (id)initWithFolder:(id)arg1 pageControl:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)layoutPageControl;
- (void)layoutSubviews;
- (long long)mode;
- (id)modeAnimatableProperty;
- (id)pageControl;
- (id)pageControlFadeInSettings;
- (void)setAuxiliaryView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setLayoutPageControl:(id)arg1;
- (void)setMode:(long long)arg1;

@end
