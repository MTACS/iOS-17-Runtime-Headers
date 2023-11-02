
@interface CAMLivePhotoButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider> {
    CAMLivePhotoBloomView * __bloomView;
    bool  _allowsAutomaticMode;
}

@property (nonatomic, readonly) CAMLivePhotoBloomView *_bloomView;
@property (nonatomic) bool allowsAutomaticMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long livePhotoMode;
@property (readonly) Class superclass;

+ (double)enablingAnimationDuration;

- (void).cxx_destruct;
- (id)_availableModes;
- (id)_bloomView;
- (id)_currentBaseImage;
- (void)_updateBaseImage;
- (bool)allowsAutomaticMode;
- (void)finishExpansionAnimated:(bool)arg1;
- (id)headerView;
- (id)imageForAccessibilityHUD;
- (long long)indexForMode:(long long)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)interruptEnablingAnimation;
- (long long)livePhotoMode;
- (long long)modeForIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)performEnablingAnimation;
- (void)prepareHeaderViewForExpanding:(bool)arg1;
- (void)reloadData;
- (void)setAllowsAutomaticMode:(bool)arg1;
- (void)setAllowsAutomaticMode:(bool)arg1 needsReloadData:(bool)arg2;
- (void)setLivePhotoMode:(long long)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (id)titleForMenuItemAtIndex:(long long)arg1;

@end
