
@interface RPFeatureFlagUtility : NSObject {
    bool  _alwaysOnDisplayEnabled;
    bool  _coreGraphicsCaptureAPINotificiationEnabled;
    bool  _independentWindowAlwaysHDEnabled;
    bool  _screenCaptureAlertEnabled;
    bool  _screenRecordingCameraPip;
    bool  _stereoAudioControlCenter;
    bool  _systemBannerEnabled;
}

@property (nonatomic, readonly) bool alwaysOnDisplayEnabled;
@property (nonatomic, readonly) bool coreGraphicsCaptureAPINotificiationEnabled;
@property (nonatomic, readonly) bool independentWindowAlwaysHDEnabled;
@property (nonatomic, readonly) bool screenCaptureAlertEnabled;
@property (nonatomic, readonly) bool screenRecordingCameraPip;
@property (nonatomic, readonly) bool stereoAudioControlCenter;
@property (nonatomic, readonly) bool systemBannerEnabled;

+ (id)sharedInstance;

- (bool)alwaysOnDisplayEnabled;
- (bool)coreGraphicsCaptureAPINotificiationEnabled;
- (bool)independentWindowAlwaysHDEnabled;
- (id)init;
- (bool)screenCaptureAlertEnabled;
- (bool)screenRecordingCameraPip;
- (bool)stereoAudioControlCenter;
- (bool)systemBannerEnabled;

@end
