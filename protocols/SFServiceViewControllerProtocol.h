
@protocol SFServiceViewControllerProtocol <NSObject>

@required

- (void)addClickAttribution:(UISClickAttribution *)arg1;
- (void)beginDigitalHealthTracking;
- (void)clearWebsiteDataWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)decideCookieSharingForURL:(NSURL *)arg1 callbackURLScheme:(NSString *)arg2;
- (void)didDetectRemoteViewControllerViewIsHidden;
- (void)didDetectUserInteractionFromHostApp;
- (void)didFetchCustomActivities:(NSArray *)arg1 excludedActivityTypes:(NSArray *)arg2;
- (void)didRequestShowLinkPreviews:(bool)arg1;
- (void)invalidatePrewarmingTokenWithID:(unsigned long long)arg1;
- (void)loadURL:(NSURL *)arg1;
- (void)openCurrentURLInSafariFromPreviewAction;
- (void)prepareForDisplayWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)repostNotificationInViewService:(NSString *)arg1;
- (void)requestPrewarmingWithTokens:(NSArray *)arg1;
- (void)setConfiguration:(SFSafariViewControllerConfiguration *)arg1;
- (void)setDismissButtonStyle:(long long)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setHostAppModalPresentationStyle:(long long)arg1;
- (void)setIsRunningTransitionAnimation:(bool)arg1;
- (void)setPreferredBarTintColor:(UIColor *)arg1;
- (void)setPreferredBarTintColor:(UIColor *)arg1 controlTintColor:(UIColor *)arg2;
- (void)setPreferredControlTintColor:(UIColor *)arg1;
- (void)startResolveRedirectionForURL:(NSURL *)arg1;
- (void)stopDigitalHealthTrackingWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)updateScrollViewIndicatorVerticalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 horizontalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

@end
