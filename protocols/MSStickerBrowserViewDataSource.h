
@protocol MSStickerBrowserViewDataSource <NSObject>

@required

- (long long)numberOfStickersInStickerBrowserView:(MSStickerBrowserView *)arg1;
- (MSSticker *)stickerBrowserView:(MSStickerBrowserView *)arg1 stickerAtIndex:(long long)arg2;

@end
