
@interface SFRemoteAutoFillSession : NSObject {
    bool  _activateCalled;
    id /* block */  _completedHandler;
    NSData * _contextAppIconData;
    NSArray * _contextAssociatedDomains;
    NSString * _contextBundleID;
    NSString * _contextLocalizedAppName;
    int  _contextRequestState;
    NSString * _contextURL;
    NSString * _contextUnlocalizedAppName;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    NSDate * _pairClock;
    int  _pairState;
    struct PairingSubstate { 
        int contacts; 
        int homeKit; 
        int visual; 
        int pairVerify; 
        int pin; 
    }  _pairSubstate;
    id /* block */  _pairingFinishedHandler;
    bool  _pairingFinishedNotified;
    int  _passwordPickerState;
    SFDevice * _peerDevice;
    NSString * _pickedPassword;
    NSString * _pickedUsername;
    bool  _prefPairContactsDisabled;
    bool  _prefPairHomeKitDisabled;
    bool  _prefPairVerifyDisabled;
    bool  _prefPairVisualDisabled;
    id /* block */  _promptForPINHandler;
    id /* block */  _promptForPickerHandler;
    int  _sendCredentialsState;
    SFSession * _session;
    int  _sessionState;
}

@property (nonatomic, copy) id /* block */ completedHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ pairingFinishedHandler;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, copy) id /* block */ promptForPINHandler;
@property (nonatomic, copy) id /* block */ promptForPickerHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completedWithError:(id)arg1;
- (void)_handleContextRequestResponse:(id)arg1 error:(id)arg2;
- (void)_handlePasswordPickerResponse:(id)arg1 password:(id)arg2 error:(id)arg3;
- (void)_handleSendCredentialsResponse:(id)arg1 error:(id)arg2;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_run;
- (int)_runContextRequest;
- (int)_runPair;
- (int)_runPairContacts;
- (int)_runPairHomeKit;
- (int)_runPairPIN;
- (int)_runPairVerify;
- (int)_runPairVisual;
- (int)_runPasswordPicker;
- (int)_runSendCredentials;
- (int)_runSessionStart;
- (void)activate;
- (id /* block */)completedHandler;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)pairingFinishedHandler;
- (id)peerDevice;
- (id /* block */)promptForPINHandler;
- (id /* block */)promptForPickerHandler;
- (void)setCompletedHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setPairingFinishedHandler:(id /* block */)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;
- (void)setPromptForPickerHandler:(id /* block */)arg1;
- (void)tryPIN:(id)arg1;

@end
