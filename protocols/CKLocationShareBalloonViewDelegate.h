
@protocol CKLocationShareBalloonViewDelegate <CKBalloonViewDelegate>

@required

- (void)locationShareBalloonViewIgnoreButtonTapped:(CKLocationShareBalloonView *)arg1;
- (void)locationShareBalloonViewShareButtonTapped:(CKLocationShareBalloonView *)arg1;
- (UIMenu *)sharingMenu;

@end
