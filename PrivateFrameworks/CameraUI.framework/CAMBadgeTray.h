
@interface CAMBadgeTray : UIView <CEKBadgeViewDelegate> {
    NSMutableDictionary * __badgeMap;
    <CAMBadgeTrayDelegate> * _delegate;
    unsigned long long  _visibleBadges;
}

@property (nonatomic, readonly) NSMutableDictionary *_badgeMap;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMBadgeTrayDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CAMElapsedTimeView *elapsedTimeView;
@property (nonatomic, readonly) CAMFlashBadge *flashBadge;
@property (nonatomic, readonly) CAMFocusLockBadge *focusLockBadge;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CAMLivePhotoBadge *livePhotoBadge;
@property (nonatomic, readonly) CAMSharedLibraryBadge *sharedLibraryBadge;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAMVideoStabilizationBadge *videoStabilizationBadge;
@property (nonatomic) unsigned long long visibleBadges;

- (void).cxx_destruct;
- (unsigned long long)_badgeFontStyle;
- (id)_badgeMap;
- (id)_createControlForType:(unsigned long long)arg1;
- (void)_forBadgeTypeInBadgeTypes:(unsigned long long)arg1 do:(id /* block */)arg2;
- (void)_layoutBadges:(unsigned long long)arg1 withVisibleBadges:(unsigned long long)arg2;
- (void)_loadBadgesIfNeededForTypes:(unsigned long long)arg1;
- (void)_updateBadgesVisibilityForVisibleBadges:(unsigned long long)arg1;
- (void)badgeViewDidChangeIntrinsicContentSize:(id)arg1;
- (id)delegate;
- (id)elapsedTimeView;
- (id)flashBadge;
- (id)focusLockBadge;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)livePhotoBadge;
- (void)setDelegate:(id)arg1;
- (void)setVisibleBadges:(unsigned long long)arg1;
- (void)setVisibleBadges:(unsigned long long)arg1 animated:(bool)arg2;
- (id)sharedLibraryBadge;
- (void)traitCollectionDidChange:(id)arg1;
- (id)videoStabilizationBadge;
- (unsigned long long)visibleBadges;

@end
