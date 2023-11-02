
@interface TVRMSDAAPTouchRemoteManager : NSObject <TVRMSTouchRemoteSocketDelegate> {
    long long  _controlPromptRevision;
    <TVRMSDAAPTouchRemoteManagerDelegate> * _delegate;
    int  _encryptionKey;
    bool  _keyboardEditingSessionActive;
    long long  _keyboardEditingSessionID;
    TVRMSFairPlayKeyboardEncryption * _keyboardEncryption;
    TVRMSKeyboardInfo * _keyboardInfo;
    int  _port;
    int  _portSecret;
    TVRMSDAAPRequestManager * _requestManager;
    TVRMSTouchRemoteSocket * _socket;
    float  _touchDistanceMax;
    float  _touchDistanceMin;
    unsigned int  _touchTimeMax;
    unsigned int  _touchTimeMin;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TVRMSDAAPTouchRemoteManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createSocket;
- (id)_encryptString:(id)arg1;
- (struct CGPoint { double x1; double x2; })_locationForDirection:(long long)arg1 repeatCount:(int)arg2;
- (void)_parsePortInfoItems:(id)arg1;
- (void)_processAuthenticationUpdateForItems:(id)arg1;
- (void)_processKeyboardMessageItems:(id)arg1;
- (void)_requestKeyboardStatus;
- (void)_requestPortInfo;
- (void)_requestPromptUpdate:(id /* block */)arg1;
- (unsigned int)_timeForDirection:(long long)arg1 repeatCount:(int)arg2;
- (void)clearKeyboardText;
- (id)delegate;
- (id)initWithRequestManager:(id)arg1;
- (void)initiateControlWithCompletionHandler:(id /* block */)arg1;
- (bool)keyboardEditingSessionActive;
- (id)keyboardInfo;
- (void)sendKeyboardReturnCommand;
- (void)sendNavigationCommand:(long long)arg1;
- (void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(int)arg2;
- (void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(int)arg2;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardText:(id)arg1;
- (void)touchRemoteSocketDidConnect:(id)arg1;
- (void)touchRemoteSocketDidDisconnect:(id)arg1;

@end
