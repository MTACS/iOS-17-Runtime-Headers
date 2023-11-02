
@protocol SBButtonEventsHandler <NSObject>

@required

- (bool)handleHeadsetButtonPress:(bool)arg1;
- (bool)handleHomeButtonDoublePress;
- (bool)handleHomeButtonLongPress;
- (bool)handleHomeButtonPress;
- (bool)handleLockButtonPress;
- (bool)handleVoiceCommandButtonPress;
- (bool)handleVolumeDownButtonPress;
- (bool)handleVolumeUpButtonPress;

@end
