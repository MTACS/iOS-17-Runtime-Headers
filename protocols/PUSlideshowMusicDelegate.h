
@protocol PUSlideshowMusicDelegate <NSObject>

@optional

- (void)musicPicker:(PUSlideshowMusicViewController *)arg1 didPickMediaItem:(PUSlideshowMediaItem *)arg2;
- (void)musicPickerDidFinish:(PUSlideshowMusicViewController *)arg1;

@end
