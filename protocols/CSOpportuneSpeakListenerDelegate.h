
@protocol CSOpportuneSpeakListenerDelegate <NSObject>

@optional

- (void)opportuneSpeakListener:(CSOpportuneSpeakListener *)arg1 didStopUnexpectedly:(bool)arg2;
- (void)opportuneSpeakListener:(CSOpportuneSpeakListener *)arg1 hasRemoteVADAvailable:(bool)arg2;
- (void)opportuneSpeakListener:(CSOpportuneSpeakListener *)arg1 hasVADAvailable:(bool)arg2;
- (void)opportuneSpeakListener:(CSOpportuneSpeakListener *)arg1 hasVADAvailable:(bool)arg2 withHostTime:(float)arg3;

@end
