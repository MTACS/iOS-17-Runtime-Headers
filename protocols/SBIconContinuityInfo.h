
@protocol SBIconContinuityInfo <NSObject>

@required

- (bool)isBluetoothAudioPrediction;
- (bool)isBluetoothPrediction;
- (bool)isFirstWakePrediction;
- (bool)isHeadphonesPrediction;
- (bool)isLocationBasedSuggestion;
- (NSString *)originatingDeviceType;

@end
