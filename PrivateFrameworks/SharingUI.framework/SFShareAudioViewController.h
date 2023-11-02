
@interface SFShareAudioViewController : UINavigationController {
    id /* block */  _completion;
    unsigned int  _flags;
    NSBundle * _mainBundle;
    UIStoryboard * _mainStoryboard;
    SFShareAudioSessionClient * _shareAudioSession;
    SFShareAudioConnectingViewController * _vcConnecting;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) unsigned int flags;
@property (nonatomic, retain) NSBundle *mainBundle;
@property (nonatomic, retain) UIStoryboard *mainStoryboard;
@property (nonatomic, retain) SFShareAudioSessionClient *shareAudioSession;
@property (nonatomic, retain) SFShareAudioConnectingViewController *vcConnecting;

+ (id)instantiateViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_reportCompletion:(id)arg1 mediaRouteID:(id)arg2;
- (void)_sessionProgressEvent:(int)arg1 info:(id)arg2;
- (void)_sessionStart;
- (void)_showBringClose;
- (void)_showConfirm:(id)arg1;
- (void)_showConnecting:(id)arg1;
- (void)_showError:(id)arg1;
- (void)_showPairInstructions:(id)arg1;
- (void)_transitionToViewController:(id)arg1 animate:(bool)arg2;
- (id /* block */)completion;
- (unsigned int)flags;
- (id)mainBundle;
- (id)mainStoryboard;
- (void)reportError:(id)arg1;
- (void)reportUserCancelled;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setMainBundle:(id)arg1;
- (void)setMainStoryboard:(id)arg1;
- (void)setShareAudioSession:(id)arg1;
- (void)setVcConnecting:(id)arg1;
- (id)shareAudioSession;
- (id)vcConnecting;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
