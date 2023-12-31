
@protocol CSVTUITrainingSessionDelegate <NSObject>

@required

- (void)CSVTUITrainingSessionRMSAvailable:(float)arg1;
- (void)CSVTUITrainingSessionStopListen;

@optional

- (bool)CSVTUITrainingSession:(CSVTUITrainingSession *)arg1 hasTrainUtterance:(NSData *)arg2 languageCode:(NSString *)arg3 payload:(bool)arg4;

@end
