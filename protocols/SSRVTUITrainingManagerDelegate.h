
@protocol SSRVTUITrainingManagerDelegate <NSObject>

@optional

- (void)VTUITrainingManagerAudioSessionRouteChange;
- (void)VTUITrainingManagerAudioSessionTerminatedInStatus:(int)arg1;
- (void)VTUITrainingManagerFeedLevel:(float)arg1;
- (bool)VTUITrainingManagerHasTrainUtterance:(NSData *)arg1 languageCode:(NSString *)arg2;
- (void)VTUITrainingManagerStopListening;

@end
