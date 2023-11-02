
@interface RTTCall : NSObject <AVCVirtualTTYDeviceDelegate> {
    TUCall * _call;
    NSObject<OS_dispatch_queue> * _callQueue;
    RTTConversation * _conversation;
    <RTTCallDelegate> * _delegate;
    AXDispatchTimer * _garbageCharacterStripperTimer;
    NSMutableString * _garbageCollection;
    AXDispatchTimer * _incomingMessageTimeout;
    bool  _isViewControllerVisible;
    AXDispatchTimer * _outgoingMessageTimeout;
    NSDictionary * _substitutions;
    AVCVirtualTTYDevice * _ttyDevice;
    long long  _ttyMode;
}

@property (nonatomic, retain) TUCall *call;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callQueue;
@property (nonatomic, retain) RTTConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RTTCallDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isViewControllerVisible;
@property (nonatomic, retain) NSDictionary *substitutions;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVCVirtualTTYDevice *ttyDevice;

- (void).cxx_destruct;
- (bool)_handleInitialGarbageTextFromTTY:(id)arg1 device:(id)arg2;
- (void)_postLocalNotificationForText:(id)arg1;
- (void)_processMessageTimeoutForMe:(bool)arg1;
- (id)_processText:(id)arg1 withDevice:(id)arg2;
- (void)audioSessionWasInterrupted:(id)arg1;
- (id)call;
- (void)callDidReceiveText:(id)arg1 forUtterance:(id)arg2;
- (id)callQueue;
- (void)callStatusDidChange:(id)arg1;
- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)device:(id)arg1 didReceiveCharacter:(unsigned short)arg2;
- (void)device:(id)arg1 didReceiveText:(id)arg2;
- (void)device:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)deviceDidStop:(id)arg1;
- (id)initWithCall:(id)arg1;
- (bool)isLocallyHosted;
- (bool)isViewControllerVisible;
- (void)mediaServerDied;
- (void)recreateTTYDevice:(id)arg1;
- (void)registerNotifications;
- (void)saveTranscribedTextForConversation:(id)arg1 isNew:(bool)arg2;
- (void)sendString:(id)arg1;
- (void)sendVoicemailTranscriptionText:(id)arg1;
- (void)setCall:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsViewControllerVisible:(bool)arg1;
- (void)setSubstitutions:(id)arg1;
- (void)setTtyDevice:(id)arg1;
- (void)start;
- (void)stop;
- (id)substitutions;
- (void)toggleSystemOutputMute:(bool)arg1;
- (id)ttyDevice;

@end
