
@protocol TKVibrationRecorderViewControllerDelegate <NSObject>

@required

- (void)vibrationRecorderViewController:(TKVibrationRecorderViewController *)arg1 didFinishRecordingVibrationPattern:(NSDictionary *)arg2 name:(NSString *)arg3;
- (void)vibrationRecorderViewControllerWasDismissedWithoutSavingRecordedVibrationPattern:(TKVibrationRecorderViewController *)arg1;

@end
