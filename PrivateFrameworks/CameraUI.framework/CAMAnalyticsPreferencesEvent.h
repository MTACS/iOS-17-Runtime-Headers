
@interface CAMAnalyticsPreferencesEvent : CAMAnalyticsEvent {
    CAMCaptureCapabilities * __capabilities;
}

@property (nonatomic, readonly) CAMCaptureCapabilities *_capabilities;

- (void).cxx_destruct;
- (id)_capabilities;
- (id)_focalLengthStringForCustomLens:(long long)arg1;
- (id)eventName;
- (id)initWithPreferences:(id)arg1;

@end
