
@protocol BLSHBacklightOSInterfaceProviding <BLSHOSInterfaceProviding>

@required

- (long long)cbDisplayMode;
- (<BLSCBDisplayStateDelegate> *)cbDisplayStateDelegate;
- (long long)cbFlipbookState;
- (bool)isCABlanked;
- (bool)isCAFlipbookEnabled;
- (bool)isCAFlipbookSuppressed;
- (bool)isKernelAlwaysOnMode;
- (bool)isShowingBlankingWindow;
- (void)setCABlanked:(bool)arg1;
- (void)setCAFlipbookEnabled:(bool)arg1;
- (void)setCAFlipbookSuppressed:(bool)arg1;
- (void)setCBDisplayStateDelegate:(id <BLSCBDisplayStateDelegate>)arg1;
- (void)setKernelAlwaysOnMode:(bool)arg1;
- (void)setShowingBlankingWindow:(bool)arg1 fadeDuration:(double)arg2;
- (bool)supportsFlipbookState;
- (void)switchToFlipbookState:(long long)arg1;
- (void)transitionToDisplayMode:(long long)arg1 withDuration:(double)arg2;
- (void)willUnblank;

@end
