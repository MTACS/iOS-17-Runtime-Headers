
@protocol AFUISiriSessionLocalDataSource <NSObject>

@required

- (NSArray *)bulletinsForSiriSession:(AFUISiriSession *)arg1;
- (long long)carPlayEnhancedVoiceTriggerModeForSiriSession:(AFUISiriSession *)arg1;
- (NSArray *)contextAppInfosForSiriSession:(AFUISiriSession *)arg1;
- (NSArray *)currentCarPlaySupportedOEMAppIDListForSiriSession:(AFUISiriSession *)arg1;
- (long long)getDeviceOrientation:(AFUISiriSession *)arg1;
- (bool)getUIViewModeIsUIFreeForCurrentRequest;
- (bool)isAmbientPresented:(AFUISiriSession *)arg1;
- (bool)isPPTAvailable;
- (unsigned long long)lockStateForSiriSession:(AFUISiriSession *)arg1;
- (bool)recentButtonPressActivityDetected:(AFUISiriSession *)arg1;
- (bool)recentTouchScreenActivityDetected:(AFUISiriSession *)arg1;
- (NSArray *)starkAppBundleIdentifierContextForSiriSession:(AFUISiriSession *)arg1;

@end
