
@interface HoverTextUI.AXRuntimeClient : NSObject {
    void _isEnabled;
    void axObserver;
    void didReceiveAnnouncement;
    void didReceiveNotification;
    void elementVisualsUpdated;
    void focusedApplicationsDidChange;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void nativeFocusItemDidChange;
    void runloop;
    void subscribeToNotifications;
    void valueChanged;
}

- (void).cxx_destruct;
- (id)init;

@end
