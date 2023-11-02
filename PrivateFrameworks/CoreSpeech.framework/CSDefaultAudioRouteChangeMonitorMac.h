
@interface CSDefaultAudioRouteChangeMonitorMac : CSEventMonitor

+ (id)sharedInstance;

- (unsigned int)defaultOutputAudioDeviceID;
- (bool)isDefaultInputBuiltInMic;
- (bool)isDefaultOutputBultInSpeaker;

@end
