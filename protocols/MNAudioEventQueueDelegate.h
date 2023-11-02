
@protocol MNAudioEventQueueDelegate <NSObject>

@optional

- (void)audioSystemEventQueue:(MNAudioSystemEventQueue *)arg1 eventWillInterrupt:(MNAudioSystemEvent *)arg2;

@end
