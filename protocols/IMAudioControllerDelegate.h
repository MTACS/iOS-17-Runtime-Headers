
@protocol IMAudioControllerDelegate <NSObject>

@optional

- (void)audioController:(IMAudioController *)arg1 didChangeProgressForContentAtURL:(NSURL *)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioController:(IMAudioController *)arg1 didFinishPlayingContentAtURL:(NSURL *)arg2;
- (void)audioController:(IMAudioController *)arg1 didPrepareToPlayContentAtURL:(NSURL *)arg2 successfully:(bool)arg3;
- (void)audioControllerDidPause:(IMAudioController *)arg1;
- (void)audioControllerDidStop:(IMAudioController *)arg1;
- (void)audioControllerPlayingDidChange:(IMAudioController *)arg1;

@end
