
@protocol AVAudioRemoteInputPluginDelegate

@required

- (void)inputPlugin:(id <AVAudioRemoteInputPlugin>)arg1 didPublishDevice:(id <AVAudioRemoteInputDevice>)arg2;
- (void)inputPlugin:(id <AVAudioRemoteInputPlugin>)arg1 didUnpublishDevice:(id <AVAudioRemoteInputDevice>)arg2;

@end
