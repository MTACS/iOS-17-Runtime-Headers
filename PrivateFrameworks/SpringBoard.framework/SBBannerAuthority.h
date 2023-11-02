
@interface SBBannerAuthority : NSObject <BNConsidering, BNConsideringDelegate> {
    NSObject<OS_dispatch_queue> * _biomeQueue;
    <BNConsideringDelegate> * _delegate;
    bool  _isConfiguringSinks;
    NSMutableDictionary * _requesterIDsToAuthorities;
    bool  _screenSharingActive;
    NSMutableDictionary * _sinks;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BNConsideringDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_isScreenSharingActive, setter=_setScreenSharingActive:) bool screenSharingActive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureSinksIfNecessary;
- (bool)_isScreenSharingActive;
- (long long)_mediatedDecisionFromDecisions:(id)arg1 defaultDecision:(long long)arg2;
- (void)_setScreenSharingActive:(bool)arg1;
- (bool)_shouldDropPresentableDuringScreenSharing:(id)arg1 userInfo:(id)arg2;
- (bool)_shouldDropPresentablesDuringScreenSharing;
- (void)bannerAuthority:(id)arg1 mayChangeDecisionForResponsiblePresentable:(id)arg2;
- (id)delegate;
- (id)init;
- (void)registerAuthority:(id)arg1 forRequesterIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (long long)shouldOverlapPresentable:(id)arg1 withPresentable:(id)arg2;
- (long long)shouldPostPresentable:(id)arg1 userInfo:(id)arg2 reason:(out id*)arg3;
- (long long)shouldPresentPresentable:(id)arg1 withPresentedPresentables:(id)arg2 responsiblePresentable:(out id*)arg3;

@end
