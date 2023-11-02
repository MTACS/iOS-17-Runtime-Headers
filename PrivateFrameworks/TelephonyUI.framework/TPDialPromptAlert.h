
@interface TPDialPromptAlert : TPAlert <SBSRemoteAlertHandleObserver> {
    NSString * _buttonTitle;
    id /* block */  _dialAction;
    NSSet * _handles;
    bool  _isFaceTimeRequest;
    BSProcessHandle * _processHandle;
    SBSRemoteAlertHandle * _remoteAlertHandle;
}

@property (nonatomic, readonly, copy) NSString *buttonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dialAction;
@property (nonatomic, readonly, copy) NSSet *handles;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFaceTimeRequest;
@property (nonatomic, readonly) BSProcessHandle *processHandle;
@property (nonatomic, retain) SBSRemoteAlertHandle *remoteAlertHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buttonTitle;
- (void)dealloc;
- (id)defaultButtonTitle;
- (void)defaultResponse;
- (id /* block */)dialAction;
- (id)handles;
- (id)initWithButtonTitle:(id)arg1 handles:(id)arg2 isFaceTimeRequest:(bool)arg3 dialAction:(id /* block */)arg4;
- (id)initWithDialRequest:(id)arg1 dialAction:(id /* block */)arg2;
- (id)initWithJoinRequest:(id)arg1 dialAction:(id /* block */)arg2;
- (void)invalidate;
- (bool)isFaceTimeRequest;
- (id)otherButtonTitle;
- (void)otherResponse;
- (id)phoneNumberHandle;
- (id)processHandle;
- (id)remoteAlertHandle;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setDialAction:(id /* block */)arg1;
- (void)setIsFaceTimeRequest:(bool)arg1;
- (void)setRemoteAlertHandle:(id)arg1;
- (void)show;
- (id)title;

@end
