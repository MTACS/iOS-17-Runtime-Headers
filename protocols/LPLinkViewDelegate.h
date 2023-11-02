
@protocol LPLinkViewDelegate <NSObject>

@optional

- (NSArray *)_contextMenuActionsForLinkView:(LPLinkView *)arg1;
- (UIContextMenuConfiguration *)_linkView:(LPLinkView *)arg1 contextMenuConfigurationForSuggestedConfiguration:(UIContextMenuConfiguration *)arg2;
- (void)_linkView:(LPLinkView *)arg1 didTapCaptionButtonWithType:(long long)arg2;
- (NSURL *)_linkView:(LPLinkView *)arg1 overrideURLForOpeningURL:(NSURL *)arg2;
- (<LPAudioPlayer> *)_linkView:(LPLinkView *)arg1 playerForAudio:(LPAudio *)arg2;
- (void)_linkView:(LPLinkView *)arg1 willOpenURL:(NSURL *)arg2;
- (void)_linkViewMetadataDidBecomeComplete:(LPLinkView *)arg1;
- (bool)_wantsContextMenuPreviewForLinkView:(LPLinkView *)arg1;
- (void)linkView:(LPLinkView *)arg1 didFetchMetadata:(LPLinkMetadata *)arg2;
- (void)linkViewNeedsResize:(LPLinkView *)arg1;

@end
