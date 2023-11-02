
@interface ConversationKit.PipZoomControl : NSObject <CAMZoomControlDelegate> {
    void currentCameraUID;
    void currentZoomFactor;
    void maximumZoomFactor;
    void maximumZoomFactorScaler;
    void minimumZoomFactor;
    void pinchGestureRecognizer;
    void pinchStartZoomFactor;
    void zoomCameraSwitchFactorDefault;
    void zoomControl;
    void zoomControlOffset;
}

+ (bool)isZoomSupported;

- (void).cxx_destruct;
- (void)handlePinchWithSender:(id)arg1;
- (id)init;
- (void)zoomControl:(id)arg1 didChangeZoomFactor:(double)arg2 interactionType:(long long)arg3;

@end
