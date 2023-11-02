
@interface SVXClientAudioSystemService : NSObject <SVXClientAudioSystemServicing, SVXClientServiceConsuming> {
    <SVXClientServiceProviding> * _clientServiceProvider;
    <SVXClientAudioSystemServiceDelegate> * _delegate;
    bool  _isAudioSessionActive;
    <SVXPerforming> * _performer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SVXClientAudioSystemServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clientServiceDidChange:(bool)arg1;
- (id)delegate;
- (void)handleAudioSessionDidBecomeActive:(bool)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3;
- (void)handleAudioSessionIDDidChange:(unsigned int)arg1;
- (void)handleAudioSessionWillBecomeActive:(bool)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3;
- (id)initWithClientServiceProvider:(id)arg1 analytics:(id)arg2 performer:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
