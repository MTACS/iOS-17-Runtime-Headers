
@interface SVXClientAudioPowerService : NSObject <AFAudioPowerUpdaterDelegate, SVXClientAudioPowerServicing, SVXClientServiceConsuming> {
    <SVXClientServiceProviding> * _clientServiceProvider;
    <SVXClientAudioPowerServiceDelegate> * _delegate;
    long long  _frequency;
    <SVXPerforming> * _performer;
    <AFAudioPowerProviding> * _provider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _providerLock;
    long long  _type;
    AFAudioPowerUpdater * _updater;
    bool  _wantsUpdate;
}

@property (nonatomic, readonly) float averagePower;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SVXClientAudioPowerServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float peakPower;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginUpdateWithFrequency:(long long)arg1;
- (void)_createUpdater;
- (void)_destroyUpdater;
- (void)_endUpdate;
- (void)_handleDidEndUpdateAudioPower;
- (void)_handleWillBeginUpdateAudioPowerWithProvider:(id)arg1;
- (id)_provider;
- (void)_setProvider:(id)arg1;
- (void)audioPowerUpdaterDidUpdate:(id)arg1 averagePower:(float)arg2 peakPower:(float)arg3;
- (float)averagePower;
- (void)beginUpdateWithFrequency:(long long)arg1;
- (void)clientServiceDidChange:(bool)arg1;
- (id)delegate;
- (void)endUpdate;
- (void)handleDidEndUpdateAudioPower;
- (void)handleWillBeginUpdateAudioPowerWithProvider:(id)arg1;
- (id)initWithClientServiceProvider:(id)arg1 analytics:(id)arg2 performer:(id)arg3;
- (id)initWithType:(long long)arg1 clientServiceProvider:(id)arg2 analytics:(id)arg3 performer:(id)arg4;
- (float)peakPower;
- (void)setDelegate:(id)arg1;

@end
