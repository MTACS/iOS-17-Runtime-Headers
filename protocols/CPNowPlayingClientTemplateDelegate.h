
@protocol CPNowPlayingClientTemplateDelegate <CPTemplateDelegate>

@required

- (void)albumArtistButtonTapped;
- (void)handleActionForControlIdentifier:(NSUUID *)arg1;
- (void)upNextButtonTapped;

@end
