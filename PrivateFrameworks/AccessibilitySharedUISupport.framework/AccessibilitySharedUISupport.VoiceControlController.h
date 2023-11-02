
@interface AccessibilitySharedUISupport.VoiceControlController : _TtCs12_SwiftObject {
    void _commandAndControlEnabledChanged;
    void _commandWindowStatus;
    void _currentOverlay;
    void _dictatedString;
    void _dictationStatus;
    void _enabled;
    void _gridDrill;
    void _gridPath;
    void _gridPathCommand;
    void _gridRectangle;
    void _heySiriEnabled;
    void _listeningStatus;
    void _numberForNextButton;
    void _numberForPracticeButton;
    void _numberForPrevButton;
    void _phoneticAlternative;
    void _recognizedCommandIdentifier;
    void _voiceTriggerStatusChanged;
    void cancelPendingRetries;
    void connection;
    void connectionRetryCount;
    void handlerQueue;
    void hasPendingRetry;
    void hasValidConnection;
}

- (void)_updateSettingsWithNotification:(id)arg1;

@end
