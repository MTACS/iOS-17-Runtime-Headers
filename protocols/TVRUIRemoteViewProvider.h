
@protocol TVRUIRemoteViewProvider <NSObject>

@required

- (bool)enabled;
- (void)setDevice:(id <TVRUIDevice>)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setStyleProvider:(id <TVRUIStyleProvider>)arg1;

@optional

- (void)setVolumeControlAvailable:(bool)arg1;

@end
