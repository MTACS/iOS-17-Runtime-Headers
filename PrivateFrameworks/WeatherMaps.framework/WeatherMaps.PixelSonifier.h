
@interface WeatherMaps.PixelSonifier : _TtCs12_SwiftObject {
    void $__lazy_storage_$_disableMapOverlaySonification;
    void appConfigurationManager;
    void audioSessionCategoryHasBeenSet;
    void delegate;
    void frameIndex;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  frames;
    void geocodeManager;
    void gestureRecognizer;
    void gestureRequiresOptionKey;
    void gestureStart;
    void hoverInterval;
    void hoverJitterThreshold;
    void hoverState;
    void isEnabled;
    void isTrackingGesture;
    void liveModeState;
    void locationMetadataManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  overlayDataState;
    void valueSpace;
}

- (void)handleGestureWithRecognizer:(id)arg1;
- (void)hoverTimerFiredWithTimer:(id)arg1;

@end
