
@protocol MPVolumeDisplaying <NSObject>

@optional

- (bool)isOnScreen;
- (bool)isOnScreenForVolumeDisplay;
- (NSString *)volumeAudioCategory;
- (UIWindowScene *)windowSceneForVolumeDisplay;

@end
