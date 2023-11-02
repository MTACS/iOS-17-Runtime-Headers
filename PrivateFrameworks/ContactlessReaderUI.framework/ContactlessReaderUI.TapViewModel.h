
@interface ContactlessReaderUI.TapViewModel : _TtCs12_SwiftObject <ProximityReader.TapUI> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _axTransactionContextLabel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _axTransactionContextValue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _centerState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _centerTextKey;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _orientationInverted;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _particlesState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _readerStateModel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showCancelButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showPIN;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _tapUIError;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _tapUIIsPresented;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _transactionDetails;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _vasMerchantNames;
    void axOngoingAnnouncement;
    void cardTearCounter;
    void closeAfterAXAnnouncement;
    void notificationObservers;
    void playSound;
    void proximityCounter;
    void proximitySensorObserver;
    void remoteProxy;
    void rotationManager;
    void sensorObscured;
    void showPINAfterAXAnnouncement;
    void stateMachine;
    void subscriptions;
    void transientCenterStateTimer;
    void voiceOverIsRunning;
}

- (void)closeUI;
- (void)closeUIImmediate;
- (void)requiresCardPIN:(id)arg1;
- (void)updateWithTransactionEvent:(long long)arg1;
- (void)vasReadSuccessWithMerchantNames:(id)arg1;

@end
